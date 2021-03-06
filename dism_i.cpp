

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for dism.idl:
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

MIDL_DEFINE_GUID(IID, LIBID_DismLib,0x5D8578F4,0xA3CF,0x40A9,0x8F,0x54,0xD4,0xEA,0x88,0x75,0x74,0xA0);


MIDL_DEFINE_GUID(IID, IID_IDismManager,0x4D4FCE31,0xF767,0x45E4,0xB2,0xE9,0x54,0x00,0xE3,0xE1,0x38,0x9A);


MIDL_DEFINE_GUID(IID, IID_IDismLogger,0xBD7FC505,0x69BC,0x49CB,0x8C,0x58,0x1D,0x1D,0xA5,0x47,0xB7,0xE2);


MIDL_DEFINE_GUID(IID, IID_IDismObject,0xD8066238,0xFDD5,0x4195,0x81,0x55,0x23,0x71,0xE0,0xE6,0x1C,0xC5);


MIDL_DEFINE_GUID(IID, IID_IDismProviderStore,0x5DF7B1B0,0x93A5,0x4F03,0x8B,0xCB,0xF3,0x93,0x96,0x89,0x94,0x43);


MIDL_DEFINE_GUID(IID, IID_IDismProvider,0x33F93018,0xEDB7,0x4092,0x97,0x8A,0x4B,0x37,0xD5,0xDF,0xB1,0xC0);


MIDL_DEFINE_GUID(IID, IID_IDismProviderCollection,0x722DE115,0x1404,0x4BF8,0xBC,0xEE,0xDE,0x0B,0x7B,0x58,0x06,0x71);


MIDL_DEFINE_GUID(IID, IID_IDismImage,0x9BB62BF9,0x01A0,0x49A7,0xBE,0x40,0xFB,0x54,0x45,0xB2,0x9B,0xEF);


MIDL_DEFINE_GUID(IID, IID_IDismImageSession,0xA08538A6,0xB9FF,0x47C2,0xB2,0x28,0xB9,0x36,0x12,0xEF,0x11,0x4B);


MIDL_DEFINE_GUID(IID, IID_IDismManagerPrivate,0x8817CB2A,0xE80A,0x480B,0xA7,0xB4,0x22,0x32,0x44,0x3A,0x9E,0x4B);


MIDL_DEFINE_GUID(IID, IID_IDismEventManager,0xD9894135,0x1AA7,0x49AF,0xAD,0x11,0x27,0xE7,0x84,0xCA,0xC9,0x31);


MIDL_DEFINE_GUID(IID, IID_IDismError,0x18CAABCD,0xEB4C,0x4DF3,0x9F,0xF1,0xB5,0xD2,0x4E,0x65,0x5F,0x33);


MIDL_DEFINE_GUID(IID, IID_IDismErrorCollection,0x74D82B92,0xAE58,0x4962,0x91,0x33,0x37,0x01,0xE1,0x51,0x0A,0x81);


MIDL_DEFINE_GUID(IID, IID_IDismImageManager,0xA654FF2F,0xD9FA,0x4DF1,0xAA,0xBF,0x98,0x2C,0x0A,0x3C,0x5F,0x52);


MIDL_DEFINE_GUID(IID, IID_IDismImageInfoCollection,0x572F3374,0x7DAE,0x47AB,0x88,0xAF,0xBD,0x6C,0xA2,0x92,0x52,0xFE);


MIDL_DEFINE_GUID(IID, IID_IDismImageInfo,0x7970DE73,0x63E8,0x43E9,0x9F,0x61,0x81,0xBD,0xC7,0x48,0xF2,0x9B);


MIDL_DEFINE_GUID(IID, IID_IDismMountedImageInfoCollection,0x931FC35D,0x0976,0x48B8,0x8B,0xDE,0xB5,0x95,0x4A,0xAD,0xD3,0xF2);


MIDL_DEFINE_GUID(IID, IID_IDismMountedImageInfo,0xEE9B6624,0x8ACC,0x440C,0x95,0x64,0xF5,0xD7,0x56,0x8D,0x6E,0x01);


MIDL_DEFINE_GUID(IID, IID_IDismImageSessionPrivate,0xFF0E7A8B,0x7B7C,0x411B,0x96,0x8B,0x11,0xAA,0x89,0x8B,0xB0,0x3A);


MIDL_DEFINE_GUID(IID, IID_IDismImageSessionPrivate2,0x13A81F76,0x50E2,0x11E0,0xB7,0x44,0x00,0x12,0x3F,0x3F,0xC6,0xDD);


MIDL_DEFINE_GUID(IID, IID_IDismConfigObject,0x705A28E2,0xA26F,0x4A43,0x8D,0x82,0xA5,0x69,0x41,0xB5,0xC2,0x50);


MIDL_DEFINE_GUID(IID, IID_IDismConfiguration,0x3F92CF95,0x462B,0x4BDA,0xA1,0xD4,0xB6,0xCB,0x74,0xCE,0xFB,0x5C);


MIDL_DEFINE_GUID(IID, IID_IDismConfiguration2,0x59891552,0x9AC8,0x4C89,0xB2,0xA7,0xC6,0x4B,0x39,0x62,0x35,0x4E);


MIDL_DEFINE_GUID(IID, IID_IDismProperty,0x20599DF3,0x1A1B,0x4EAA,0xA5,0x3F,0x77,0xF3,0x94,0x38,0xB5,0x42);


MIDL_DEFINE_GUID(IID, IID_IDismPropertyCollection,0x88D4518A,0x41A8,0x49B0,0xA0,0x87,0xA3,0xD6,0xFC,0x1D,0x29,0x8E);


MIDL_DEFINE_GUID(IID, IID_IDismStringCollection,0x7E6EB080,0x3384,0x4155,0xA4,0xA7,0x5E,0x43,0xBB,0xAF,0xB2,0xF3);


MIDL_DEFINE_GUID(IID, IID_IDismProviderPrivate,0x2114DAEC,0x42FD,0x4847,0x8A,0x04,0x5F,0x2D,0xDE,0x32,0x76,0xA3);


MIDL_DEFINE_GUID(IID, IID_IDismServicingProvider,0xC8292388,0x8D1D,0x4C34,0x9A,0x41,0x87,0x63,0xFC,0xD3,0x04,0xF7);


MIDL_DEFINE_GUID(IID, IID_IDismOSServiceManager,0x0B49A069,0x56A5,0x48EB,0x9D,0x9F,0xE9,0xE4,0x24,0x78,0x14,0x9A);


MIDL_DEFINE_GUID(IID, IID_IDismRegistry,0x8E1C59A6,0x272F,0x4212,0xA6,0xD3,0x8D,0xC6,0xCD,0xDF,0x81,0x3A);


MIDL_DEFINE_GUID(IID, IID_IDismItemManager,0xF316031B,0x3C98,0x4F20,0xB9,0xCB,0xA3,0xB8,0x70,0x2D,0xDD,0xD8);


MIDL_DEFINE_GUID(IID, IID_IDismItemCollection,0xE2C60889,0x8E0F,0x4A21,0x9F,0x5B,0xE8,0x0F,0x0B,0x13,0xC8,0xD8);


MIDL_DEFINE_GUID(IID, IID_IDismSupportUnattend,0xDADAD7BB,0x2B1D,0x4EDB,0x90,0x14,0xB1,0x91,0x2E,0x1A,0x2E,0x3D);


MIDL_DEFINE_GUID(IID, IID_IDismSupportCommands,0x7234EC82,0xC68B,0x4C4E,0xBA,0x1D,0xD3,0x33,0xF5,0xB8,0x7B,0x37);


MIDL_DEFINE_GUID(IID, IID_IDismTokenCollection,0x407C0F0F,0x0540,0x4900,0xAF,0xD2,0x52,0x92,0x52,0x46,0xDC,0xB3);


MIDL_DEFINE_GUID(IID, IID_IDismToken,0x5BED6686,0xEEB7,0x40B7,0x97,0xF9,0xFA,0xBC,0xC5,0xEF,0xAE,0xC2);


MIDL_DEFINE_GUID(IID, IID_IDismCommandCollection,0x8F609999,0x5D3C,0x48A8,0xAA,0xDF,0x5F,0x96,0xCB,0x29,0x72,0x79);


MIDL_DEFINE_GUID(IID, IID_IDismCommand,0xC112610A,0x5D2A,0x4D52,0x80,0x82,0xED,0xCD,0x5A,0x5E,0xB1,0x1D);


MIDL_DEFINE_GUID(IID, IID_IDismHelpItemCollection,0x14E23A62,0xCD9F,0x4E41,0xAB,0xD5,0x58,0xD5,0x34,0xBF,0x37,0x4E);


MIDL_DEFINE_GUID(IID, IID_IDismHelpItem,0xE3F237D6,0x8F3C,0x4443,0x92,0x5A,0xAB,0xF4,0x48,0x07,0x69,0x0C);


MIDL_DEFINE_GUID(IID, IID_IDismProviderStorePrivate,0xFE104C14,0x65E6,0x43B3,0xAA,0x56,0xF0,0x7B,0x5E,0x57,0xD8,0x1F);


MIDL_DEFINE_GUID(IID, IID_IDismHostManager,0xC9E39092,0x53DF,0x42B6,0x89,0xB4,0xFB,0xA1,0x26,0x62,0xEA,0xD1);


MIDL_DEFINE_GUID(IID, IID_IDismPackage,0xDEE9A285,0xB7F6,0x4C16,0xB6,0x51,0x7A,0x13,0xAF,0x90,0xF4,0x2C);


MIDL_DEFINE_GUID(IID, IID_IDismPackageFeature,0x3BC3752E,0x74C5,0x46F0,0xB5,0x0C,0x12,0xFF,0x26,0x9D,0x5B,0xB1);


MIDL_DEFINE_GUID(IID, IID_IDismPackageFeatureCollection,0x63E0AF82,0x28E4,0x4145,0xAE,0x9A,0xAA,0xDD,0x71,0x5C,0x12,0x51);


MIDL_DEFINE_GUID(IID, IID_IDismPackage2,0x5F81A121,0xC3C5,0x4E94,0xB7,0xAE,0x22,0xB5,0x32,0xF9,0xF3,0xA8);


MIDL_DEFINE_GUID(IID, IID_IDismPackage3,0xEC622249,0xBA0C,0x405B,0xA8,0x3C,0x4A,0x31,0xBC,0x7F,0x0C,0x4D);


MIDL_DEFINE_GUID(IID, IID_IDismPackage4,0xA27155B5,0x6831,0x4427,0xB0,0xD0,0x97,0x2D,0x58,0xF2,0x02,0x63);


MIDL_DEFINE_GUID(IID, IID_IDismPackageCollection,0xD80D838A,0x0D57,0x428C,0xB8,0x98,0x26,0x5A,0x7D,0x24,0x4A,0x67);


MIDL_DEFINE_GUID(IID, IID_IDismPackageFeature2,0x1C551557,0x21C2,0x4907,0xBE,0x82,0x35,0xD7,0xEE,0xF5,0xBB,0x13);


MIDL_DEFINE_GUID(IID, IID_IDismCapability,0x6A7DEE63,0x129C,0x41E8,0xB6,0xA4,0xBD,0x1E,0xB1,0xD8,0x5E,0x65);


MIDL_DEFINE_GUID(IID, IID_IDismCapabilityCollection,0x9B4784DA,0xE322,0x4BF0,0x80,0x0B,0x28,0xBA,0xE3,0x57,0xEC,0x71);


MIDL_DEFINE_GUID(IID, IID_IDismPackageManager,0x1754AA4F,0xF0E2,0x4692,0xA8,0x02,0xD5,0x18,0x71,0x08,0x5F,0x34);


MIDL_DEFINE_GUID(IID, IID_IDismMsuPackage,0xF8EF44D0,0x94F1,0x4DFB,0xBA,0xD8,0x7B,0x13,0x83,0x0B,0xA0,0x6E);


MIDL_DEFINE_GUID(IID, IID_IDismPackageManager2,0x5CC9ED95,0xCF41,0x4685,0xBE,0xAA,0x70,0x53,0x10,0x31,0xFE,0xC4);


MIDL_DEFINE_GUID(IID, IID_IDismPackageManager3,0xE40DD35A,0x89E1,0x4619,0xAD,0x21,0xEF,0x97,0xD2,0x9B,0x5D,0x00);


MIDL_DEFINE_GUID(IID, IID_IDismComponentStoreReport,0x46CE4564,0xE88A,0x4EAE,0xBD,0x7C,0xDA,0x22,0x1F,0x61,0xE0,0xC7);


MIDL_DEFINE_GUID(IID, IID_IDismPackageManager4,0x4DFD752A,0x1E5E,0x4C70,0x94,0xFF,0x9C,0x91,0xB5,0xF6,0x13,0x35);


MIDL_DEFINE_GUID(IID, IID_IDismPackageManager5,0xBC8687E4,0x4B69,0x4749,0x87,0x8D,0x6D,0xEF,0x27,0x46,0xFC,0x36);


MIDL_DEFINE_GUID(IID, IID_IDismServicePackScavenge,0xA457B170,0xC9C3,0x499B,0x85,0xBC,0x59,0x25,0x9E,0x92,0xAE,0x4D);


MIDL_DEFINE_GUID(IID, IID_IDismXmlPackageManager,0xC1817AEF,0x4351,0x4721,0x9A,0x62,0x5D,0xED,0xA9,0xDA,0x24,0x6C);


MIDL_DEFINE_GUID(IID, IID_IDismDriverManager,0x6A064B65,0x3CEC,0x491B,0xA2,0xD4,0x8D,0x1D,0x4D,0xA6,0xDE,0xCC);


MIDL_DEFINE_GUID(IID, IID_IDismDriverPackageCollection,0x45554AF5,0x6058,0x4913,0x8E,0x5F,0xC9,0xB7,0x9D,0x59,0x95,0xCF);


MIDL_DEFINE_GUID(IID, IID_IDismDriverPackage,0x1AF61D22,0xD513,0x4417,0x88,0x38,0x61,0xF8,0x72,0x4E,0xDC,0x4F);


MIDL_DEFINE_GUID(IID, IID_IDismDriverCollection,0x4E1CB72F,0xC47D,0x42EE,0x8C,0xCA,0x4C,0xEB,0x35,0xB3,0xFE,0x17);


MIDL_DEFINE_GUID(IID, IID_IDismDriver,0x3B6BBFA2,0xF817,0x423B,0xA8,0x3C,0x10,0x3A,0xD5,0x46,0x15,0xD4);


MIDL_DEFINE_GUID(IID, IID_IDismDeviceIdCollection,0xA3CCF844,0x82C9,0x431E,0x8D,0x29,0x5B,0xD0,0x9F,0x8C,0x9B,0x70);


MIDL_DEFINE_GUID(IID, IID_IDismDriverPackage2,0x671FCAAF,0xCF96,0x4B46,0xAC,0x3D,0x7B,0x96,0x8F,0xBB,0xCC,0x3F);


MIDL_DEFINE_GUID(IID, IID_IDismDriverPackage3,0x04F36A61,0xA37D,0x406D,0xA3,0x20,0x07,0x08,0x44,0x4F,0x3E,0x26);


MIDL_DEFINE_GUID(IID, IID_IDismDriverPackage4,0x6D9208E3,0x17B2,0x46C2,0xB9,0x02,0x24,0x33,0xCC,0x8C,0xF0,0xFD);


MIDL_DEFINE_GUID(IID, IID_IUnattend,0xE7627187,0xC11B,0x42FC,0x91,0xDB,0x4F,0x46,0xBD,0x54,0x53,0x74);


MIDL_DEFINE_GUID(IID, IID_IUnattendManager,0x517CDC5A,0x7A77,0x4356,0x81,0xCA,0xD3,0x9F,0x50,0x65,0x87,0x26);


MIDL_DEFINE_GUID(IID, IID_IUnattendSettings,0xF8A8AEF3,0x1322,0x4E1D,0xBB,0xF1,0x0A,0x22,0x8C,0x6F,0xE1,0x93);


MIDL_DEFINE_GUID(IID, IID_IDismCompatManager,0x092187E4,0x09B8,0x46A3,0x87,0xD5,0x1C,0x9B,0xC6,0xED,0x8B,0x5D);


MIDL_DEFINE_GUID(IID, IID_IDismIntlManager,0xECED57DF,0x5D67,0x440A,0xA3,0xCD,0xB4,0xF1,0xB8,0xB3,0x9D,0x1A);


MIDL_DEFINE_GUID(IID, IID_IDismIntl,0x574FD8F3,0xBC64,0x455E,0xA0,0xD8,0xBC,0xF9,0x5D,0x88,0x19,0xB1);


MIDL_DEFINE_GUID(IID, IID_IPEImageManager,0x30EB8593,0xFA91,0x4948,0xAD,0xF5,0xDC,0x6A,0x35,0x4F,0x18,0x73);


MIDL_DEFINE_GUID(IID, IID_ITransmogrify,0x05BD25AF,0xF5D6,0x4246,0x9F,0x91,0x94,0xB1,0x87,0xBC,0x2B,0xF4);


MIDL_DEFINE_GUID(IID, IID_ITransmogrifyEditionCollection,0xB629EEF0,0x2060,0x43A0,0xA1,0x80,0x7D,0x04,0x35,0x1C,0x39,0x03);


MIDL_DEFINE_GUID(IID, IID_ITransmogrify2,0xC6ABC167,0x33B8,0x4A00,0xBE,0x58,0x12,0xEC,0x5B,0x01,0x35,0x98);


MIDL_DEFINE_GUID(IID, IID_ITransmogrify3,0x50F2DDD7,0x90ED,0x4DB1,0x8E,0xBA,0x3C,0x99,0x54,0x86,0xAA,0x0C);


MIDL_DEFINE_GUID(IID, IID_ITransmogrify4,0xE6757B45,0x14FC,0x42C1,0x99,0x43,0xAC,0x63,0x0A,0x8B,0x0E,0x1B);


MIDL_DEFINE_GUID(IID, IID_ITransmogrify5,0x3F483E2E,0xF737,0x481E,0xA3,0xA5,0xC6,0x4E,0x53,0xE4,0x93,0xAE);


MIDL_DEFINE_GUID(IID, IID_IDismMsiManager,0x57AB0039,0x5829,0x4EBF,0xB0,0x93,0x0B,0x3A,0x80,0x86,0x7C,0x24);


MIDL_DEFINE_GUID(IID, IID_IDismIBSSupport,0xE1B47F29,0x955C,0x49A5,0xB0,0xA5,0x50,0x18,0x20,0x7F,0xDE,0x69);


MIDL_DEFINE_GUID(IID, IID_IDismAppxManager,0x54103F66,0x7CB7,0x41BA,0xAD,0x1A,0x2E,0x12,0x4D,0x01,0xC0,0x8C);


MIDL_DEFINE_GUID(IID, IID_IDismAppxPackageInfoCollection,0x75CAE0D9,0x716D,0x4E62,0x93,0x1D,0xBD,0xFA,0x3D,0xBB,0xD4,0x2E);


MIDL_DEFINE_GUID(IID, IID_IDismAppxPackageInfo,0x40E0E56D,0x3D1D,0x4F5C,0xB3,0x25,0x01,0x21,0x42,0x36,0x77,0xC6);


MIDL_DEFINE_GUID(IID, IID_IDismAppxManager2,0x80F63941,0x9464,0x4495,0xBA,0xC3,0x51,0xA4,0x9B,0x20,0xCE,0x80);


MIDL_DEFINE_GUID(IID, IID_IDismAppxManager3,0x6674FE44,0xDE28,0x4B7E,0x97,0x8D,0xAB,0x6A,0x51,0xCE,0x0A,0x5B);


MIDL_DEFINE_GUID(IID, IID_IDismAppxManager4,0x7446FF66,0x999D,0x497A,0xB7,0x12,0xA2,0x60,0x59,0x73,0x0C,0x5D);


MIDL_DEFINE_GUID(IID, IID_IDismAppxManager5,0x9B31F137,0x5668,0x441F,0x8B,0xC3,0xD2,0x1F,0x8D,0x3C,0x70,0xDB);


MIDL_DEFINE_GUID(IID, IID_IDismAppxManager6,0xB83F048E,0x2309,0x4E52,0x96,0x5B,0x4F,0xF5,0x6B,0x3F,0x5A,0xB7);


MIDL_DEFINE_GUID(IID, IID_IDismAppxPackageInfo2,0x5367D43F,0xAA59,0x4A81,0x90,0x68,0x36,0xC7,0xA3,0x60,0xFE,0x72);


MIDL_DEFINE_GUID(IID, IID_IDismAssocSupport,0xDCED1A68,0x143B,0x4C8C,0x84,0x51,0xF1,0x55,0xBD,0xE8,0x21,0xDB);


MIDL_DEFINE_GUID(IID, IID_IDismKcacheManager,0xED08F15D,0xD5F2,0x40BF,0xB0,0x8B,0x73,0xA8,0x45,0x6C,0xA6,0x2D);


MIDL_DEFINE_GUID(IID, IID_IDismSetMachineName,0x16FCF50B,0x1EB0,0x4ED3,0x9A,0x5C,0x8A,0x33,0xC8,0x0F,0x0D,0x83);


MIDL_DEFINE_GUID(IID, IID_IDismGenericManager,0x0AB3AC34,0xC644,0x4903,0xAA,0x5F,0x5B,0x5D,0x8F,0x15,0xD9,0x69);


MIDL_DEFINE_GUID(IID, IID_IDismSysprep,0xDB46267B,0x2FEA,0x4BB5,0x9F,0x14,0xE4,0xE5,0x82,0xE4,0x77,0x7F);


MIDL_DEFINE_GUID(IID, IID_IDismSysprepManager,0x8E65FBAC,0x20AD,0x4075,0xBD,0x7B,0x37,0x71,0x12,0xFF,0x1F,0x69);


MIDL_DEFINE_GUID(IID, IID_IDismSetupPlatform,0x53219E4F,0x44C6,0x4ED4,0x83,0xF9,0x06,0x5F,0xDE,0xE9,0x57,0x95);


MIDL_DEFINE_GUID(IID, IID_IDismSetupPlatformManager,0xAA668C08,0x675C,0x49CB,0xA1,0x27,0x2C,0xD5,0x7A,0x17,0x3C,0x04);


MIDL_DEFINE_GUID(IID, IID_IDismFfuProvider,0x924D876E,0x17F7,0x4A5E,0xAC,0x33,0x91,0x8C,0x2B,0xEA,0x0F,0xD5);


MIDL_DEFINE_GUID(IID, IID_IDismProvisioningSupport,0x446E7AFC,0x05E3,0x4EEA,0x9E,0x28,0xD8,0xD6,0xB3,0x24,0xA8,0xC7);


MIDL_DEFINE_GUID(IID, IID_IDismProvPackageElementCollection,0x3CA3A1B2,0xFF8C,0x487A,0xA0,0xBC,0x95,0x32,0x7C,0xCA,0xBD,0x7B);


MIDL_DEFINE_GUID(IID, IID_IDismProvPackageElement,0xF7A983D3,0xE787,0x40A8,0x95,0x72,0xCD,0x04,0xFF,0x99,0xD0,0x01);


MIDL_DEFINE_GUID(IID, DIID__IDismEvents,0xA0EFD55A,0x17A8,0x413D,0xA5,0x3A,0x3C,0x43,0xAE,0xF9,0x6C,0x0E);


MIDL_DEFINE_GUID(CLSID, CLSID_DismManager,0xBE33A527,0x42FE,0x43A4,0xAC,0x5E,0xC1,0xD0,0x59,0xFC,0x70,0x5F);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



