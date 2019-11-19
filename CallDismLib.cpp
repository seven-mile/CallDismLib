#include "pch.h"
#include "dism_h.h"
#include "dllhelper.hpp"

Path pathDismCore;
std::unique_ptr<DllHelper> dllDismCore;

IClassFactory* pFactory;

IDismManager* pMain;
IDismConfiguration* pConf;

HRESULT FindDismCore()
{
	BEGIN_ERROR_HANDLING();

	pathDismCore = GetExeFilePath();
	pathDismCore.remove_filename();
	pathDismCore += L"DismCore.dll";

	if (!std::filesystem::exists(pathDismCore))
	{
		SLog(L"Info\tFind: Core not found in exe dir, trying system32/dism.");

		std::wstring strt;
		GetEnvironmentVariable(L"WINDIR", GetStrBuffer(strt), 128);
		pathDismCore = Path(RebaseStr(strt)) += "\\System32\\Dism\\DismCore.dll";

		if (!std::filesystem::exists(pathDismCore))
			WIN32ERR_LOG(ERROR_FILE_NOT_FOUND, "Fatal\tFind: Core not found.");
	}
	
	SLog(L"Info\tFind: Core located in %s will be load.", pathDismCore.c_str());

	return S_OK;
}

HRESULT LoadDismCore()
{
	BEGIN_ERROR_HANDLING();

	// Load DismCore
	dllDismCore = std::make_unique<DllHelper>(pathDismCore,
		[&](){ pFactory->Release(), pMain->Release(), pConf->Release(); });

	auto pfDllGetClassObj = dllDismCore
		->GetFunc<HRESULT(const CLSID*,const IID*,IClassFactory**)>
		("DllGetClassObject");

	// Get DismFactory
	CHK(pfDllGetClassObj(&CLSID_DismManager, &IID_IClassFactory, &pFactory), "Failed to get class object from core.");

	CHK(pFactory->CreateInstance(NULL, IID_IDismManager, (LPVOID*)&pMain), "Failed to create factory.");
	CHK(pMain->QueryInterface(&pConf), "Failed to QueryInterface IDismConfiguration from IDismManager.");
	CHK(pConf->put_logFile(BSE(DISM_LOG_FILE)),
		"Failed to redirect log file to %s.", DISM_LOG_FILE);
	pConf->put_ScratchDir(BSE(DISM_TEMP_DIR));

	return S_OK;
}

HRESULT ConfigProviderStore(CComPtr<IDismProviderStore> pProvStore)
{
	BEGIN_ERROR_HANDLING();

	CHK(pProvStore->AddProvider(BSE(L"OSProvider")), "Failed to connect to the OSProvider.");

	CComPtr<IDismProvider> pOsProv;
	CHK(pProvStore->GetProvider(BSE(L"OSServices"), &pOsProv), "Failed to get OSServicesProvider.");

	CComPtr<IDismOSServiceManager> pOsServ;
	CHK(pOsProv->QueryInterface(&pOsServ), "Failed to get OSServiceManager.");

	CHK(pOsServ->SetSystemPath(BSE(L"E:\\MyCache\\Vx")),
		"Failed to set system path for OSServiceManager.");
	CHK(pOsServ->SetWindowsDirectory(BSE(L"E:\\MyCache\\Vx\\Windows")),
		"Failed to set windows dir for OSServiceManager.");

	// Connect to OSService
	*(IDismOSServiceManager**)(pProvStore - 8 + 22) = pOsServ;

	CHK(pProvStore->AddProvider(BSE(L"CbsProvider")),		"Failed to connect to the CbsProvider.");
	CHK(pProvStore->AddProvider(BSE(L"GenericProvider")),	"Failed to connect to the GenericProvider.");

	return S_OK;
}

HRESULT RunApplication()
{
	BEGIN_ERROR_HANDLING();

	CComPtr<IDismProviderStore> pProvStore;
	CHK(pMain->GetLocalProviderStore(&pProvStore), "Failed to get IDismProviderStore.");
	
	CHK(ConfigProviderStore(pProvStore), "Failed to config IDismProviderStore.");
	CComPtr<IDismProvider> pCbsProv;
	CHK(pProvStore->GetProvider(BSE(L"DISM Package Manager"), &pCbsProv),
		"Failed to get PkgMgr(CBS) Provider.");
	CComPtr<IDismPackageManager5> pPkgMgr;
	pCbsProv->QueryInterface(&pPkgMgr);
	CComPtr<IDismCapabilityCollection> pCapas;
	pPkgMgr->GetCapabilityCollection(DISM_ON_DEMAND_SOURCE_CLOUD, &pCapas);

	auto v(GetInterfaces<IDismCapability>(pCapas));

	for (auto pCapa : v)
	{
		CComBSTR pProp;
		pCapa->get_Id(&pProp);
		std::wcout << "ID: " << BSTR2SZ(pProp) << std::endl;
		pCapa->get_DisplayName(&pProp);
		std::wcout << "Name: " << BSTR2SZ(pProp) << std::endl;

		DISM_INSTALL_STATE state;
		pCapa->get_State(&state);
		std::wcout << TextizeState(state) << std::endl;
	}

	// Accessibility.Braille
	CHK(v[0]->Install(), "Failed to install...");

	return S_OK;
}

int main()
{
	BEGIN_ERROR_HANDLING();

	CHK(CoInitialize(NULL), "Failed to init COM.");

	setlocale(LC_ALL, "");

	CHK(FindDismCore(), "DismCore.dll not found!");
	CHK(LoadDismCore(), "Failed to load & config DismCore");

	CHK(RunApplication(), "Failed to perform user-defined operations.");

	CoUninitialize();
	return 0;
}
