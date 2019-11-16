

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#include "pch.h"

#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        EXTERN_C __declspec(selectany) const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif // !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_DismProvLib,0xCABC6803,0x92AF,0x44A0,0xA4,0x08,0x3D,0xA4,0x9D,0x94,0x59,0x49);


MIDL_DEFINE_GUID(IID, IID_IDismProviderInfo,0x06ED85A0,0xF768,0x4A2A,0xA6,0x70,0x98,0xD2,0xDD,0x0A,0x00,0x0C);


MIDL_DEFINE_GUID(CLSID, CLSID_DismImageSession,0xF83EB00E,0xE6A0,0x4B37,0xA1,0xDA,0x63,0x41,0x6F,0xFB,0x32,0xB5);


MIDL_DEFINE_GUID(CLSID, CLSID_DismProviderStore,0x77635F72,0xF2B6,0x4478,0xA7,0x11,0x93,0x25,0xEB,0x59,0x61,0xC5);


MIDL_DEFINE_GUID(CLSID, CLSID_DismProviderInfo,0x6E0230BF,0xF521,0x4509,0xA2,0x4B,0xFB,0xD5,0x88,0x9E,0xC5,0xD3);


MIDL_DEFINE_GUID(CLSID, CLSID_DismProviderCollection,0xCCE269B5,0x1F2D,0x4C2D,0x86,0xDE,0x00,0xF2,0x27,0x04,0x6F,0x52);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



