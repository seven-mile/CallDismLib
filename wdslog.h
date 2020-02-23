#pragma once

struct CLogManager {
	// sizeof(CBuffer) == 2
	virtual HRESULT PreAllocBuffer(struct CBuffer*, ULONG) = 0;
	virtual LPVOID AllocBuffer(struct CBuffer*, ULONG) = 0;
	virtual HRESULT ReAllocBuffer(struct CBuffer*, ULONG) = 0;
	virtual LPVOID GetBuffer(struct CBuffer**, ULONG) = 0;
	virtual HRESULT FreeBuffer(void) = 0;
	virtual HRESULT GetFieldIndexFromName(USHORT const*, UINT*) = 0;
	virtual UINT GetFieldValue(UINT) = 0;
	virtual UINT GetFieldsCount(void) = 0;

	virtual HRESULT AddStack(_GUID const*, void*, _GUID const*, void*, _GUID const*, void*, void**) = 0;
	virtual HRESULT RemoveStack(void*) = 0;
	virtual HRESULT AddGlobalFilter(_GUID const*, void*, void**) = 0;
	virtual HRESULT RemoveGlobalFilter(void*) = 0;
	virtual HRESULT LogA(UINT, ...) = 0;
	virtual HRESULT LogW(UINT, ...) = 0;
	virtual HRESULT EnableRecording(void) = 0;
	virtual HRESULT Playback(void) = 0;

};
