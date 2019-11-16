

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for dismprov.IDL:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=AMD64 8.01.0622 
    protocol : all , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __dismprov_h_h__
#define __dismprov_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDismProviderInfo_FWD_DEFINED__
#define __IDismProviderInfo_FWD_DEFINED__
typedef interface IDismProviderInfo IDismProviderInfo;

#endif 	/* __IDismProviderInfo_FWD_DEFINED__ */


#ifndef __DismImageSession_FWD_DEFINED__
#define __DismImageSession_FWD_DEFINED__

#ifdef __cplusplus
typedef class DismImageSession DismImageSession;
#else
typedef struct DismImageSession DismImageSession;
#endif /* __cplusplus */

#endif 	/* __DismImageSession_FWD_DEFINED__ */


#ifndef __DismProviderStore_FWD_DEFINED__
#define __DismProviderStore_FWD_DEFINED__

#ifdef __cplusplus
typedef class DismProviderStore DismProviderStore;
#else
typedef struct DismProviderStore DismProviderStore;
#endif /* __cplusplus */

#endif 	/* __DismProviderStore_FWD_DEFINED__ */


#ifndef __DismProviderInfo_FWD_DEFINED__
#define __DismProviderInfo_FWD_DEFINED__

#ifdef __cplusplus
typedef class DismProviderInfo DismProviderInfo;
#else
typedef struct DismProviderInfo DismProviderInfo;
#endif /* __cplusplus */

#endif 	/* __DismProviderInfo_FWD_DEFINED__ */


#ifndef __DismProviderCollection_FWD_DEFINED__
#define __DismProviderCollection_FWD_DEFINED__

#ifdef __cplusplus
typedef class DismProviderCollection DismProviderCollection;
#else
typedef struct DismProviderCollection DismProviderCollection;
#endif /* __cplusplus */

#endif 	/* __DismProviderCollection_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __DismProvLib_LIBRARY_DEFINED__
#define __DismProvLib_LIBRARY_DEFINED__

/* library DismProvLib */
/* [helpstring][version][uuid] */ 




typedef enum __MIDL___MIDL_itf_dismprov_0001_0002_0001
    {
        DISM_LOADED_STATE_NOT_LOADED	= 0,
        DISM_LOADED_STATE_LOADED	= 1,
        DISM_LOADED_STATE_LOAD_FAILED	= 2
    } 	DISM_LOADED_STATE;



typedef enum __MIDL___MIDL_itf_dismprov_0001_0002_0002
    {
        DISM_PROVIDER_TYPE_INTERNAL	= 0,
        DISM_PROVIDER_TYPE_EXTERNAL	= 1
    } 	DISM_PROVIDER_TYPE;


EXTERN_C const IID LIBID_DismProvLib;

#ifndef __IDismProviderInfo_INTERFACE_DEFINED__
#define __IDismProviderInfo_INTERFACE_DEFINED__

/* interface IDismProviderInfo */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProviderInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06ED85A0-F768-4A2A-A670-98D2DD0A000C")
    IDismProviderInfo : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_LoadedState( 
            /* [retval][out] */ DISM_LOADED_STATE *pVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProviderType( 
            /* [retval][out] */ DISM_PROVIDER_TYPE *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProviderInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProviderInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProviderInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProviderInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProviderInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProviderInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProviderInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProviderInfo * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismProviderInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IDismProviderInfo * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LoadedState )( 
            IDismProviderInfo * This,
            /* [retval][out] */ DISM_LOADED_STATE *pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderType )( 
            IDismProviderInfo * This,
            /* [retval][out] */ DISM_PROVIDER_TYPE *pVal);
        
        END_INTERFACE
    } IDismProviderInfoVtbl;

    interface IDismProviderInfo
    {
        CONST_VTBL struct IDismProviderInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProviderInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProviderInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProviderInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProviderInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProviderInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProviderInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProviderInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProviderInfo_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismProviderInfo_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#define IDismProviderInfo_get_LoadedState(This,pVal)	\
    ( (This)->lpVtbl -> get_LoadedState(This,pVal) ) 

#define IDismProviderInfo_get_ProviderType(This,pVal)	\
    ( (This)->lpVtbl -> get_ProviderType(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProviderInfo_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DismImageSession;

#ifdef __cplusplus

class DECLSPEC_UUID("F83EB00E-E6A0-4B37-A1DA-63416FFB32B5")
DismImageSession;
#endif

EXTERN_C const CLSID CLSID_DismProviderStore;

#ifdef __cplusplus

class DECLSPEC_UUID("77635F72-F2B6-4478-A711-9325EB5961C5")
DismProviderStore;
#endif

EXTERN_C const CLSID CLSID_DismProviderInfo;

#ifdef __cplusplus

class DECLSPEC_UUID("6E0230BF-F521-4509-A24B-FBD5889EC5D3")
DismProviderInfo;
#endif

EXTERN_C const CLSID CLSID_DismProviderCollection;

#ifdef __cplusplus

class DECLSPEC_UUID("CCE269B5-1F2D-4C2D-86DE-00F227046F52")
DismProviderCollection;
#endif
#endif /* __DismProvLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


