#pragma once

// Powerful(Complex?...) Error Handling

#define BEGIN_ERROR_HANDLING() HRESULT hr = (S_OK)
#define HR_LOG(x,y,...) (SLog(L"Error\t" y L" [HRESULT - 0x%x - %s]",##__VA_ARGS__,(x),TextizeHr(x).c_str()))
#define WIN32ERR_LOG(x,y,...) HR_LOG(HRESULT_FROM_WIN32(x),y,##__VA_ARGS__)
#define LASTERR_LOG(y,...) WIN32ERR_LOG(GetLastError(),y,##__VA_ARGS__)
#define RET_HR_LOG(x,y,...) return HR_LOG(x,y,##__VA_ARGS__),(x)
#define RET_WIN32ERR_LOG(x,y,...) RET_HR_LOG(HRESULT_FROM_WIN32(x),y,##__VA_ARGS__)
#define RET_LASTERR_LOG(y,...) RET_WIN32ERR_LOG(GetLastError(),y,##__VA_ARGS__)
// Just log, no return
#define CHKL(x,y,...) if(FAILED(hr=(x))) HR_LOG(hr,y,##__VA_ARGS__)
#define CHKWL(x,y,...) if(!(x)) LASTERR_LOG(y,##__VA_ARGS__)
// Fatal, return
#define CHK(x,y,...) if(FAILED(hr=(x))) RET_HR_LOG(hr,y,##__VA_ARGS__)
#define CHKW(x,y,...) if(FAILED(x)) RET_LASTERR_LOG(hr,y,##__VA_ARGS__)

constexpr auto DISM_LOG_FILE = L"C:\\Users\\HigHwind\\Desktop\\tmp\\dismtemp\\NISM.log";
constexpr auto DISM_TEMP_DIR = L"C:\\Users\\HigHwind\\Desktop\\tmp\\dismtemp";

// Typedefs
using Path = std::filesystem::path;

// String Helper Functions

// Quick BSTR Creator
inline CComBSTR BSE(std::wstring str) { return CComBSTR(str.c_str()); }
// More Readable
inline LPCWSTR BSTR2SZ(CComBSTR bstr) { return &bstr[0]; }
// Don't forget to rebase it.
inline LPWSTR GetStrBuffer(std::wstring &str, size_t sz = 128) {
	str.clear();
	str.resize(sz);
	return &str[0];
}
inline std::wstring& RebaseStr(std::wstring& str) { return str.resize(lstrlenW(&str[0])), str; }

// Logging Helper Functions

inline HRESULT SLog(LPCWSTR fmt, ...)
{
	va_list va;
	va_start(va, fmt);
	wprintf(L"SLog: ");
	_vtprintf(fmt, va);
	wprintf(L"\n");

	return S_OK;
}

// Stringize Utils

inline std::wstring TextizeHr(HRESULT hr)
{
	auto result = L"Unknown Error";
	FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_MAX_WIDTH_MASK | FORMAT_MESSAGE_IGNORE_INSERTS,
		NULL, hr, MAKELANGID(LANG_ENGLISH, SUBLANG_ENGLISH_US), (LPWSTR)&result, 0, NULL);

	return result;
}

inline std::wstring TextizeState(DISM_INSTALL_STATE s)
{
	const std::unordered_map<DISM_INSTALL_STATE, std::wstring> conv_state
	{
		{ DISM_INSTALL_STATE_UNKNOWN, L"Unknown" },
		{ DISM_INSTALL_STATE_NOTPRESENT, L"Not Present" },
		{ DISM_INSTALL_STATE_UNINSTALLREQUESTED, L"Uninstall Requested" },
		{ DISM_INSTALL_STATE_STAGED, L"Staged" },
		{ DISM_INSTALL_STATE_STAGING, L"Staging" },
		{ DISM_INSTALL_STATE_INSTALLED, L"Installed" },
		{ DISM_INSTALL_STATE_INSTALLREQUESTED, L"Install Requested" },
		{ DISM_INSTALL_STATE_SUPERSEDED, L"Superseded" },
		{ DISM_INSTALL_STATE_PARTIALLYINSTALLED, L"Partially Installed" },
		{ DISM_INSTALL_STATE_REMOVED, L"Removed" },
	};

	return conv_state.at(s);
}

template <class Interface, class Collection>
inline std::vector<CComPtr<Interface>> GetInterfaces(CComPtr<Collection> pColl)
{
	BEGIN_ERROR_HANDLING();

	std::vector<CComPtr<Interface>> v;
	
	for (LONG k = 1, n, t = pColl->get_Count(&n); k <= n; k++)
	{
		CComPtr<Interface> ptr;
		CHKL(pColl->get_Item(k, &ptr), "Failed to enum item.");
		v.push_back(ptr);
	}

	return v;
}
