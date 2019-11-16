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

HRESULT RunApplication()
{
	BEGIN_ERROR_HANDLING();

	CComPtr<IDismProviderStore> pProvStore;
	CHK(pMain->GetLocalProviderStore(&pProvStore), "Failed to get IDismProviderStore.");

	CHK(pProvStore->AddProvider(BSE(L"OSProvider")), "Failed to connect to the CbsProvider.");

	CComPtr<IDismProvider> pOsProv;
	CHK(pProvStore->GetProvider(BSE(L"OSServices"), (IDismProvider**)&pOsProv), "Failed to get OSServicesProvider.");

	CComPtr<IDismOSServiceManager> pOsServ;
	CHK(pOsProv->QueryInterface((IDismOSServiceManager**)&pOsServ), "Failed to get OSServiceManager.");

	CHK(pOsServ->SetSystemPath(BSE(L"C:\\")),
		"Failed to set system path for OSServiceManager.");
	CHK(pOsServ->SetWindowsDirectory(BSE(L"C:\\Windows")),
		"Failed to set windows dir for OSServiceManager.");
	
	CComBSTR pathStack;
	CHK(pOsServ->get_ServicingStackDirectory(&pathStack), "Failed to get path to stack.");

	wprintf(L"Stack Path: %s\n", BSTR2SZ(pathStack));

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
