#pragma once

/*
	A simple COM Dll Wrapper
	========================
	How to use DelFun ;)
	To do with a COM dll, sometimes I find it numb to GetProcAddress
	and operate global objects (You can't use a CComPtr because the
	dll has been unloaded before the CComPtr is destructed.) So I
	designed this class to assist me with proc finding and object
	releasing.
	This class doesn't permitting copying, you can use a smart_ptr
	like this :
	// global scope
	std::unique_ptr<DllHelper> dll;
	IManager *pMgr; // should be a raw pointer

	//                                          v: catch your pointer
	dll = std::make_unique<DllHelper>(pathdll, [&](){
		// do your releasing, it'll be executed before unloading
		pMgr->Release();
	});
*/

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
