#pragma once

#include <functional>

class DllHelper {
	Path dll;
	HINSTANCE ins;
	using DelFun = std::function<void()>;
	DelFun del;

public:
	DllHelper(Path dll, DelFun del) : dll(dll), del(del)
	{
		BEGIN_ERROR_HANDLING();
		CHKWL(ins = LoadLibrary(dll.c_str()),
			"Failed to load dll by path %s.", dll.c_str());
	}
	
	~DllHelper()
	{
		BEGIN_ERROR_HANDLING();
		del();
		CHKWL(FreeLibrary(ins),
			"Failed to free dll by path %s.", dll.c_str());
	}
	
	DllHelper(const DllHelper&) = delete;
	DllHelper(DllHelper&&) = delete;

	template <class Func>
	std::function<Func> GetFunc(std::string name)
	{
		return (Func*)GetProcAddress(ins, name.c_str());
	}
};

inline Path GetExeFilePath()
{
	HMODULE hMain;
	GetModuleHandleEx(GET_MODULE_HANDLE_EX_FLAG_UNCHANGED_REFCOUNT, NULL, &hMain);

	std::wstring strt;
	GetModuleFileName(hMain, GetStrBuffer(strt), 128);
	return RebaseStr(strt);
}
