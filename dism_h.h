

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __dism_h_h__
#define __dism_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IDismManager_FWD_DEFINED__
#define __IDismManager_FWD_DEFINED__
typedef interface IDismManager IDismManager;

#endif 	/* __IDismManager_FWD_DEFINED__ */


#ifndef __IDismLogger_FWD_DEFINED__
#define __IDismLogger_FWD_DEFINED__
typedef interface IDismLogger IDismLogger;

#endif 	/* __IDismLogger_FWD_DEFINED__ */


#ifndef __IDismObject_FWD_DEFINED__
#define __IDismObject_FWD_DEFINED__
typedef interface IDismObject IDismObject;

#endif 	/* __IDismObject_FWD_DEFINED__ */


#ifndef __IDismProviderStore_FWD_DEFINED__
#define __IDismProviderStore_FWD_DEFINED__
typedef interface IDismProviderStore IDismProviderStore;

#endif 	/* __IDismProviderStore_FWD_DEFINED__ */


#ifndef __IDismProvider_FWD_DEFINED__
#define __IDismProvider_FWD_DEFINED__
typedef interface IDismProvider IDismProvider;

#endif 	/* __IDismProvider_FWD_DEFINED__ */


#ifndef __IDismProviderCollection_FWD_DEFINED__
#define __IDismProviderCollection_FWD_DEFINED__
typedef interface IDismProviderCollection IDismProviderCollection;

#endif 	/* __IDismProviderCollection_FWD_DEFINED__ */


#ifndef __IDismImage_FWD_DEFINED__
#define __IDismImage_FWD_DEFINED__
typedef interface IDismImage IDismImage;

#endif 	/* __IDismImage_FWD_DEFINED__ */


#ifndef __IDismImageSession_FWD_DEFINED__
#define __IDismImageSession_FWD_DEFINED__
typedef interface IDismImageSession IDismImageSession;

#endif 	/* __IDismImageSession_FWD_DEFINED__ */


#ifndef __IDismManagerPrivate_FWD_DEFINED__
#define __IDismManagerPrivate_FWD_DEFINED__
typedef interface IDismManagerPrivate IDismManagerPrivate;

#endif 	/* __IDismManagerPrivate_FWD_DEFINED__ */


#ifndef __IDismEventManager_FWD_DEFINED__
#define __IDismEventManager_FWD_DEFINED__
typedef interface IDismEventManager IDismEventManager;

#endif 	/* __IDismEventManager_FWD_DEFINED__ */


#ifndef __IDismError_FWD_DEFINED__
#define __IDismError_FWD_DEFINED__
typedef interface IDismError IDismError;

#endif 	/* __IDismError_FWD_DEFINED__ */


#ifndef __IDismErrorCollection_FWD_DEFINED__
#define __IDismErrorCollection_FWD_DEFINED__
typedef interface IDismErrorCollection IDismErrorCollection;

#endif 	/* __IDismErrorCollection_FWD_DEFINED__ */


#ifndef __IDismImageManager_FWD_DEFINED__
#define __IDismImageManager_FWD_DEFINED__
typedef interface IDismImageManager IDismImageManager;

#endif 	/* __IDismImageManager_FWD_DEFINED__ */


#ifndef __IDismImageInfoCollection_FWD_DEFINED__
#define __IDismImageInfoCollection_FWD_DEFINED__
typedef interface IDismImageInfoCollection IDismImageInfoCollection;

#endif 	/* __IDismImageInfoCollection_FWD_DEFINED__ */


#ifndef __IDismImageInfo_FWD_DEFINED__
#define __IDismImageInfo_FWD_DEFINED__
typedef interface IDismImageInfo IDismImageInfo;

#endif 	/* __IDismImageInfo_FWD_DEFINED__ */


#ifndef __IDismMountedImageInfoCollection_FWD_DEFINED__
#define __IDismMountedImageInfoCollection_FWD_DEFINED__
typedef interface IDismMountedImageInfoCollection IDismMountedImageInfoCollection;

#endif 	/* __IDismMountedImageInfoCollection_FWD_DEFINED__ */


#ifndef __IDismMountedImageInfo_FWD_DEFINED__
#define __IDismMountedImageInfo_FWD_DEFINED__
typedef interface IDismMountedImageInfo IDismMountedImageInfo;

#endif 	/* __IDismMountedImageInfo_FWD_DEFINED__ */


#ifndef __IDismImageSessionPrivate_FWD_DEFINED__
#define __IDismImageSessionPrivate_FWD_DEFINED__
typedef interface IDismImageSessionPrivate IDismImageSessionPrivate;

#endif 	/* __IDismImageSessionPrivate_FWD_DEFINED__ */


#ifndef __IDismImageSessionPrivate2_FWD_DEFINED__
#define __IDismImageSessionPrivate2_FWD_DEFINED__
typedef interface IDismImageSessionPrivate2 IDismImageSessionPrivate2;

#endif 	/* __IDismImageSessionPrivate2_FWD_DEFINED__ */


#ifndef __IDismConfigObject_FWD_DEFINED__
#define __IDismConfigObject_FWD_DEFINED__
typedef interface IDismConfigObject IDismConfigObject;

#endif 	/* __IDismConfigObject_FWD_DEFINED__ */


#ifndef __IDismConfiguration_FWD_DEFINED__
#define __IDismConfiguration_FWD_DEFINED__
typedef interface IDismConfiguration IDismConfiguration;

#endif 	/* __IDismConfiguration_FWD_DEFINED__ */


#ifndef __IDismConfiguration2_FWD_DEFINED__
#define __IDismConfiguration2_FWD_DEFINED__
typedef interface IDismConfiguration2 IDismConfiguration2;

#endif 	/* __IDismConfiguration2_FWD_DEFINED__ */


#ifndef __IDismProperty_FWD_DEFINED__
#define __IDismProperty_FWD_DEFINED__
typedef interface IDismProperty IDismProperty;

#endif 	/* __IDismProperty_FWD_DEFINED__ */


#ifndef __IDismPropertyCollection_FWD_DEFINED__
#define __IDismPropertyCollection_FWD_DEFINED__
typedef interface IDismPropertyCollection IDismPropertyCollection;

#endif 	/* __IDismPropertyCollection_FWD_DEFINED__ */


#ifndef __IDismStringCollection_FWD_DEFINED__
#define __IDismStringCollection_FWD_DEFINED__
typedef interface IDismStringCollection IDismStringCollection;

#endif 	/* __IDismStringCollection_FWD_DEFINED__ */


#ifndef __IDismProviderPrivate_FWD_DEFINED__
#define __IDismProviderPrivate_FWD_DEFINED__
typedef interface IDismProviderPrivate IDismProviderPrivate;

#endif 	/* __IDismProviderPrivate_FWD_DEFINED__ */


#ifndef __IDismServicingProvider_FWD_DEFINED__
#define __IDismServicingProvider_FWD_DEFINED__
typedef interface IDismServicingProvider IDismServicingProvider;

#endif 	/* __IDismServicingProvider_FWD_DEFINED__ */


#ifndef __IDismOSServiceManager_FWD_DEFINED__
#define __IDismOSServiceManager_FWD_DEFINED__
typedef interface IDismOSServiceManager IDismOSServiceManager;

#endif 	/* __IDismOSServiceManager_FWD_DEFINED__ */


#ifndef __IDismRegistry_FWD_DEFINED__
#define __IDismRegistry_FWD_DEFINED__
typedef interface IDismRegistry IDismRegistry;

#endif 	/* __IDismRegistry_FWD_DEFINED__ */


#ifndef __IDismItemManager_FWD_DEFINED__
#define __IDismItemManager_FWD_DEFINED__
typedef interface IDismItemManager IDismItemManager;

#endif 	/* __IDismItemManager_FWD_DEFINED__ */


#ifndef __IDismItemCollection_FWD_DEFINED__
#define __IDismItemCollection_FWD_DEFINED__
typedef interface IDismItemCollection IDismItemCollection;

#endif 	/* __IDismItemCollection_FWD_DEFINED__ */


#ifndef __IDismSupportUnattend_FWD_DEFINED__
#define __IDismSupportUnattend_FWD_DEFINED__
typedef interface IDismSupportUnattend IDismSupportUnattend;

#endif 	/* __IDismSupportUnattend_FWD_DEFINED__ */


#ifndef __IDismSupportCommands_FWD_DEFINED__
#define __IDismSupportCommands_FWD_DEFINED__
typedef interface IDismSupportCommands IDismSupportCommands;

#endif 	/* __IDismSupportCommands_FWD_DEFINED__ */


#ifndef __IDismTokenCollection_FWD_DEFINED__
#define __IDismTokenCollection_FWD_DEFINED__
typedef interface IDismTokenCollection IDismTokenCollection;

#endif 	/* __IDismTokenCollection_FWD_DEFINED__ */


#ifndef __IDismToken_FWD_DEFINED__
#define __IDismToken_FWD_DEFINED__
typedef interface IDismToken IDismToken;

#endif 	/* __IDismToken_FWD_DEFINED__ */


#ifndef __IDismCommandCollection_FWD_DEFINED__
#define __IDismCommandCollection_FWD_DEFINED__
typedef interface IDismCommandCollection IDismCommandCollection;

#endif 	/* __IDismCommandCollection_FWD_DEFINED__ */


#ifndef __IDismCommand_FWD_DEFINED__
#define __IDismCommand_FWD_DEFINED__
typedef interface IDismCommand IDismCommand;

#endif 	/* __IDismCommand_FWD_DEFINED__ */


#ifndef __IDismHelpItemCollection_FWD_DEFINED__
#define __IDismHelpItemCollection_FWD_DEFINED__
typedef interface IDismHelpItemCollection IDismHelpItemCollection;

#endif 	/* __IDismHelpItemCollection_FWD_DEFINED__ */


#ifndef __IDismHelpItem_FWD_DEFINED__
#define __IDismHelpItem_FWD_DEFINED__
typedef interface IDismHelpItem IDismHelpItem;

#endif 	/* __IDismHelpItem_FWD_DEFINED__ */


#ifndef __IDismProviderStorePrivate_FWD_DEFINED__
#define __IDismProviderStorePrivate_FWD_DEFINED__
typedef interface IDismProviderStorePrivate IDismProviderStorePrivate;

#endif 	/* __IDismProviderStorePrivate_FWD_DEFINED__ */


#ifndef __IDismHostManager_FWD_DEFINED__
#define __IDismHostManager_FWD_DEFINED__
typedef interface IDismHostManager IDismHostManager;

#endif 	/* __IDismHostManager_FWD_DEFINED__ */


#ifndef __IDismPackage_FWD_DEFINED__
#define __IDismPackage_FWD_DEFINED__
typedef interface IDismPackage IDismPackage;

#endif 	/* __IDismPackage_FWD_DEFINED__ */


#ifndef __IDismPackageFeature_FWD_DEFINED__
#define __IDismPackageFeature_FWD_DEFINED__
typedef interface IDismPackageFeature IDismPackageFeature;

#endif 	/* __IDismPackageFeature_FWD_DEFINED__ */


#ifndef __IDismPackageFeatureCollection_FWD_DEFINED__
#define __IDismPackageFeatureCollection_FWD_DEFINED__
typedef interface IDismPackageFeatureCollection IDismPackageFeatureCollection;

#endif 	/* __IDismPackageFeatureCollection_FWD_DEFINED__ */


#ifndef __IDismPackage2_FWD_DEFINED__
#define __IDismPackage2_FWD_DEFINED__
typedef interface IDismPackage2 IDismPackage2;

#endif 	/* __IDismPackage2_FWD_DEFINED__ */


#ifndef __IDismPackage3_FWD_DEFINED__
#define __IDismPackage3_FWD_DEFINED__
typedef interface IDismPackage3 IDismPackage3;

#endif 	/* __IDismPackage3_FWD_DEFINED__ */


#ifndef __IDismPackage4_FWD_DEFINED__
#define __IDismPackage4_FWD_DEFINED__
typedef interface IDismPackage4 IDismPackage4;

#endif 	/* __IDismPackage4_FWD_DEFINED__ */


#ifndef __IDismPackageCollection_FWD_DEFINED__
#define __IDismPackageCollection_FWD_DEFINED__
typedef interface IDismPackageCollection IDismPackageCollection;

#endif 	/* __IDismPackageCollection_FWD_DEFINED__ */


#ifndef __IDismPackageFeature2_FWD_DEFINED__
#define __IDismPackageFeature2_FWD_DEFINED__
typedef interface IDismPackageFeature2 IDismPackageFeature2;

#endif 	/* __IDismPackageFeature2_FWD_DEFINED__ */


#ifndef __IDismCapability_FWD_DEFINED__
#define __IDismCapability_FWD_DEFINED__
typedef interface IDismCapability IDismCapability;

#endif 	/* __IDismCapability_FWD_DEFINED__ */


#ifndef __IDismCapabilityCollection_FWD_DEFINED__
#define __IDismCapabilityCollection_FWD_DEFINED__
typedef interface IDismCapabilityCollection IDismCapabilityCollection;

#endif 	/* __IDismCapabilityCollection_FWD_DEFINED__ */


#ifndef __IDismPackageManager_FWD_DEFINED__
#define __IDismPackageManager_FWD_DEFINED__
typedef interface IDismPackageManager IDismPackageManager;

#endif 	/* __IDismPackageManager_FWD_DEFINED__ */


#ifndef __IDismMsuPackage_FWD_DEFINED__
#define __IDismMsuPackage_FWD_DEFINED__
typedef interface IDismMsuPackage IDismMsuPackage;

#endif 	/* __IDismMsuPackage_FWD_DEFINED__ */


#ifndef __IDismPackageManager2_FWD_DEFINED__
#define __IDismPackageManager2_FWD_DEFINED__
typedef interface IDismPackageManager2 IDismPackageManager2;

#endif 	/* __IDismPackageManager2_FWD_DEFINED__ */


#ifndef __IDismPackageManager3_FWD_DEFINED__
#define __IDismPackageManager3_FWD_DEFINED__
typedef interface IDismPackageManager3 IDismPackageManager3;

#endif 	/* __IDismPackageManager3_FWD_DEFINED__ */


#ifndef __IDismComponentStoreReport_FWD_DEFINED__
#define __IDismComponentStoreReport_FWD_DEFINED__
typedef interface IDismComponentStoreReport IDismComponentStoreReport;

#endif 	/* __IDismComponentStoreReport_FWD_DEFINED__ */


#ifndef __IDismPackageManager4_FWD_DEFINED__
#define __IDismPackageManager4_FWD_DEFINED__
typedef interface IDismPackageManager4 IDismPackageManager4;

#endif 	/* __IDismPackageManager4_FWD_DEFINED__ */


#ifndef __IDismPackageManager5_FWD_DEFINED__
#define __IDismPackageManager5_FWD_DEFINED__
typedef interface IDismPackageManager5 IDismPackageManager5;

#endif 	/* __IDismPackageManager5_FWD_DEFINED__ */


#ifndef __IDismServicePackScavenge_FWD_DEFINED__
#define __IDismServicePackScavenge_FWD_DEFINED__
typedef interface IDismServicePackScavenge IDismServicePackScavenge;

#endif 	/* __IDismServicePackScavenge_FWD_DEFINED__ */


#ifndef __IDismXmlPackageManager_FWD_DEFINED__
#define __IDismXmlPackageManager_FWD_DEFINED__
typedef interface IDismXmlPackageManager IDismXmlPackageManager;

#endif 	/* __IDismXmlPackageManager_FWD_DEFINED__ */


#ifndef __IDismDriverManager_FWD_DEFINED__
#define __IDismDriverManager_FWD_DEFINED__
typedef interface IDismDriverManager IDismDriverManager;

#endif 	/* __IDismDriverManager_FWD_DEFINED__ */


#ifndef __IDismDriverPackageCollection_FWD_DEFINED__
#define __IDismDriverPackageCollection_FWD_DEFINED__
typedef interface IDismDriverPackageCollection IDismDriverPackageCollection;

#endif 	/* __IDismDriverPackageCollection_FWD_DEFINED__ */


#ifndef __IDismDriverPackage_FWD_DEFINED__
#define __IDismDriverPackage_FWD_DEFINED__
typedef interface IDismDriverPackage IDismDriverPackage;

#endif 	/* __IDismDriverPackage_FWD_DEFINED__ */


#ifndef __IDismDriverCollection_FWD_DEFINED__
#define __IDismDriverCollection_FWD_DEFINED__
typedef interface IDismDriverCollection IDismDriverCollection;

#endif 	/* __IDismDriverCollection_FWD_DEFINED__ */


#ifndef __IDismDriver_FWD_DEFINED__
#define __IDismDriver_FWD_DEFINED__
typedef interface IDismDriver IDismDriver;

#endif 	/* __IDismDriver_FWD_DEFINED__ */


#ifndef __IDismDeviceIdCollection_FWD_DEFINED__
#define __IDismDeviceIdCollection_FWD_DEFINED__
typedef interface IDismDeviceIdCollection IDismDeviceIdCollection;

#endif 	/* __IDismDeviceIdCollection_FWD_DEFINED__ */


#ifndef __IDismDriverPackage2_FWD_DEFINED__
#define __IDismDriverPackage2_FWD_DEFINED__
typedef interface IDismDriverPackage2 IDismDriverPackage2;

#endif 	/* __IDismDriverPackage2_FWD_DEFINED__ */


#ifndef __IDismDriverPackage3_FWD_DEFINED__
#define __IDismDriverPackage3_FWD_DEFINED__
typedef interface IDismDriverPackage3 IDismDriverPackage3;

#endif 	/* __IDismDriverPackage3_FWD_DEFINED__ */


#ifndef __IDismDriverPackage4_FWD_DEFINED__
#define __IDismDriverPackage4_FWD_DEFINED__
typedef interface IDismDriverPackage4 IDismDriverPackage4;

#endif 	/* __IDismDriverPackage4_FWD_DEFINED__ */


#ifndef __IUnattend_FWD_DEFINED__
#define __IUnattend_FWD_DEFINED__
typedef interface IUnattend IUnattend;

#endif 	/* __IUnattend_FWD_DEFINED__ */


#ifndef __IUnattendManager_FWD_DEFINED__
#define __IUnattendManager_FWD_DEFINED__
typedef interface IUnattendManager IUnattendManager;

#endif 	/* __IUnattendManager_FWD_DEFINED__ */


#ifndef __IUnattendSettings_FWD_DEFINED__
#define __IUnattendSettings_FWD_DEFINED__
typedef interface IUnattendSettings IUnattendSettings;

#endif 	/* __IUnattendSettings_FWD_DEFINED__ */


#ifndef __IDismCompatManager_FWD_DEFINED__
#define __IDismCompatManager_FWD_DEFINED__
typedef interface IDismCompatManager IDismCompatManager;

#endif 	/* __IDismCompatManager_FWD_DEFINED__ */


#ifndef __IDismIntlManager_FWD_DEFINED__
#define __IDismIntlManager_FWD_DEFINED__
typedef interface IDismIntlManager IDismIntlManager;

#endif 	/* __IDismIntlManager_FWD_DEFINED__ */


#ifndef __IDismIntl_FWD_DEFINED__
#define __IDismIntl_FWD_DEFINED__
typedef interface IDismIntl IDismIntl;

#endif 	/* __IDismIntl_FWD_DEFINED__ */


#ifndef __IPEImageManager_FWD_DEFINED__
#define __IPEImageManager_FWD_DEFINED__
typedef interface IPEImageManager IPEImageManager;

#endif 	/* __IPEImageManager_FWD_DEFINED__ */


#ifndef __ITransmogrify_FWD_DEFINED__
#define __ITransmogrify_FWD_DEFINED__
typedef interface ITransmogrify ITransmogrify;

#endif 	/* __ITransmogrify_FWD_DEFINED__ */


#ifndef __ITransmogrifyEditionCollection_FWD_DEFINED__
#define __ITransmogrifyEditionCollection_FWD_DEFINED__
typedef interface ITransmogrifyEditionCollection ITransmogrifyEditionCollection;

#endif 	/* __ITransmogrifyEditionCollection_FWD_DEFINED__ */


#ifndef __ITransmogrify2_FWD_DEFINED__
#define __ITransmogrify2_FWD_DEFINED__
typedef interface ITransmogrify2 ITransmogrify2;

#endif 	/* __ITransmogrify2_FWD_DEFINED__ */


#ifndef __ITransmogrify3_FWD_DEFINED__
#define __ITransmogrify3_FWD_DEFINED__
typedef interface ITransmogrify3 ITransmogrify3;

#endif 	/* __ITransmogrify3_FWD_DEFINED__ */


#ifndef __ITransmogrify4_FWD_DEFINED__
#define __ITransmogrify4_FWD_DEFINED__
typedef interface ITransmogrify4 ITransmogrify4;

#endif 	/* __ITransmogrify4_FWD_DEFINED__ */


#ifndef __ITransmogrify5_FWD_DEFINED__
#define __ITransmogrify5_FWD_DEFINED__
typedef interface ITransmogrify5 ITransmogrify5;

#endif 	/* __ITransmogrify5_FWD_DEFINED__ */


#ifndef __IDismMsiManager_FWD_DEFINED__
#define __IDismMsiManager_FWD_DEFINED__
typedef interface IDismMsiManager IDismMsiManager;

#endif 	/* __IDismMsiManager_FWD_DEFINED__ */


#ifndef __IDismIBSSupport_FWD_DEFINED__
#define __IDismIBSSupport_FWD_DEFINED__
typedef interface IDismIBSSupport IDismIBSSupport;

#endif 	/* __IDismIBSSupport_FWD_DEFINED__ */


#ifndef __IDismAppxManager_FWD_DEFINED__
#define __IDismAppxManager_FWD_DEFINED__
typedef interface IDismAppxManager IDismAppxManager;

#endif 	/* __IDismAppxManager_FWD_DEFINED__ */


#ifndef __IDismAppxPackageInfoCollection_FWD_DEFINED__
#define __IDismAppxPackageInfoCollection_FWD_DEFINED__
typedef interface IDismAppxPackageInfoCollection IDismAppxPackageInfoCollection;

#endif 	/* __IDismAppxPackageInfoCollection_FWD_DEFINED__ */


#ifndef __IDismAppxPackageInfo_FWD_DEFINED__
#define __IDismAppxPackageInfo_FWD_DEFINED__
typedef interface IDismAppxPackageInfo IDismAppxPackageInfo;

#endif 	/* __IDismAppxPackageInfo_FWD_DEFINED__ */


#ifndef __IDismAppxManager2_FWD_DEFINED__
#define __IDismAppxManager2_FWD_DEFINED__
typedef interface IDismAppxManager2 IDismAppxManager2;

#endif 	/* __IDismAppxManager2_FWD_DEFINED__ */


#ifndef __IDismAppxManager3_FWD_DEFINED__
#define __IDismAppxManager3_FWD_DEFINED__
typedef interface IDismAppxManager3 IDismAppxManager3;

#endif 	/* __IDismAppxManager3_FWD_DEFINED__ */


#ifndef __IDismAppxManager4_FWD_DEFINED__
#define __IDismAppxManager4_FWD_DEFINED__
typedef interface IDismAppxManager4 IDismAppxManager4;

#endif 	/* __IDismAppxManager4_FWD_DEFINED__ */


#ifndef __IDismAppxManager5_FWD_DEFINED__
#define __IDismAppxManager5_FWD_DEFINED__
typedef interface IDismAppxManager5 IDismAppxManager5;

#endif 	/* __IDismAppxManager5_FWD_DEFINED__ */


#ifndef __IDismAppxManager6_FWD_DEFINED__
#define __IDismAppxManager6_FWD_DEFINED__
typedef interface IDismAppxManager6 IDismAppxManager6;

#endif 	/* __IDismAppxManager6_FWD_DEFINED__ */


#ifndef __IDismAppxPackageInfo2_FWD_DEFINED__
#define __IDismAppxPackageInfo2_FWD_DEFINED__
typedef interface IDismAppxPackageInfo2 IDismAppxPackageInfo2;

#endif 	/* __IDismAppxPackageInfo2_FWD_DEFINED__ */


#ifndef __IDismAssocSupport_FWD_DEFINED__
#define __IDismAssocSupport_FWD_DEFINED__
typedef interface IDismAssocSupport IDismAssocSupport;

#endif 	/* __IDismAssocSupport_FWD_DEFINED__ */


#ifndef __IDismKcacheManager_FWD_DEFINED__
#define __IDismKcacheManager_FWD_DEFINED__
typedef interface IDismKcacheManager IDismKcacheManager;

#endif 	/* __IDismKcacheManager_FWD_DEFINED__ */


#ifndef __IDismSetMachineName_FWD_DEFINED__
#define __IDismSetMachineName_FWD_DEFINED__
typedef interface IDismSetMachineName IDismSetMachineName;

#endif 	/* __IDismSetMachineName_FWD_DEFINED__ */


#ifndef __IDismGenericManager_FWD_DEFINED__
#define __IDismGenericManager_FWD_DEFINED__
typedef interface IDismGenericManager IDismGenericManager;

#endif 	/* __IDismGenericManager_FWD_DEFINED__ */


#ifndef __IDismSysprep_FWD_DEFINED__
#define __IDismSysprep_FWD_DEFINED__
typedef interface IDismSysprep IDismSysprep;

#endif 	/* __IDismSysprep_FWD_DEFINED__ */


#ifndef __IDismSysprepManager_FWD_DEFINED__
#define __IDismSysprepManager_FWD_DEFINED__
typedef interface IDismSysprepManager IDismSysprepManager;

#endif 	/* __IDismSysprepManager_FWD_DEFINED__ */


#ifndef __IDismSetupPlatform_FWD_DEFINED__
#define __IDismSetupPlatform_FWD_DEFINED__
typedef interface IDismSetupPlatform IDismSetupPlatform;

#endif 	/* __IDismSetupPlatform_FWD_DEFINED__ */


#ifndef __IDismSetupPlatformManager_FWD_DEFINED__
#define __IDismSetupPlatformManager_FWD_DEFINED__
typedef interface IDismSetupPlatformManager IDismSetupPlatformManager;

#endif 	/* __IDismSetupPlatformManager_FWD_DEFINED__ */


#ifndef __IDismFfuProvider_FWD_DEFINED__
#define __IDismFfuProvider_FWD_DEFINED__
typedef interface IDismFfuProvider IDismFfuProvider;

#endif 	/* __IDismFfuProvider_FWD_DEFINED__ */


#ifndef __IDismProvisioningSupport_FWD_DEFINED__
#define __IDismProvisioningSupport_FWD_DEFINED__
typedef interface IDismProvisioningSupport IDismProvisioningSupport;

#endif 	/* __IDismProvisioningSupport_FWD_DEFINED__ */


#ifndef __IDismProvPackageElementCollection_FWD_DEFINED__
#define __IDismProvPackageElementCollection_FWD_DEFINED__
typedef interface IDismProvPackageElementCollection IDismProvPackageElementCollection;

#endif 	/* __IDismProvPackageElementCollection_FWD_DEFINED__ */


#ifndef __IDismProvPackageElement_FWD_DEFINED__
#define __IDismProvPackageElement_FWD_DEFINED__
typedef interface IDismProvPackageElement IDismProvPackageElement;

#endif 	/* __IDismProvPackageElement_FWD_DEFINED__ */


#ifndef ___IDismEvents_FWD_DEFINED__
#define ___IDismEvents_FWD_DEFINED__
typedef interface _IDismEvents _IDismEvents;

#endif 	/* ___IDismEvents_FWD_DEFINED__ */


#ifndef __DismManager_FWD_DEFINED__
#define __DismManager_FWD_DEFINED__

#ifdef __cplusplus
typedef class DismManager DismManager;
#else
typedef struct DismManager DismManager;
#endif /* __cplusplus */

#endif 	/* __DismManager_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __DismLib_LIBRARY_DEFINED__
#define __DismLib_LIBRARY_DEFINED__

/* library DismLib */
/* [helpstring][version][uuid] */ 

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0001
    {
        DISM_SESSION_NONE	= 0,
        DISM_SESSION_REBOOT_IMAGE_REQUIRED	= 1,
        DISM_SESSION_RELOAD_SESSION_REQUIRED	= 2
    } 	DISM_SESSION_STATE;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0002
    {
        DISM_SESSION_TYPE_NONE	= 0,
        DISM_SESSION_TYPE_LOCAL	= 1,
        DISM_SESSION_TYPE_IMAGE	= 2
    } 	DISM_SESSION_TYPE;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0003
    {
        DismOutputSilent	= 0,
        DismOutputFailure	= 1,
        DismOutputWarning	= 2,
        DismOutputInformation	= 3,
        DismOutputDebug	= 4
    } 	DISM_LOGLEVEL_TYPE;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0004
    {
        DISM_IMAGE_FLAG_NONE	= 0,
        DISM_IMAGE_FLAG_HELP	= 1,
        DISM_IMAGE_FLAG_DOWNLEVEL	= 2
    } 	DISM_IMAGE_FLAGS;
;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0005
    {
        DISM_DISPLAY_TYPE_NONE	= 0,
        DISM_DISPLAY_TYPE_DEFAULT_LANG	= 1
    } 	DISM_DISPLAY_TYPE;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0006
    {
        DismFormatList	= 0,
        DismFormatTable	= 1,
        DismFormatXml	= 2
    } 	DISM_FORMAT_TYPE;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0007
    {
        DISM_OS_STATE_INVALID	= 0xffffffff,
        DISM_OS_STATE_OFFLINE	= 0,
        DISM_OS_STATE_ONLINE	= 1
    } 	DISM_OS_STATE;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0008
    {
        DISM_REGISTRY_UNKNOWN	= 0,
        DISM_REGISTRY_SOFTWARE	= 1,
        DISM_REGISTRY_SYSTEM	= 2,
        DISM_REGISTRY_SECURITY	= 3,
        DISM_REGISTRY_SAM	= 4,
        DISM_REGISTRY_DEFAULT	= 5,
        DISM_REGISTRY_HKCU	= 6,
        DISM_REGISTRY_COMPONENTS	= 7,
        DISM_REGISTRY_DRIVERS	= 8
    } 	DISM_REGISTRY;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0009
    {
        DISM_INSTALL_STATE_UNKNOWN	= 0,
        DISM_INSTALL_STATE_NOTPRESENT	= 1,
        DISM_INSTALL_STATE_UNINSTALLREQUESTED	= 2,
        DISM_INSTALL_STATE_STAGED	= 3,
        DISM_INSTALL_STATE_STAGING	= 4,
        DISM_INSTALL_STATE_INSTALLED	= 5,
        DISM_INSTALL_STATE_INSTALLREQUESTED	= 6,
        DISM_INSTALL_STATE_SUPERSEDED	= 7,
        DISM_INSTALL_STATE_PARTIALLYINSTALLED	= 8,
        DISM_INSTALL_STATE_REMOVED	= 9
    } 	DISM_INSTALL_STATE;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0010
    {
        DISM_PACKAGE_FULLY_OFFLINE_INSTALLABLE	= 0,
        DISM_PACKAGE_FULLY_OFFLINE_NOT_INSTALLABLE	= 1,
        DISM_PACKAGE_FULLY_OFFLINE_INSTALLABLE_UNDETERMINED	= 2
    } 	DISM_PACKAGE_FULLY_OFFLINE_INSTALLABLE_STATE;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0011
    {
        DISM_PACKAGE_INSTALL_OPTION_DEFAULT	= 0,
        DISM_PACKAGE_INSTALL_OPTION_DEFER	= 1
    } 	DISM_PACKAGE_INSTALL_OPTION;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0012
    {
        DISM_ON_DEMAND_SOURCE_PACKAGE_STORE	= 1,
        DISM_ON_DEMAND_SOURCE_LOCAL_SOURCE	= 2,
        DISM_ON_DEMAND_SOURCE_CLOUD	= 4
    } 	DISM_ON_DEMAND_SOURCE_FILTER;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0013
    {
        DISM_RESETBASE_OPTION_DEFAULT	= 0,
        DISM_RESETBASE_OPTION_DEFER	= 1
    } 	DISM_RESETBASE_OPTION;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0014
    {
        DISM_COFIGURABLE_PROPERTY_NONE	= 0,
        DISM_COFIGURABLE_PROPERTY_SOURCE_REPOSITORY_PATH	= 1,
        DISM_COFIGURABLE_PROPERTY_TARGET_REPOSITORY_PATH	= 2,
        DISM_COFIGURABLE_PROPERTY_INCLUDE_IMAGE_CAPABILITIES	= 3,
        DISM_COFIGURABLE_PROPERTY_REPOSITORY_RECIPE_FILE	= 4
    } 	DISM_CONFIGURABLE_PROPERTY;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0015
    {
        DISM_CBS_OPERATION_TYPE_NONE	= 0,
        DISM_CBS_OPERATION_TYPE_EXPORT_REPOSITORY	= 1
    } 	DISM_CBS_OPERATION_TYPE;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0016
    {
        DRIVER_COLL_ALL	= 0,
        DRIVER_COLL_INBOX	= 1,
        DRIVER_COLL_OUTOFBOX	= 2
    } 	DRIVER_COLL_OUTPUT;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0017
    {
        DRIVER_SIG_UNKNOWN	= 0,
        DRIVER_SIG_UNSIGNED	= 1,
        DRIVER_SIG_SIGNED	= 2
    } 	DRIVER_SIG_STATUS;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0018
    {
        DRIVER_INSTALL_DEFAULT	= 0,
        DRIVER_INSTALL_NOREFLECT	= 1,
        DRIVER_INSTALL_HARDLINK	= 2,
        DRIVER_INSTALL_FORCEREFLECT	= 4
    } 	DRIVER_INSTALL_FLAGS;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0019
    {
        Disabled	= 0,
        Enabled	= 1,
        Applied	= 2
    } 	ProfileStatus;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0020
    {
        DismFirstBootPreSysPrep	= 0,
        DismFirstBootPostSysPrep	= 1,
        DismFirstBootPreOobe	= 2,
        DismFirstBootPostOobe	= 3,
        DismFirstBootOnError	= 4
    } 	DISM_FIRST_BOOT_PHASE;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0021
    {
        SYSPREP_RESEAL_AUDIT	= 0,
        SYSPREP_RESEAL_OOBE	= 1
    } 	SYSPREP_RESEAL_TARGET;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0022
    {
        DISM_ELEMENT_TYPE_INVALID	= 0,
        DISM_ELEMENT_TYPE_APPLICATION	= 1,
        DISM_ELEMENT_TYPE_DATAASSET	= 2,
        DISM_ELEMENT_TYPE_MULTIVARIANT	= 3,
        DISM_ELEMENT_TYPE_ICB	= 4,
        DISM_ELEMENT_TYPE_DRIVER	= 5,
        DISM_ELEMENT_TYPE_LANGPACK	= 6,
        DISM_ELEMENT_TYPE_REGISTRY	= 7,
        DISM_ELEMENT_TYPE_CERTIFICATE	= 8,
        DISM_ELEMENT_TYPE_COMMONSETTINGS	= 9,
        DISM_ELEMENT_TYPE_FEATURESONDEMAND	= 10,
        DISM_ELEMENT_TYPE_OSUPDATE	= 11
    } 	DISM_ELEMENT_TYPE;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0023
    {
        DismImageInfoMountReadOnly	= 1,
        DismImageInfoMountReadWrite	= 2,
        DismImageInfoMountOptimize	= 4,
        DismImageInfoMountCheckIntegrity	= 8,
        DismImageInfoMountSupportEa	= 16
    } 	DISM_IMAGEINFO_MOUNT_FLAGS;
;


typedef /* [public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0024
    {
        DismMountedImageInfoStatusValid	= 0,
        DismMountedImageInfoStatusMounting	= 1,
        DismMountedImageInfoStatusInvalid	= 2,
        DismMountedImageInfoStatusNeedsRemount	= 4
    } 	DISM_MOUNTEDIMAGEINFO_STATUS_FLAGS;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0025
    {
        DismImageUnmountDiscard	= 0,
        DismImageUnmountCommit	= 1
    } 	DISM_IMAGE_UNMOUNT_FLAGS;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0026
    {
        DismImageSplitCheckIntegrity	= 1
    } 	DISM_IMAGE_SPLIT_FLAGS;
;


typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0027
    {
        DismImageApplyCheckIntegrity	= 1
    } 	DISM_IMAGE_APPLY_FLAGS;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0000_0000_0028
    {
        DismImageCommitMask	= 0xffff0000,
        DismImageCommitAppend	= 0x10000,
        DismImageCommitGenerateIntegrity	= 0x20000,
        DismImageCommitNoDirAcl	= 0x40000,
        DismImageCommitNoFileAcl	= 0x80000,
        DismImageCommitNoRpFix	= 0x100000,
        DismImageCommitVerify	= 0x200000,
        DismImageCommitSupportEa	= 0x400000
    } 	DISM_IMAGE_COMMIT_FLAGS;
;



typedef struct tag_DEVPROPKEY
    {
    GUID fmtid;
    unsigned long pId;
    } 	_DEVPROPKEY;











































































































typedef /* [custom][public] */ UINT64 ULONG_PTR;

typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0001_0040_0001
    {
        DISM_PROCESS_CHANGES_OPTION_FORCE_REBOOT	= 1,
        DISM_PROCESS_CHANGES_OPTION_SYNCHRONOUS_SCAVENGE	= 2,
        DISM_PROCESS_CHANGES_OPTION_ENABLE_COMPRESSION	= 4,
        DISM_PROCESS_CHANGES_OPTION_DISABLE_COMPRESSION	= 8,
        DISM_PROCESS_CHANGES_OPTION_SCAN_HEALTH	= 16,
        DISM_PROCESS_CHANGES_OPTION_RESTORE_HEALTH	= 32,
        DISM_PROCESS_CHANGES_OPTION_PREVENT_PENDING	= 64,
        DISM_PROCESS_CHANGES_OPTION_USE_LOCAL_SOURCE_ONLY	= 128,
        DISM_PROCESS_CHANGES_OPTION_USE_WINDOWS_UPDATE	= 256,
        DISM_PROCESS_CHANGES_OPTION_ASYNCHRONOUS_CLEANUP	= 512,
        DISM_PROCESS_CHANGES_OPTION_SYNCHRONOUS_CLEANUP	= 1024
    } 	DISM_PROCESS_CHANGES_OPTION;
;



typedef /* [public][public] */ 
enum __MIDL___MIDL_itf_dism_0001_0040_0002
    {
        DISM_FEATURE_OPERATION_OPTION_DEFAULT	= 0,
        DISM_FEATURE_OPERATION_OPTION_REMOVEPAYLOAD	= 1
    } 	DISM_FEATURE_OPERATION_OPTION;
;




EXTERN_C const IID LIBID_DismLib;

#ifndef __IDismManager_INTERFACE_DEFINED__
#define __IDismManager_INTERFACE_DEFINED__

/* interface IDismManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4D4FCE31-F767-45E4-B2E9-5400E3E1389A")
    IDismManager : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Logger( 
            /* [retval][out] */ IDismLogger **pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetLocalProviderStore( 
            /* [retval][out] */ IDismProviderStore **ppUnknown) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateImageSession( 
            /* [in] */ IDismImage *pImage,
            /* [retval][out] */ IDismImageSession **ppUnknown) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CloseImageSession( 
            /* [in] */ IDismImageSession *pImageSession,
            /* [retval][out] */ DISM_SESSION_STATE *State) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Close( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ValidateDismTarget( 
            /* [in] */ IDismImage *pImage,
            /* [retval][out] */ VARIANT_BOOL *pvbDismTargetValid) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismManager * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Logger )( 
            IDismManager * This,
            /* [retval][out] */ IDismLogger **pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetLocalProviderStore )( 
            IDismManager * This,
            /* [retval][out] */ IDismProviderStore **ppUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateImageSession )( 
            IDismManager * This,
            /* [in] */ IDismImage *pImage,
            /* [retval][out] */ IDismImageSession **ppUnknown);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CloseImageSession )( 
            IDismManager * This,
            /* [in] */ IDismImageSession *pImageSession,
            /* [retval][out] */ DISM_SESSION_STATE *State);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Close )( 
            IDismManager * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidateDismTarget )( 
            IDismManager * This,
            /* [in] */ IDismImage *pImage,
            /* [retval][out] */ VARIANT_BOOL *pvbDismTargetValid);
        
        END_INTERFACE
    } IDismManagerVtbl;

    interface IDismManager
    {
        CONST_VTBL struct IDismManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismManager_get_Logger(This,pVal)	\
    ( (This)->lpVtbl -> get_Logger(This,pVal) ) 

#define IDismManager_GetLocalProviderStore(This,ppUnknown)	\
    ( (This)->lpVtbl -> GetLocalProviderStore(This,ppUnknown) ) 

#define IDismManager_CreateImageSession(This,pImage,ppUnknown)	\
    ( (This)->lpVtbl -> CreateImageSession(This,pImage,ppUnknown) ) 

#define IDismManager_CloseImageSession(This,pImageSession,State)	\
    ( (This)->lpVtbl -> CloseImageSession(This,pImageSession,State) ) 

#define IDismManager_Close(This)	\
    ( (This)->lpVtbl -> Close(This) ) 

#define IDismManager_ValidateDismTarget(This,pImage,pvbDismTargetValid)	\
    ( (This)->lpVtbl -> ValidateDismTarget(This,pImage,pvbDismTargetValid) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismManager_INTERFACE_DEFINED__ */


#ifndef __IDismLogger_INTERFACE_DEFINED__
#define __IDismLogger_INTERFACE_DEFINED__

/* interface IDismLogger */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismLogger;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BD7FC505-69BC-49CB-8C58-1D1DA547B7E2")
    IDismLogger : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ BSTR logFile,
            /* [in] */ DISM_LOGLEVEL_TYPE logLevel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE WriteEntry( 
            /* [in] */ DISM_LOGLEVEL_TYPE level,
            /* [in] */ long providerID,
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR message) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LogFilePath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxLevelLogged( 
            /* [retval][out] */ DISM_LOGLEVEL_TYPE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Enabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WdsCoreFilePath( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismLoggerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismLogger * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismLogger * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismLogger * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismLogger * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismLogger * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismLogger * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismLogger * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IDismLogger * This,
            /* [in] */ BSTR logFile,
            /* [in] */ DISM_LOGLEVEL_TYPE logLevel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *WriteEntry )( 
            IDismLogger * This,
            /* [in] */ DISM_LOGLEVEL_TYPE level,
            /* [in] */ long providerID,
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR message);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LogFilePath )( 
            IDismLogger * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxLevelLogged )( 
            IDismLogger * This,
            /* [retval][out] */ DISM_LOGLEVEL_TYPE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Enabled )( 
            IDismLogger * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WdsCoreFilePath )( 
            IDismLogger * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IDismLoggerVtbl;

    interface IDismLogger
    {
        CONST_VTBL struct IDismLoggerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismLogger_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismLogger_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismLogger_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismLogger_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismLogger_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismLogger_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismLogger_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismLogger_Initialize(This,logFile,logLevel)	\
    ( (This)->lpVtbl -> Initialize(This,logFile,logLevel) ) 

#define IDismLogger_WriteEntry(This,level,providerID,providerName,message)	\
    ( (This)->lpVtbl -> WriteEntry(This,level,providerID,providerName,message) ) 

#define IDismLogger_get_LogFilePath(This,pVal)	\
    ( (This)->lpVtbl -> get_LogFilePath(This,pVal) ) 

#define IDismLogger_get_MaxLevelLogged(This,pVal)	\
    ( (This)->lpVtbl -> get_MaxLevelLogged(This,pVal) ) 

#define IDismLogger_get_Enabled(This,pVal)	\
    ( (This)->lpVtbl -> get_Enabled(This,pVal) ) 

#define IDismLogger_get_WdsCoreFilePath(This,pVal)	\
    ( (This)->lpVtbl -> get_WdsCoreFilePath(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismLogger_INTERFACE_DEFINED__ */


#ifndef __IDismObject_INTERFACE_DEFINED__
#define __IDismObject_INTERFACE_DEFINED__

	/* interface IDismObject */
	/* [object][nonextensible][hidden][helpstring][uuid] */


	EXTERN_C const IID IID_IDismObject;

#if defined(__cplusplus) && !defined(CINTERFACE)

	MIDL_INTERFACE("D8066238-FDD5-4195-8155-2371E0E61CC5")
		IDismObject : public IDispatch
	{
	public:
		virtual /* [helpstring] */ HRESULT __stdcall OnConnect(
			/* [in] */ IUnknown * Parent,
			/* [in] */ IDismLogger * DismLogger) = 0;

		virtual /* [helpstring] */ HRESULT __stdcall OnDisconnect(void) = 0;

		virtual /* [helpstring][propget] */ HRESULT __stdcall get_Parent(
			/* [retval][out] */ IUnknown** Parent) = 0;

	};


#else 	/* C style interface */

	typedef struct IDismObjectVtbl
	{
		BEGIN_INTERFACE

			HRESULT(STDMETHODCALLTYPE* QueryInterface)(
				IDismObject* This,
				/* [in] */ REFIID riid,
				/* [annotation][iid_is][out] */
				_COM_Outptr_  void** ppvObject);

		ULONG(STDMETHODCALLTYPE* AddRef)(
			IDismObject* This);

		ULONG(STDMETHODCALLTYPE* Release)(
			IDismObject* This);

		HRESULT(STDMETHODCALLTYPE* GetTypeInfoCount)(
			IDismObject* This,
			/* [out] */ UINT* pctinfo);

		HRESULT(STDMETHODCALLTYPE* GetTypeInfo)(
			IDismObject* This,
			/* [in] */ UINT iTInfo,
			/* [in] */ LCID lcid,
			/* [out] */ ITypeInfo** ppTInfo);

		HRESULT(STDMETHODCALLTYPE* GetIDsOfNames)(
			IDismObject* This,
			/* [in] */ REFIID riid,
			/* [size_is][in] */ LPOLESTR* rgszNames,
			/* [range][in] */ UINT cNames,
			/* [in] */ LCID lcid,
			/* [size_is][out] */ DISPID* rgDispId);

		/* [local] */ HRESULT(STDMETHODCALLTYPE* Invoke)(
			IDismObject* This,
			/* [annotation][in] */
			_In_  DISPID dispIdMember,
			/* [annotation][in] */
			_In_  REFIID riid,
			/* [annotation][in] */
			_In_  LCID lcid,
			/* [annotation][in] */
			_In_  WORD wFlags,
			/* [annotation][out][in] */
			_In_  DISPPARAMS* pDispParams,
			/* [annotation][out] */
			_Out_opt_  VARIANT* pVarResult,
			/* [annotation][out] */
			_Out_opt_  EXCEPINFO* pExcepInfo,
			/* [annotation][out] */
			_Out_opt_  UINT* puArgErr);

		/* [helpstring] */ HRESULT(__stdcall* OnConnect)(
			IDismObject* This,
			/* [in] */ IUnknown* Parent,
			/* [in] */ IDismLogger* DismLogger);

		/* [helpstring] */ HRESULT(__stdcall* OnDisconnect)(
			IDismObject* This);

		/* [helpstring][propget] */ HRESULT(__stdcall* get_Parent)(
			IDismObject* This,
			/* [retval][out] */ IUnknown** Parent);

		END_INTERFACE
	} IDismObjectVtbl;

	interface IDismObject
	{
		CONST_VTBL struct IDismObjectVtbl* lpVtbl;
	};



#ifdef COBJMACROS


#define IDismObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismObject_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismObject_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismObject_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismObject_INTERFACE_DEFINED__ */


#ifndef __IDismProviderStore_INTERFACE_DEFINED__
#define __IDismProviderStore_INTERFACE_DEFINED__

/* interface IDismProviderStore */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProviderStore;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5DF7B1B0-93A5-4F03-8BCB-F39396899443")
    IDismProviderStore : public IDismObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProvider( 
            /* [in] */ BSTR providerName,
            /* [retval][out] */ IDismProvider **Provider) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetExternalProvider( 
            /* [in] */ BSTR providerName,
            /* [retval][out] */ IDismProvider **Provider) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddProvider( 
            /* [in] */ BSTR RelativeProviderLocation) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveProvider( 
            /* [in] */ BSTR providerName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProviderCollection( 
            /* [retval][out] */ IDismProviderCollection **Providers) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DismImage( 
            /* [retval][out] */ IDismImage **DismImage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProviderStoreVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProviderStore * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProviderStore * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProviderStore * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProviderStore * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProviderStore * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProviderStore * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProviderStore * This,
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
        
        /* [helpstring] */ HRESULT ( __stdcall *OnConnect )( 
            IDismProviderStore * This,
            /* [in] */ IUnknown *Parent,
            /* [in] */ IDismLogger *DismLogger);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnDisconnect )( 
            IDismProviderStore * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Parent )( 
            IDismProviderStore * This,
            /* [retval][out] */ IUnknown **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProvider )( 
            IDismProviderStore * This,
            /* [in] */ BSTR providerName,
            /* [retval][out] */ IDismProvider **Provider);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetExternalProvider )( 
            IDismProviderStore * This,
            /* [in] */ BSTR providerName,
            /* [retval][out] */ IDismProvider **Provider);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProvider )( 
            IDismProviderStore * This,
            /* [in] */ BSTR RelativeProviderLocation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveProvider )( 
            IDismProviderStore * This,
            /* [in] */ BSTR providerName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProviderCollection )( 
            IDismProviderStore * This,
            /* [retval][out] */ IDismProviderCollection **Providers);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DismImage )( 
            IDismProviderStore * This,
            /* [retval][out] */ IDismImage **DismImage);
        
        END_INTERFACE
    } IDismProviderStoreVtbl;

    interface IDismProviderStore
    {
        CONST_VTBL struct IDismProviderStoreVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProviderStore_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProviderStore_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProviderStore_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProviderStore_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProviderStore_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProviderStore_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProviderStore_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProviderStore_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismProviderStore_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismProviderStore_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 


#define IDismProviderStore_GetProvider(This,providerName,Provider)	\
    ( (This)->lpVtbl -> GetProvider(This,providerName,Provider) ) 

#define IDismProviderStore_GetExternalProvider(This,providerName,Provider)	\
    ( (This)->lpVtbl -> GetExternalProvider(This,providerName,Provider) ) 

#define IDismProviderStore_AddProvider(This,RelativeProviderLocation)	\
    ( (This)->lpVtbl -> AddProvider(This,RelativeProviderLocation) ) 

#define IDismProviderStore_RemoveProvider(This,providerName)	\
    ( (This)->lpVtbl -> RemoveProvider(This,providerName) ) 

#define IDismProviderStore_GetProviderCollection(This,Providers)	\
    ( (This)->lpVtbl -> GetProviderCollection(This,Providers) ) 

#define IDismProviderStore_get_DismImage(This,DismImage)	\
    ( (This)->lpVtbl -> get_DismImage(This,DismImage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProviderStore_INTERFACE_DEFINED__ */


#ifndef __IDismProvider_INTERFACE_DEFINED__
#define __IDismProvider_INTERFACE_DEFINED__

/* interface IDismProvider */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("33F93018-EDB7-4092-978A-4B37D5DFB1C0")
    IDismProvider : public IDismObject
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProvider * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProvider * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProvider * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProvider * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProvider * This,
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
        
        /* [helpstring] */ HRESULT ( __stdcall *OnConnect )( 
            IDismProvider * This,
            /* [in] */ IUnknown *Parent,
            /* [in] */ IDismLogger *DismLogger);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnDisconnect )( 
            IDismProvider * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Parent )( 
            IDismProvider * This,
            /* [retval][out] */ IUnknown **Parent);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismProvider * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IDismProvider * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IDismProviderVtbl;

    interface IDismProvider
    {
        CONST_VTBL struct IDismProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProvider_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProvider_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProvider_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProvider_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProvider_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismProvider_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismProvider_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 


#define IDismProvider_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismProvider_get_Version(This,pVal)	\
    ( (This)->lpVtbl -> get_Version(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProvider_INTERFACE_DEFINED__ */


#ifndef __IDismProviderCollection_INTERFACE_DEFINED__
#define __IDismProviderCollection_INTERFACE_DEFINED__

/* interface IDismProviderCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProviderCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("722DE115-1404-4BF8-BCEE-DE0B7B580671")
    IDismProviderCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismProvider **ppProvider) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProviderCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProviderCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProviderCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProviderCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProviderCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProviderCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProviderCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProviderCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismProviderCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismProviderCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismProvider **ppProvider);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismProviderCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismProviderCollectionVtbl;

    interface IDismProviderCollection
    {
        CONST_VTBL struct IDismProviderCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProviderCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProviderCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProviderCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProviderCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProviderCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProviderCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProviderCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProviderCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismProviderCollection_get_Item(This,n,ppProvider)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppProvider) ) 

#define IDismProviderCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProviderCollection_INTERFACE_DEFINED__ */


#ifndef __IDismImage_INTERFACE_DEFINED__
#define __IDismImage_INTERFACE_DEFINED__

/* interface IDismImage */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismImage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9BB62BF9-01A0-49A7-BE40-FB5445B29BEF")
    IDismImage : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PhysicalLocation( 
            /* [retval][out] */ BSTR *PhysicalLocation) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Save( 
            unsigned long ulFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Discard( void) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_IsClosed( 
            /* [retval][out] */ VARIANT_BOOL *IsClosed) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProviderStorePath( 
            /* [retval][out] */ BSTR *ProviderStorePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProviderStorePath( 
            /* [in] */ BSTR ProviderStorePath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Unmount( 
            /* [in] */ unsigned long ulFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ValidateStatus( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remount( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismImageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismImage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismImage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismImage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismImage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismImage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismImage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismImage * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PhysicalLocation )( 
            IDismImage * This,
            /* [retval][out] */ BSTR *PhysicalLocation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Save )( 
            IDismImage * This,
            unsigned long ulFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Discard )( 
            IDismImage * This);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsClosed )( 
            IDismImage * This,
            /* [retval][out] */ VARIANT_BOOL *IsClosed);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderStorePath )( 
            IDismImage * This,
            /* [retval][out] */ BSTR *ProviderStorePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProviderStorePath )( 
            IDismImage * This,
            /* [in] */ BSTR ProviderStorePath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Unmount )( 
            IDismImage * This,
            /* [in] */ unsigned long ulFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidateStatus )( 
            IDismImage * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remount )( 
            IDismImage * This);
        
        END_INTERFACE
    } IDismImageVtbl;

    interface IDismImage
    {
        CONST_VTBL struct IDismImageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismImage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismImage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismImage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismImage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismImage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismImage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismImage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismImage_get_PhysicalLocation(This,PhysicalLocation)	\
    ( (This)->lpVtbl -> get_PhysicalLocation(This,PhysicalLocation) ) 

#define IDismImage_Save(This,ulFlags)	\
    ( (This)->lpVtbl -> Save(This,ulFlags) ) 

#define IDismImage_Discard(This)	\
    ( (This)->lpVtbl -> Discard(This) ) 

#define IDismImage_get_IsClosed(This,IsClosed)	\
    ( (This)->lpVtbl -> get_IsClosed(This,IsClosed) ) 

#define IDismImage_get_ProviderStorePath(This,ProviderStorePath)	\
    ( (This)->lpVtbl -> get_ProviderStorePath(This,ProviderStorePath) ) 

#define IDismImage_SetProviderStorePath(This,ProviderStorePath)	\
    ( (This)->lpVtbl -> SetProviderStorePath(This,ProviderStorePath) ) 

#define IDismImage_Unmount(This,ulFlags)	\
    ( (This)->lpVtbl -> Unmount(This,ulFlags) ) 

#define IDismImage_ValidateStatus(This)	\
    ( (This)->lpVtbl -> ValidateStatus(This) ) 

#define IDismImage_Remount(This)	\
    ( (This)->lpVtbl -> Remount(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismImage_INTERFACE_DEFINED__ */


#ifndef __IDismImageSession_INTERFACE_DEFINED__
#define __IDismImageSession_INTERFACE_DEFINED__

/* interface IDismImageSession */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismImageSession;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A08538A6-B9FF-47C2-B228-B93612EF114B")
    IDismImageSession : public IDismObject
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProviderStore( 
            /* [retval][out] */ IDismProviderStore **ProviderStore) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ImageState( 
            /* [retval][out] */ DISM_SESSION_STATE *State) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DismImage( 
            /* [retval][out] */ IDismImage **DismImage) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SessionType( 
            /* [retval][out] */ DISM_SESSION_TYPE *SessionType) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SessionVersion( 
            /* [retval][out] */ BSTR *SessionVersion) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismImageSessionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismImageSession * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismImageSession * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismImageSession * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismImageSession * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismImageSession * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismImageSession * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismImageSession * This,
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
        
        /* [helpstring] */ HRESULT ( __stdcall *OnConnect )( 
            IDismImageSession * This,
            /* [in] */ IUnknown *Parent,
            /* [in] */ IDismLogger *DismLogger);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnDisconnect )( 
            IDismImageSession * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Parent )( 
            IDismImageSession * This,
            /* [retval][out] */ IUnknown **Parent);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProviderStore )( 
            IDismImageSession * This,
            /* [retval][out] */ IDismProviderStore **ProviderStore);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ImageState )( 
            IDismImageSession * This,
            /* [retval][out] */ DISM_SESSION_STATE *State);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DismImage )( 
            IDismImageSession * This,
            /* [retval][out] */ IDismImage **DismImage);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SessionType )( 
            IDismImageSession * This,
            /* [retval][out] */ DISM_SESSION_TYPE *SessionType);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SessionVersion )( 
            IDismImageSession * This,
            /* [retval][out] */ BSTR *SessionVersion);
        
        END_INTERFACE
    } IDismImageSessionVtbl;

    interface IDismImageSession
    {
        CONST_VTBL struct IDismImageSessionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismImageSession_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismImageSession_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismImageSession_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismImageSession_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismImageSession_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismImageSession_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismImageSession_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismImageSession_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismImageSession_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismImageSession_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 


#define IDismImageSession_get_ProviderStore(This,ProviderStore)	\
    ( (This)->lpVtbl -> get_ProviderStore(This,ProviderStore) ) 

#define IDismImageSession_get_ImageState(This,State)	\
    ( (This)->lpVtbl -> get_ImageState(This,State) ) 

#define IDismImageSession_get_DismImage(This,DismImage)	\
    ( (This)->lpVtbl -> get_DismImage(This,DismImage) ) 

#define IDismImageSession_get_SessionType(This,SessionType)	\
    ( (This)->lpVtbl -> get_SessionType(This,SessionType) ) 

#define IDismImageSession_get_SessionVersion(This,SessionVersion)	\
    ( (This)->lpVtbl -> get_SessionVersion(This,SessionVersion) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismImageSession_INTERFACE_DEFINED__ */


#ifndef __IDismManagerPrivate_INTERFACE_DEFINED__
#define __IDismManagerPrivate_INTERFACE_DEFINED__

/* interface IDismManagerPrivate */
/* [object][nonextensible][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismManagerPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8817CB2A-E80A-480B-A7B4-2232443A9E4B")
    IDismManagerPrivate : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDismManagerPrivateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismManagerPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismManagerPrivate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismManagerPrivate * This);
        
        END_INTERFACE
    } IDismManagerPrivateVtbl;

    interface IDismManagerPrivate
    {
        CONST_VTBL struct IDismManagerPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismManagerPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismManagerPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismManagerPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismManagerPrivate_INTERFACE_DEFINED__ */


#ifndef __IDismEventManager_INTERFACE_DEFINED__
#define __IDismEventManager_INTERFACE_DEFINED__

/* interface IDismEventManager */
/* [object][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismEventManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D9894135-1AA7-49AF-AD11-27E784CAC931")
    IDismEventManager : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall OnInitiate( 
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ BSTR message,
            /* [out][in] */ int *Response) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall OnError( 
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ SCODE errorCode,
            /* [in] */ BSTR message,
            /* [out][in] */ int *Response) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall OnProgress( 
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ long ticks,
            /* [in] */ long totalTicks,
            /* [in] */ BSTR message,
            /* [out][in] */ int *Response) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall OnTerminate( 
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ BSTR message) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall OnCLIOutput( 
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ BSTR message,
            /* [out][in] */ int *Response) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismEventManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismEventManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismEventManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismEventManager * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnInitiate )( 
            IDismEventManager * This,
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ BSTR message,
            /* [out][in] */ int *Response);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnError )( 
            IDismEventManager * This,
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ SCODE errorCode,
            /* [in] */ BSTR message,
            /* [out][in] */ int *Response);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnProgress )( 
            IDismEventManager * This,
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ long ticks,
            /* [in] */ long totalTicks,
            /* [in] */ BSTR message,
            /* [out][in] */ int *Response);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnTerminate )( 
            IDismEventManager * This,
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ BSTR message);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnCLIOutput )( 
            IDismEventManager * This,
            /* [in] */ BSTR providerName,
            /* [in] */ BSTR ActionName,
            /* [in] */ IDismImage *Image,
            /* [in] */ BSTR message,
            /* [out][in] */ int *Response);
        
        END_INTERFACE
    } IDismEventManagerVtbl;

    interface IDismEventManager
    {
        CONST_VTBL struct IDismEventManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismEventManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismEventManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismEventManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismEventManager_OnInitiate(This,providerName,ActionName,Image,message,Response)	\
    ( (This)->lpVtbl -> OnInitiate(This,providerName,ActionName,Image,message,Response) ) 

#define IDismEventManager_OnError(This,providerName,ActionName,Image,errorCode,message,Response)	\
    ( (This)->lpVtbl -> OnError(This,providerName,ActionName,Image,errorCode,message,Response) ) 

#define IDismEventManager_OnProgress(This,providerName,ActionName,Image,ticks,totalTicks,message,Response)	\
    ( (This)->lpVtbl -> OnProgress(This,providerName,ActionName,Image,ticks,totalTicks,message,Response) ) 

#define IDismEventManager_OnTerminate(This,providerName,ActionName,Image,message)	\
    ( (This)->lpVtbl -> OnTerminate(This,providerName,ActionName,Image,message) ) 

#define IDismEventManager_OnCLIOutput(This,providerName,ActionName,Image,message,Response)	\
    ( (This)->lpVtbl -> OnCLIOutput(This,providerName,ActionName,Image,message,Response) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismEventManager_INTERFACE_DEFINED__ */


#ifndef __IDismError_INTERFACE_DEFINED__
#define __IDismError_INTERFACE_DEFINED__

/* interface IDismError */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismError;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("18CAABCD-EB4C-4DF3-9FF1-B5D24E655F33")
    IDismError : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Hresult( 
            /* [retval][out] */ HRESULT *hr) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Source( 
            /* [retval][out] */ BSTR *Source) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Description) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismErrorVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismError * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismError * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismError * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismError * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismError * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismError * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismError * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Hresult )( 
            IDismError * This,
            /* [retval][out] */ HRESULT *hr);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Source )( 
            IDismError * This,
            /* [retval][out] */ BSTR *Source);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismError * This,
            /* [retval][out] */ BSTR *Description);
        
        END_INTERFACE
    } IDismErrorVtbl;

    interface IDismError
    {
        CONST_VTBL struct IDismErrorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismError_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismError_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismError_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismError_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismError_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismError_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismError_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismError_get_Hresult(This,hr)	\
    ( (This)->lpVtbl -> get_Hresult(This,hr) ) 

#define IDismError_get_Source(This,Source)	\
    ( (This)->lpVtbl -> get_Source(This,Source) ) 

#define IDismError_get_Description(This,Description)	\
    ( (This)->lpVtbl -> get_Description(This,Description) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismError_INTERFACE_DEFINED__ */


#ifndef __IDismErrorCollection_INTERFACE_DEFINED__
#define __IDismErrorCollection_INTERFACE_DEFINED__

/* interface IDismErrorCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismErrorCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("74D82B92-AE58-4962-9133-3701E1510A81")
    IDismErrorCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismError **Error) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismErrorCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismErrorCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismErrorCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismErrorCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismErrorCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismErrorCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismErrorCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismErrorCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismErrorCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismErrorCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismError **Error);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismErrorCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismErrorCollectionVtbl;

    interface IDismErrorCollection
    {
        CONST_VTBL struct IDismErrorCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismErrorCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismErrorCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismErrorCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismErrorCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismErrorCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismErrorCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismErrorCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismErrorCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismErrorCollection_get_Item(This,n,Error)	\
    ( (This)->lpVtbl -> get_Item(This,n,Error) ) 

#define IDismErrorCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismErrorCollection_INTERFACE_DEFINED__ */


#ifndef __IDismImageManager_INTERFACE_DEFINED__
#define __IDismImageManager_INTERFACE_DEFINED__

/* interface IDismImageManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismImageManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A654FF2F-D9FA-4DF1-AABF-982C0A3C5F52")
    IDismImageManager : public IDismObject
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetImageInfoCollection( 
            /* [in] */ BSTR bszPath,
            /* [retval][out] */ IDismImageInfoCollection **ppImageInfoCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateDismImage( 
            /* [in] */ BSTR bszPath,
            /* [retval][out] */ IDismImage **ppDISMImage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetMountedImageInfoCollection( 
            /* [retval][out] */ IDismMountedImageInfoCollection **ppMountedImageInfoCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CleanupMountpoints( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismImageManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismImageManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismImageManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismImageManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismImageManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismImageManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismImageManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismImageManager * This,
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
        
        /* [helpstring] */ HRESULT ( __stdcall *OnConnect )( 
            IDismImageManager * This,
            /* [in] */ IUnknown *Parent,
            /* [in] */ IDismLogger *DismLogger);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnDisconnect )( 
            IDismImageManager * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Parent )( 
            IDismImageManager * This,
            /* [retval][out] */ IUnknown **Parent);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetImageInfoCollection )( 
            IDismImageManager * This,
            /* [in] */ BSTR bszPath,
            /* [retval][out] */ IDismImageInfoCollection **ppImageInfoCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateDismImage )( 
            IDismImageManager * This,
            /* [in] */ BSTR bszPath,
            /* [retval][out] */ IDismImage **ppDISMImage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetMountedImageInfoCollection )( 
            IDismImageManager * This,
            /* [retval][out] */ IDismMountedImageInfoCollection **ppMountedImageInfoCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CleanupMountpoints )( 
            IDismImageManager * This);
        
        END_INTERFACE
    } IDismImageManagerVtbl;

    interface IDismImageManager
    {
        CONST_VTBL struct IDismImageManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismImageManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismImageManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismImageManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismImageManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismImageManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismImageManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismImageManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismImageManager_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismImageManager_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismImageManager_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 


#define IDismImageManager_GetImageInfoCollection(This,bszPath,ppImageInfoCollection)	\
    ( (This)->lpVtbl -> GetImageInfoCollection(This,bszPath,ppImageInfoCollection) ) 

#define IDismImageManager_CreateDismImage(This,bszPath,ppDISMImage)	\
    ( (This)->lpVtbl -> CreateDismImage(This,bszPath,ppDISMImage) ) 

#define IDismImageManager_GetMountedImageInfoCollection(This,ppMountedImageInfoCollection)	\
    ( (This)->lpVtbl -> GetMountedImageInfoCollection(This,ppMountedImageInfoCollection) ) 

#define IDismImageManager_CleanupMountpoints(This)	\
    ( (This)->lpVtbl -> CleanupMountpoints(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismImageManager_INTERFACE_DEFINED__ */


#ifndef __IDismImageInfoCollection_INTERFACE_DEFINED__
#define __IDismImageInfoCollection_INTERFACE_DEFINED__

/* interface IDismImageInfoCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismImageInfoCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("572F3374-7DAE-47AB-88AF-BD6CA29252FE")
    IDismImageInfoCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismImageInfo **ppDismImageInfo) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismImageInfoCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismImageInfoCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismImageInfoCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismImageInfoCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismImageInfoCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismImageInfoCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismImageInfoCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismImageInfoCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismImageInfoCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismImageInfoCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismImageInfo **ppDismImageInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismImageInfoCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismImageInfoCollectionVtbl;

    interface IDismImageInfoCollection
    {
        CONST_VTBL struct IDismImageInfoCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismImageInfoCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismImageInfoCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismImageInfoCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismImageInfoCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismImageInfoCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismImageInfoCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismImageInfoCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismImageInfoCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismImageInfoCollection_get_Item(This,n,ppDismImageInfo)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppDismImageInfo) ) 

#define IDismImageInfoCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismImageInfoCollection_INTERFACE_DEFINED__ */


#ifndef __IDismImageInfo_INTERFACE_DEFINED__
#define __IDismImageInfo_INTERFACE_DEFINED__

/* interface IDismImageInfo */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismImageInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7970DE73-63E8-43E9-9F61-81BDC748F29B")
    IDismImageInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbszName) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Name( 
            /* [in] */ BSTR pbszName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pbszDescription) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Description( 
            /* [in] */ BSTR pbszDescription) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Index( 
            /* [retval][out] */ unsigned long *pulIndex) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ BSTR bszName,
            /* [retval][out] */ BSTR *pbszValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPropertyEx( 
            /* [in] */ BSTR bszName,
            /* [in] */ unsigned long ulIndex,
            /* [retval][out] */ BSTR *pbszValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ BSTR bszName,
            /* [in] */ BSTR bszValue) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Mount( 
            /* [in] */ BSTR bszMountPath,
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ IDismImage **ppDISMImage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismImageInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismImageInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismImageInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismImageInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismImageInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismImageInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismImageInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismImageInfo * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismImageInfo * This,
            /* [retval][out] */ BSTR *pbszName);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Name )( 
            IDismImageInfo * This,
            /* [in] */ BSTR pbszName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismImageInfo * This,
            /* [retval][out] */ BSTR *pbszDescription);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Description )( 
            IDismImageInfo * This,
            /* [in] */ BSTR pbszDescription);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            IDismImageInfo * This,
            /* [retval][out] */ unsigned long *pulIndex);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IDismImageInfo * This,
            /* [in] */ BSTR bszName,
            /* [retval][out] */ BSTR *pbszValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPropertyEx )( 
            IDismImageInfo * This,
            /* [in] */ BSTR bszName,
            /* [in] */ unsigned long ulIndex,
            /* [retval][out] */ BSTR *pbszValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IDismImageInfo * This,
            /* [in] */ BSTR bszName,
            /* [in] */ BSTR bszValue);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Mount )( 
            IDismImageInfo * This,
            /* [in] */ BSTR bszMountPath,
            /* [in] */ unsigned long ulFlags,
            /* [retval][out] */ IDismImage **ppDISMImage);
        
        END_INTERFACE
    } IDismImageInfoVtbl;

    interface IDismImageInfo
    {
        CONST_VTBL struct IDismImageInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismImageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismImageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismImageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismImageInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismImageInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismImageInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismImageInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismImageInfo_get_Name(This,pbszName)	\
    ( (This)->lpVtbl -> get_Name(This,pbszName) ) 

#define IDismImageInfo_put_Name(This,pbszName)	\
    ( (This)->lpVtbl -> put_Name(This,pbszName) ) 

#define IDismImageInfo_get_Description(This,pbszDescription)	\
    ( (This)->lpVtbl -> get_Description(This,pbszDescription) ) 

#define IDismImageInfo_put_Description(This,pbszDescription)	\
    ( (This)->lpVtbl -> put_Description(This,pbszDescription) ) 

#define IDismImageInfo_get_Index(This,pulIndex)	\
    ( (This)->lpVtbl -> get_Index(This,pulIndex) ) 

#define IDismImageInfo_GetProperty(This,bszName,pbszValue)	\
    ( (This)->lpVtbl -> GetProperty(This,bszName,pbszValue) ) 

#define IDismImageInfo_GetPropertyEx(This,bszName,ulIndex,pbszValue)	\
    ( (This)->lpVtbl -> GetPropertyEx(This,bszName,ulIndex,pbszValue) ) 

#define IDismImageInfo_SetProperty(This,bszName,bszValue)	\
    ( (This)->lpVtbl -> SetProperty(This,bszName,bszValue) ) 

#define IDismImageInfo_Mount(This,bszMountPath,ulFlags,ppDISMImage)	\
    ( (This)->lpVtbl -> Mount(This,bszMountPath,ulFlags,ppDISMImage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismImageInfo_INTERFACE_DEFINED__ */


#ifndef __IDismMountedImageInfoCollection_INTERFACE_DEFINED__
#define __IDismMountedImageInfoCollection_INTERFACE_DEFINED__

/* interface IDismMountedImageInfoCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismMountedImageInfoCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("931FC35D-0976-48B8-8BDE-B5954AADD3F2")
    IDismMountedImageInfoCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismMountedImageInfo **ppDismMountedImageInfo) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismMountedImageInfoCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismMountedImageInfoCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismMountedImageInfoCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismMountedImageInfoCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismMountedImageInfoCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismMountedImageInfoCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismMountedImageInfoCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismMountedImageInfoCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismMountedImageInfoCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismMountedImageInfoCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismMountedImageInfo **ppDismMountedImageInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismMountedImageInfoCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismMountedImageInfoCollectionVtbl;

    interface IDismMountedImageInfoCollection
    {
        CONST_VTBL struct IDismMountedImageInfoCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismMountedImageInfoCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismMountedImageInfoCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismMountedImageInfoCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismMountedImageInfoCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismMountedImageInfoCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismMountedImageInfoCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismMountedImageInfoCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismMountedImageInfoCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismMountedImageInfoCollection_get_Item(This,n,ppDismMountedImageInfo)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppDismMountedImageInfo) ) 

#define IDismMountedImageInfoCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismMountedImageInfoCollection_INTERFACE_DEFINED__ */


#ifndef __IDismMountedImageInfo_INTERFACE_DEFINED__
#define __IDismMountedImageInfo_INTERFACE_DEFINED__

/* interface IDismMountedImageInfo */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismMountedImageInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EE9B6624-8ACC-440C-9564-F5D7568D6E01")
    IDismMountedImageInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MountDir( 
            /* [retval][out] */ BSTR *pbszMountDir) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ImagePath( 
            /* [retval][out] */ BSTR *pbszImagePath) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Index( 
            /* [retval][out] */ unsigned long *pulIndex) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReadWritable( 
            /* [retval][out] */ VARIANT_BOOL *pvbReadWritable) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Status( 
            /* [retval][out] */ unsigned long *pulStatus) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismMountedImageInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismMountedImageInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismMountedImageInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismMountedImageInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismMountedImageInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismMountedImageInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismMountedImageInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismMountedImageInfo * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MountDir )( 
            IDismMountedImageInfo * This,
            /* [retval][out] */ BSTR *pbszMountDir);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ImagePath )( 
            IDismMountedImageInfo * This,
            /* [retval][out] */ BSTR *pbszImagePath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            IDismMountedImageInfo * This,
            /* [retval][out] */ unsigned long *pulIndex);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReadWritable )( 
            IDismMountedImageInfo * This,
            /* [retval][out] */ VARIANT_BOOL *pvbReadWritable);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Status )( 
            IDismMountedImageInfo * This,
            /* [retval][out] */ unsigned long *pulStatus);
        
        END_INTERFACE
    } IDismMountedImageInfoVtbl;

    interface IDismMountedImageInfo
    {
        CONST_VTBL struct IDismMountedImageInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismMountedImageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismMountedImageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismMountedImageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismMountedImageInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismMountedImageInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismMountedImageInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismMountedImageInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismMountedImageInfo_get_MountDir(This,pbszMountDir)	\
    ( (This)->lpVtbl -> get_MountDir(This,pbszMountDir) ) 

#define IDismMountedImageInfo_get_ImagePath(This,pbszImagePath)	\
    ( (This)->lpVtbl -> get_ImagePath(This,pbszImagePath) ) 

#define IDismMountedImageInfo_get_Index(This,pulIndex)	\
    ( (This)->lpVtbl -> get_Index(This,pulIndex) ) 

#define IDismMountedImageInfo_get_ReadWritable(This,pvbReadWritable)	\
    ( (This)->lpVtbl -> get_ReadWritable(This,pvbReadWritable) ) 

#define IDismMountedImageInfo_get_Status(This,pulStatus)	\
    ( (This)->lpVtbl -> get_Status(This,pulStatus) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismMountedImageInfo_INTERFACE_DEFINED__ */


#ifndef __IDismImageSessionPrivate_INTERFACE_DEFINED__
#define __IDismImageSessionPrivate_INTERFACE_DEFINED__

/* interface IDismImageSessionPrivate */
/* [object][nonextensible][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismImageSessionPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FF0E7A8B-7B7C-411B-968B-11AA898BB03A")
    IDismImageSessionPrivate : public IDispatch
    {
    public:
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_HostManager( 
            /* [in] */ IUnknown *rhs) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_ImageState( 
            /* [in] */ DISM_SESSION_STATE rhs) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_DismImage( 
            /* [in] */ IDismImage *rhs) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_SessionType( 
            /* [in] */ DISM_SESSION_TYPE rhs) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall ReleaseHostManager( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismImageSessionPrivateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismImageSessionPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismImageSessionPrivate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismImageSessionPrivate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismImageSessionPrivate * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismImageSessionPrivate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismImageSessionPrivate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismImageSessionPrivate * This,
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
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_HostManager )( 
            IDismImageSessionPrivate * This,
            /* [in] */ IUnknown *rhs);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_ImageState )( 
            IDismImageSessionPrivate * This,
            /* [in] */ DISM_SESSION_STATE rhs);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_DismImage )( 
            IDismImageSessionPrivate * This,
            /* [in] */ IDismImage *rhs);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_SessionType )( 
            IDismImageSessionPrivate * This,
            /* [in] */ DISM_SESSION_TYPE rhs);
        
        /* [helpstring] */ HRESULT ( __stdcall *ReleaseHostManager )( 
            IDismImageSessionPrivate * This);
        
        END_INTERFACE
    } IDismImageSessionPrivateVtbl;

    interface IDismImageSessionPrivate
    {
        CONST_VTBL struct IDismImageSessionPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismImageSessionPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismImageSessionPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismImageSessionPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismImageSessionPrivate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismImageSessionPrivate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismImageSessionPrivate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismImageSessionPrivate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismImageSessionPrivate_put_HostManager(This,rhs)	\
    ( (This)->lpVtbl -> put_HostManager(This,rhs) ) 

#define IDismImageSessionPrivate_put_ImageState(This,rhs)	\
    ( (This)->lpVtbl -> put_ImageState(This,rhs) ) 

#define IDismImageSessionPrivate_put_DismImage(This,rhs)	\
    ( (This)->lpVtbl -> put_DismImage(This,rhs) ) 

#define IDismImageSessionPrivate_put_SessionType(This,rhs)	\
    ( (This)->lpVtbl -> put_SessionType(This,rhs) ) 

#define IDismImageSessionPrivate_ReleaseHostManager(This)	\
    ( (This)->lpVtbl -> ReleaseHostManager(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismImageSessionPrivate_INTERFACE_DEFINED__ */


#ifndef __IDismImageSessionPrivate2_INTERFACE_DEFINED__
#define __IDismImageSessionPrivate2_INTERFACE_DEFINED__

/* interface IDismImageSessionPrivate2 */
/* [object][nonextensible][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismImageSessionPrivate2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("13A81F76-50E2-11E0-B744-00123F3FC6DD")
    IDismImageSessionPrivate2 : public IDismImageSessionPrivate
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_CanUnloadClient( 
            /* [retval][out] */ VARIANT_BOOL *pvbCanUnloadClient) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_CanUnloadClient( 
            /* [in] */ VARIANT_BOOL pvbCanUnloadClient) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismImageSessionPrivate2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismImageSessionPrivate2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismImageSessionPrivate2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismImageSessionPrivate2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismImageSessionPrivate2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismImageSessionPrivate2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismImageSessionPrivate2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismImageSessionPrivate2 * This,
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
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_HostManager )( 
            IDismImageSessionPrivate2 * This,
            /* [in] */ IUnknown *rhs);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_ImageState )( 
            IDismImageSessionPrivate2 * This,
            /* [in] */ DISM_SESSION_STATE rhs);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_DismImage )( 
            IDismImageSessionPrivate2 * This,
            /* [in] */ IDismImage *rhs);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_SessionType )( 
            IDismImageSessionPrivate2 * This,
            /* [in] */ DISM_SESSION_TYPE rhs);
        
        /* [helpstring] */ HRESULT ( __stdcall *ReleaseHostManager )( 
            IDismImageSessionPrivate2 * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_CanUnloadClient )( 
            IDismImageSessionPrivate2 * This,
            /* [retval][out] */ VARIANT_BOOL *pvbCanUnloadClient);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_CanUnloadClient )( 
            IDismImageSessionPrivate2 * This,
            /* [in] */ VARIANT_BOOL pvbCanUnloadClient);
        
        END_INTERFACE
    } IDismImageSessionPrivate2Vtbl;

    interface IDismImageSessionPrivate2
    {
        CONST_VTBL struct IDismImageSessionPrivate2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismImageSessionPrivate2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismImageSessionPrivate2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismImageSessionPrivate2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismImageSessionPrivate2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismImageSessionPrivate2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismImageSessionPrivate2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismImageSessionPrivate2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismImageSessionPrivate2_put_HostManager(This,rhs)	\
    ( (This)->lpVtbl -> put_HostManager(This,rhs) ) 

#define IDismImageSessionPrivate2_put_ImageState(This,rhs)	\
    ( (This)->lpVtbl -> put_ImageState(This,rhs) ) 

#define IDismImageSessionPrivate2_put_DismImage(This,rhs)	\
    ( (This)->lpVtbl -> put_DismImage(This,rhs) ) 

#define IDismImageSessionPrivate2_put_SessionType(This,rhs)	\
    ( (This)->lpVtbl -> put_SessionType(This,rhs) ) 

#define IDismImageSessionPrivate2_ReleaseHostManager(This)	\
    ( (This)->lpVtbl -> ReleaseHostManager(This) ) 


#define IDismImageSessionPrivate2_get_CanUnloadClient(This,pvbCanUnloadClient)	\
    ( (This)->lpVtbl -> get_CanUnloadClient(This,pvbCanUnloadClient) ) 

#define IDismImageSessionPrivate2_put_CanUnloadClient(This,pvbCanUnloadClient)	\
    ( (This)->lpVtbl -> put_CanUnloadClient(This,pvbCanUnloadClient) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismImageSessionPrivate2_INTERFACE_DEFINED__ */


#ifndef __IDismConfigObject_INTERFACE_DEFINED__
#define __IDismConfigObject_INTERFACE_DEFINED__

/* interface IDismConfigObject */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismConfigObject;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("705A28E2-A26F-4A43-8D82-A56941B5C250")
    IDismConfigObject : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_MaxProgress( 
            /* [retval][out] */ int *MaxTick) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_MaxProgress( 
            /* [in] */ int MaxTick) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScratchDir( 
            /* [retval][out] */ BSTR *DirectoryPath) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScratchDir( 
            /* [in] */ BSTR DirectoryPath) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_logFile( 
            /* [retval][out] */ BSTR *logFile) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_logFile( 
            /* [in] */ BSTR logFile) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_logLevel( 
            /* [retval][out] */ DISM_LOGLEVEL_TYPE *logLevel) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_logLevel( 
            /* [in] */ DISM_LOGLEVEL_TYPE logLevel) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismConfigObjectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismConfigObject * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismConfigObject * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismConfigObject * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismConfigObject * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismConfigObject * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismConfigObject * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismConfigObject * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_MaxProgress )( 
            IDismConfigObject * This,
            /* [retval][out] */ int *MaxTick);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_MaxProgress )( 
            IDismConfigObject * This,
            /* [in] */ int MaxTick);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScratchDir )( 
            IDismConfigObject * This,
            /* [retval][out] */ BSTR *DirectoryPath);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScratchDir )( 
            IDismConfigObject * This,
            /* [in] */ BSTR DirectoryPath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_logFile )( 
            IDismConfigObject * This,
            /* [retval][out] */ BSTR *logFile);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_logFile )( 
            IDismConfigObject * This,
            /* [in] */ BSTR logFile);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_logLevel )( 
            IDismConfigObject * This,
            /* [retval][out] */ DISM_LOGLEVEL_TYPE *logLevel);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_logLevel )( 
            IDismConfigObject * This,
            /* [in] */ DISM_LOGLEVEL_TYPE logLevel);
        
        END_INTERFACE
    } IDismConfigObjectVtbl;

    interface IDismConfigObject
    {
        CONST_VTBL struct IDismConfigObjectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismConfigObject_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismConfigObject_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismConfigObject_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismConfigObject_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismConfigObject_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismConfigObject_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismConfigObject_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismConfigObject_get_MaxProgress(This,MaxTick)	\
    ( (This)->lpVtbl -> get_MaxProgress(This,MaxTick) ) 

#define IDismConfigObject_put_MaxProgress(This,MaxTick)	\
    ( (This)->lpVtbl -> put_MaxProgress(This,MaxTick) ) 

#define IDismConfigObject_get_ScratchDir(This,DirectoryPath)	\
    ( (This)->lpVtbl -> get_ScratchDir(This,DirectoryPath) ) 

#define IDismConfigObject_put_ScratchDir(This,DirectoryPath)	\
    ( (This)->lpVtbl -> put_ScratchDir(This,DirectoryPath) ) 

#define IDismConfigObject_get_logFile(This,logFile)	\
    ( (This)->lpVtbl -> get_logFile(This,logFile) ) 

#define IDismConfigObject_put_logFile(This,logFile)	\
    ( (This)->lpVtbl -> put_logFile(This,logFile) ) 

#define IDismConfigObject_get_logLevel(This,logLevel)	\
    ( (This)->lpVtbl -> get_logLevel(This,logLevel) ) 

#define IDismConfigObject_put_logLevel(This,logLevel)	\
    ( (This)->lpVtbl -> put_logLevel(This,logLevel) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismConfigObject_INTERFACE_DEFINED__ */


#ifndef __IDismConfiguration_INTERFACE_DEFINED__
#define __IDismConfiguration_INTERFACE_DEFINED__

/* interface IDismConfiguration */
/* [object][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismConfiguration;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F92CF95-462B-4BDA-A1D4-B6CB74CEFB5C")
    IDismConfiguration : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_MaxProgress( 
            /* [retval][out] */ int *MaxTick) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_MaxProgress( 
            /* [in] */ int MaxTick) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_ScratchDir( 
            /* [retval][out] */ BSTR *DirectoryPath) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_ScratchDir( 
            /* [in] */ BSTR DirectoryPath) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_logFile( 
            /* [retval][out] */ BSTR *logFile) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_logFile( 
            /* [in] */ BSTR logFile) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_logLevel( 
            /* [retval][out] */ DISM_LOGLEVEL_TYPE *logLevel) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_logLevel( 
            /* [in] */ DISM_LOGLEVEL_TYPE logLevel) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_ImageFlags( 
            /* [retval][out] */ DISM_IMAGE_FLAGS *ImageFlags) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_ImageFlags( 
            /* [in] */ DISM_IMAGE_FLAGS ImageFlags) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_Display( 
            /* [retval][out] */ DISM_DISPLAY_TYPE *Display) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_Display( 
            /* [in] */ DISM_DISPLAY_TYPE Display) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_Format( 
            /* [retval][out] */ DISM_FORMAT_TYPE *Format) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_Format( 
            /* [in] */ DISM_FORMAT_TYPE Format) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismConfigurationVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismConfiguration * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismConfiguration * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismConfiguration * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_MaxProgress )( 
            IDismConfiguration * This,
            /* [retval][out] */ int *MaxTick);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_MaxProgress )( 
            IDismConfiguration * This,
            /* [in] */ int MaxTick);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_ScratchDir )( 
            IDismConfiguration * This,
            /* [retval][out] */ BSTR *DirectoryPath);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_ScratchDir )( 
            IDismConfiguration * This,
            /* [in] */ BSTR DirectoryPath);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_logFile )( 
            IDismConfiguration * This,
            /* [retval][out] */ BSTR *logFile);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_logFile )( 
            IDismConfiguration * This,
            /* [in] */ BSTR logFile);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_logLevel )( 
            IDismConfiguration * This,
            /* [retval][out] */ DISM_LOGLEVEL_TYPE *logLevel);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_logLevel )( 
            IDismConfiguration * This,
            /* [in] */ DISM_LOGLEVEL_TYPE logLevel);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_ImageFlags )( 
            IDismConfiguration * This,
            /* [retval][out] */ DISM_IMAGE_FLAGS *ImageFlags);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_ImageFlags )( 
            IDismConfiguration * This,
            /* [in] */ DISM_IMAGE_FLAGS ImageFlags);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Display )( 
            IDismConfiguration * This,
            /* [retval][out] */ DISM_DISPLAY_TYPE *Display);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_Display )( 
            IDismConfiguration * This,
            /* [in] */ DISM_DISPLAY_TYPE Display);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Format )( 
            IDismConfiguration * This,
            /* [retval][out] */ DISM_FORMAT_TYPE *Format);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_Format )( 
            IDismConfiguration * This,
            /* [in] */ DISM_FORMAT_TYPE Format);
        
        END_INTERFACE
    } IDismConfigurationVtbl;

    interface IDismConfiguration
    {
        CONST_VTBL struct IDismConfigurationVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismConfiguration_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismConfiguration_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismConfiguration_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismConfiguration_get_MaxProgress(This,MaxTick)	\
    ( (This)->lpVtbl -> get_MaxProgress(This,MaxTick) ) 

#define IDismConfiguration_put_MaxProgress(This,MaxTick)	\
    ( (This)->lpVtbl -> put_MaxProgress(This,MaxTick) ) 

#define IDismConfiguration_get_ScratchDir(This,DirectoryPath)	\
    ( (This)->lpVtbl -> get_ScratchDir(This,DirectoryPath) ) 

#define IDismConfiguration_put_ScratchDir(This,DirectoryPath)	\
    ( (This)->lpVtbl -> put_ScratchDir(This,DirectoryPath) ) 

#define IDismConfiguration_get_logFile(This,logFile)	\
    ( (This)->lpVtbl -> get_logFile(This,logFile) ) 

#define IDismConfiguration_put_logFile(This,logFile)	\
    ( (This)->lpVtbl -> put_logFile(This,logFile) ) 

#define IDismConfiguration_get_logLevel(This,logLevel)	\
    ( (This)->lpVtbl -> get_logLevel(This,logLevel) ) 

#define IDismConfiguration_put_logLevel(This,logLevel)	\
    ( (This)->lpVtbl -> put_logLevel(This,logLevel) ) 

#define IDismConfiguration_get_ImageFlags(This,ImageFlags)	\
    ( (This)->lpVtbl -> get_ImageFlags(This,ImageFlags) ) 

#define IDismConfiguration_put_ImageFlags(This,ImageFlags)	\
    ( (This)->lpVtbl -> put_ImageFlags(This,ImageFlags) ) 

#define IDismConfiguration_get_Display(This,Display)	\
    ( (This)->lpVtbl -> get_Display(This,Display) ) 

#define IDismConfiguration_put_Display(This,Display)	\
    ( (This)->lpVtbl -> put_Display(This,Display) ) 

#define IDismConfiguration_get_Format(This,Format)	\
    ( (This)->lpVtbl -> get_Format(This,Format) ) 

#define IDismConfiguration_put_Format(This,Format)	\
    ( (This)->lpVtbl -> put_Format(This,Format) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismConfiguration_INTERFACE_DEFINED__ */


#ifndef __IDismConfiguration2_INTERFACE_DEFINED__
#define __IDismConfiguration2_INTERFACE_DEFINED__

/* interface IDismConfiguration2 */
/* [object][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismConfiguration2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("59891552-9AC8-4C89-B2A7-C64B3962354E")
    IDismConfiguration2 : public IDismConfiguration
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_ExternalStack( 
            /* [retval][out] */ BSTR *StackPath) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT __stdcall put_ExternalStack( 
            /* [in] */ BSTR StackPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismConfiguration2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismConfiguration2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismConfiguration2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismConfiguration2 * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_MaxProgress )( 
            IDismConfiguration2 * This,
            /* [retval][out] */ int *MaxTick);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_MaxProgress )( 
            IDismConfiguration2 * This,
            /* [in] */ int MaxTick);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_ScratchDir )( 
            IDismConfiguration2 * This,
            /* [retval][out] */ BSTR *DirectoryPath);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_ScratchDir )( 
            IDismConfiguration2 * This,
            /* [in] */ BSTR DirectoryPath);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_logFile )( 
            IDismConfiguration2 * This,
            /* [retval][out] */ BSTR *logFile);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_logFile )( 
            IDismConfiguration2 * This,
            /* [in] */ BSTR logFile);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_logLevel )( 
            IDismConfiguration2 * This,
            /* [retval][out] */ DISM_LOGLEVEL_TYPE *logLevel);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_logLevel )( 
            IDismConfiguration2 * This,
            /* [in] */ DISM_LOGLEVEL_TYPE logLevel);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_ImageFlags )( 
            IDismConfiguration2 * This,
            /* [retval][out] */ DISM_IMAGE_FLAGS *ImageFlags);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_ImageFlags )( 
            IDismConfiguration2 * This,
            /* [in] */ DISM_IMAGE_FLAGS ImageFlags);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Display )( 
            IDismConfiguration2 * This,
            /* [retval][out] */ DISM_DISPLAY_TYPE *Display);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_Display )( 
            IDismConfiguration2 * This,
            /* [in] */ DISM_DISPLAY_TYPE Display);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Format )( 
            IDismConfiguration2 * This,
            /* [retval][out] */ DISM_FORMAT_TYPE *Format);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_Format )( 
            IDismConfiguration2 * This,
            /* [in] */ DISM_FORMAT_TYPE Format);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_ExternalStack )( 
            IDismConfiguration2 * This,
            /* [retval][out] */ BSTR *StackPath);
        
        /* [helpstring][propput] */ HRESULT ( __stdcall *put_ExternalStack )( 
            IDismConfiguration2 * This,
            /* [in] */ BSTR StackPath);
        
        END_INTERFACE
    } IDismConfiguration2Vtbl;

    interface IDismConfiguration2
    {
        CONST_VTBL struct IDismConfiguration2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismConfiguration2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismConfiguration2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismConfiguration2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismConfiguration2_get_MaxProgress(This,MaxTick)	\
    ( (This)->lpVtbl -> get_MaxProgress(This,MaxTick) ) 

#define IDismConfiguration2_put_MaxProgress(This,MaxTick)	\
    ( (This)->lpVtbl -> put_MaxProgress(This,MaxTick) ) 

#define IDismConfiguration2_get_ScratchDir(This,DirectoryPath)	\
    ( (This)->lpVtbl -> get_ScratchDir(This,DirectoryPath) ) 

#define IDismConfiguration2_put_ScratchDir(This,DirectoryPath)	\
    ( (This)->lpVtbl -> put_ScratchDir(This,DirectoryPath) ) 

#define IDismConfiguration2_get_logFile(This,logFile)	\
    ( (This)->lpVtbl -> get_logFile(This,logFile) ) 

#define IDismConfiguration2_put_logFile(This,logFile)	\
    ( (This)->lpVtbl -> put_logFile(This,logFile) ) 

#define IDismConfiguration2_get_logLevel(This,logLevel)	\
    ( (This)->lpVtbl -> get_logLevel(This,logLevel) ) 

#define IDismConfiguration2_put_logLevel(This,logLevel)	\
    ( (This)->lpVtbl -> put_logLevel(This,logLevel) ) 

#define IDismConfiguration2_get_ImageFlags(This,ImageFlags)	\
    ( (This)->lpVtbl -> get_ImageFlags(This,ImageFlags) ) 

#define IDismConfiguration2_put_ImageFlags(This,ImageFlags)	\
    ( (This)->lpVtbl -> put_ImageFlags(This,ImageFlags) ) 

#define IDismConfiguration2_get_Display(This,Display)	\
    ( (This)->lpVtbl -> get_Display(This,Display) ) 

#define IDismConfiguration2_put_Display(This,Display)	\
    ( (This)->lpVtbl -> put_Display(This,Display) ) 

#define IDismConfiguration2_get_Format(This,Format)	\
    ( (This)->lpVtbl -> get_Format(This,Format) ) 

#define IDismConfiguration2_put_Format(This,Format)	\
    ( (This)->lpVtbl -> put_Format(This,Format) ) 


#define IDismConfiguration2_get_ExternalStack(This,StackPath)	\
    ( (This)->lpVtbl -> get_ExternalStack(This,StackPath) ) 

#define IDismConfiguration2_put_ExternalStack(This,StackPath)	\
    ( (This)->lpVtbl -> put_ExternalStack(This,StackPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismConfiguration2_INTERFACE_DEFINED__ */


#ifndef __IDismProperty_INTERFACE_DEFINED__
#define __IDismProperty_INTERFACE_DEFINED__

/* interface IDismProperty */
/* [object][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProperty;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("20599DF3-1A1B-4EAA-A53F-77F39438B542")
    IDismProperty : public IUnknown
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_Name( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_Path( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][propget] */ HRESULT __stdcall get_Value( 
            /* [retval][out] */ BSTR *Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPropertyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProperty * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProperty * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProperty * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Name )( 
            IDismProperty * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Path )( 
            IDismProperty * This,
            /* [retval][out] */ BSTR *Path);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Value )( 
            IDismProperty * This,
            /* [retval][out] */ BSTR *Value);
        
        END_INTERFACE
    } IDismPropertyVtbl;

    interface IDismProperty
    {
        CONST_VTBL struct IDismPropertyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProperty_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProperty_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProperty_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProperty_get_Name(This,Name)	\
    ( (This)->lpVtbl -> get_Name(This,Name) ) 

#define IDismProperty_get_Path(This,Path)	\
    ( (This)->lpVtbl -> get_Path(This,Path) ) 

#define IDismProperty_get_Value(This,Value)	\
    ( (This)->lpVtbl -> get_Value(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProperty_INTERFACE_DEFINED__ */


#ifndef __IDismPropertyCollection_INTERFACE_DEFINED__
#define __IDismPropertyCollection_INTERFACE_DEFINED__

/* interface IDismPropertyCollection */
/* [object][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPropertyCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("88D4518A-41A8-49B0-A087-A3D6FC1D298E")
    IDismPropertyCollection : public IDispatch
    {
    public:
        virtual /* [propget] */ HRESULT __stdcall get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismProperty **ppProperty) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPropertyCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPropertyCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPropertyCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPropertyCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPropertyCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPropertyCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPropertyCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPropertyCollection * This,
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
        
        /* [propget] */ HRESULT ( __stdcall *get_Count )( 
            IDismPropertyCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget] */ HRESULT ( __stdcall *get_Item )( 
            IDismPropertyCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismProperty **ppProperty);
        
        /* [propget] */ HRESULT ( __stdcall *get__NewEnum )( 
            IDismPropertyCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismPropertyCollectionVtbl;

    interface IDismPropertyCollection
    {
        CONST_VTBL struct IDismPropertyCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPropertyCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPropertyCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPropertyCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPropertyCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPropertyCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPropertyCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPropertyCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPropertyCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismPropertyCollection_get_Item(This,n,ppProperty)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppProperty) ) 

#define IDismPropertyCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPropertyCollection_INTERFACE_DEFINED__ */


#ifndef __IDismStringCollection_INTERFACE_DEFINED__
#define __IDismStringCollection_INTERFACE_DEFINED__

/* interface IDismStringCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismStringCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7E6EB080-3384-4155-A4A7-5E43BBAFB2F3")
    IDismStringCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR *pValue) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismStringCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismStringCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismStringCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismStringCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismStringCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismStringCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismStringCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismStringCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismStringCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismStringCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR *pValue);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismStringCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismStringCollectionVtbl;

    interface IDismStringCollection
    {
        CONST_VTBL struct IDismStringCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismStringCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismStringCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismStringCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismStringCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismStringCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismStringCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismStringCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismStringCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismStringCollection_get_Item(This,n,pValue)	\
    ( (This)->lpVtbl -> get_Item(This,n,pValue) ) 

#define IDismStringCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismStringCollection_INTERFACE_DEFINED__ */


#ifndef __IDismProviderPrivate_INTERFACE_DEFINED__
#define __IDismProviderPrivate_INTERFACE_DEFINED__

/* interface IDismProviderPrivate */
/* [object][nonextensible][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProviderPrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2114DAEC-42FD-4847-8A04-5F2DDE3276A3")
    IDismProviderPrivate : public IDismObject
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProviderPrivateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProviderPrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProviderPrivate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProviderPrivate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProviderPrivate * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProviderPrivate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProviderPrivate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProviderPrivate * This,
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
        
        /* [helpstring] */ HRESULT ( __stdcall *OnConnect )( 
            IDismProviderPrivate * This,
            /* [in] */ IUnknown *Parent,
            /* [in] */ IDismLogger *DismLogger);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnDisconnect )( 
            IDismProviderPrivate * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Parent )( 
            IDismProviderPrivate * This,
            /* [retval][out] */ IUnknown **Parent);
        
        END_INTERFACE
    } IDismProviderPrivateVtbl;

    interface IDismProviderPrivate
    {
        CONST_VTBL struct IDismProviderPrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProviderPrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProviderPrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProviderPrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProviderPrivate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProviderPrivate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProviderPrivate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProviderPrivate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProviderPrivate_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismProviderPrivate_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismProviderPrivate_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProviderPrivate_INTERFACE_DEFINED__ */


#ifndef __IDismServicingProvider_INTERFACE_DEFINED__
#define __IDismServicingProvider_INTERFACE_DEFINED__

/* interface IDismServicingProvider */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismServicingProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C8292388-8D1D-4C34-9A41-8763FCD304F7")
    IDismServicingProvider : public IDismObject
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ IDismOSServiceManager *OSServiceManager,
            /* [in] */ BSTR ScratchDirectory) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Finalize( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ValidateServiceability( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismServicingProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismServicingProvider * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismServicingProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismServicingProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismServicingProvider * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismServicingProvider * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismServicingProvider * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismServicingProvider * This,
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
        
        /* [helpstring] */ HRESULT ( __stdcall *OnConnect )( 
            IDismServicingProvider * This,
            /* [in] */ IUnknown *Parent,
            /* [in] */ IDismLogger *DismLogger);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnDisconnect )( 
            IDismServicingProvider * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Parent )( 
            IDismServicingProvider * This,
            /* [retval][out] */ IUnknown **Parent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IDismServicingProvider * This,
            /* [in] */ IDismOSServiceManager *OSServiceManager,
            /* [in] */ BSTR ScratchDirectory);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Finalize )( 
            IDismServicingProvider * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ValidateServiceability )( 
            IDismServicingProvider * This);
        
        END_INTERFACE
    } IDismServicingProviderVtbl;

    interface IDismServicingProvider
    {
        CONST_VTBL struct IDismServicingProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismServicingProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismServicingProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismServicingProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismServicingProvider_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismServicingProvider_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismServicingProvider_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismServicingProvider_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismServicingProvider_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismServicingProvider_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismServicingProvider_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 


#define IDismServicingProvider_Initialize(This,OSServiceManager,ScratchDirectory)	\
    ( (This)->lpVtbl -> Initialize(This,OSServiceManager,ScratchDirectory) ) 

#define IDismServicingProvider_Finalize(This)	\
    ( (This)->lpVtbl -> Finalize(This) ) 

#define IDismServicingProvider_ValidateServiceability(This)	\
    ( (This)->lpVtbl -> ValidateServiceability(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismServicingProvider_INTERFACE_DEFINED__ */


#ifndef __IDismOSServiceManager_INTERFACE_DEFINED__
#define __IDismOSServiceManager_INTERFACE_DEFINED__

/* interface IDismOSServiceManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismOSServiceManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0B49A069-56A5-48EB-9D9F-E9E42478149A")
    IDismOSServiceManager : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ DISM_OS_STATE *State) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_OSVersion( 
            /* [retval][out] */ BSTR *Version) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Architecture( 
            /* [retval][out] */ long *Architecture) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_DismImage( 
            /* [retval][out] */ IDismImage **DismImage) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ServicingStackDirectory( 
            /* [retval][out] */ BSTR *ServicingStackDirectory) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_WindowsDirectory( 
            /* [retval][out] */ BSTR *WindowsDirectory) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_ProgramFilesDirectory( 
            /* [retval][out] */ BSTR *ProgramFilesDirectory) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_BootDrive( 
            /* [retval][out] */ BSTR *BootDrive) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_SystemPath( 
            /* [retval][out] */ BSTR *SystemPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetWindowsDirectory( 
            /* [in] */ BSTR WindowsDirectory) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetSystemPath( 
            /* [in] */ BSTR SystemPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE MountRegistry( 
            /* [retval][out] */ IDismRegistry **DismRegistry) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismOSServiceManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismOSServiceManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismOSServiceManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismOSServiceManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismOSServiceManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismOSServiceManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismOSServiceManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismOSServiceManager * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ DISM_OS_STATE *State);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_OSVersion )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ BSTR *Version);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Architecture )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ long *Architecture);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DismImage )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ IDismImage **DismImage);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServicingStackDirectory )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ BSTR *ServicingStackDirectory);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WindowsDirectory )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ BSTR *WindowsDirectory);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesDirectory )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ BSTR *ProgramFilesDirectory);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BootDrive )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ BSTR *BootDrive);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SystemPath )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ BSTR *SystemPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetWindowsDirectory )( 
            IDismOSServiceManager * This,
            /* [in] */ BSTR WindowsDirectory);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSystemPath )( 
            IDismOSServiceManager * This,
            /* [in] */ BSTR SystemPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *MountRegistry )( 
            IDismOSServiceManager * This,
            /* [retval][out] */ IDismRegistry **DismRegistry);
        
        END_INTERFACE
    } IDismOSServiceManagerVtbl;

    interface IDismOSServiceManager
    {
        CONST_VTBL struct IDismOSServiceManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismOSServiceManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismOSServiceManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismOSServiceManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismOSServiceManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismOSServiceManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismOSServiceManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismOSServiceManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismOSServiceManager_get_State(This,State)	\
    ( (This)->lpVtbl -> get_State(This,State) ) 

#define IDismOSServiceManager_get_OSVersion(This,Version)	\
    ( (This)->lpVtbl -> get_OSVersion(This,Version) ) 

#define IDismOSServiceManager_get_Architecture(This,Architecture)	\
    ( (This)->lpVtbl -> get_Architecture(This,Architecture) ) 

#define IDismOSServiceManager_get_DismImage(This,DismImage)	\
    ( (This)->lpVtbl -> get_DismImage(This,DismImage) ) 

#define IDismOSServiceManager_get_ServicingStackDirectory(This,ServicingStackDirectory)	\
    ( (This)->lpVtbl -> get_ServicingStackDirectory(This,ServicingStackDirectory) ) 

#define IDismOSServiceManager_get_WindowsDirectory(This,WindowsDirectory)	\
    ( (This)->lpVtbl -> get_WindowsDirectory(This,WindowsDirectory) ) 

#define IDismOSServiceManager_get_ProgramFilesDirectory(This,ProgramFilesDirectory)	\
    ( (This)->lpVtbl -> get_ProgramFilesDirectory(This,ProgramFilesDirectory) ) 

#define IDismOSServiceManager_get_BootDrive(This,BootDrive)	\
    ( (This)->lpVtbl -> get_BootDrive(This,BootDrive) ) 

#define IDismOSServiceManager_get_SystemPath(This,SystemPath)	\
    ( (This)->lpVtbl -> get_SystemPath(This,SystemPath) ) 

#define IDismOSServiceManager_SetWindowsDirectory(This,WindowsDirectory)	\
    ( (This)->lpVtbl -> SetWindowsDirectory(This,WindowsDirectory) ) 

#define IDismOSServiceManager_SetSystemPath(This,SystemPath)	\
    ( (This)->lpVtbl -> SetSystemPath(This,SystemPath) ) 

#define IDismOSServiceManager_MountRegistry(This,DismRegistry)	\
    ( (This)->lpVtbl -> MountRegistry(This,DismRegistry) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismOSServiceManager_INTERFACE_DEFINED__ */


#ifndef __IDismRegistry_INTERFACE_DEFINED__
#define __IDismRegistry_INTERFACE_DEFINED__

/* interface IDismRegistry */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismRegistry;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E1C59A6-272F-4212-A6D3-8DC6CDDF813A")
    IDismRegistry : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetKeyPath( 
            /* [in] */ DISM_REGISTRY RegHive,
            /* [retval][out] */ BSTR *KeyPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismRegistryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismRegistry * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismRegistry * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismRegistry * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismRegistry * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismRegistry * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismRegistry * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismRegistry * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetKeyPath )( 
            IDismRegistry * This,
            /* [in] */ DISM_REGISTRY RegHive,
            /* [retval][out] */ BSTR *KeyPath);
        
        END_INTERFACE
    } IDismRegistryVtbl;

    interface IDismRegistry
    {
        CONST_VTBL struct IDismRegistryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismRegistry_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismRegistry_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismRegistry_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismRegistry_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismRegistry_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismRegistry_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismRegistry_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismRegistry_GetKeyPath(This,RegHive,KeyPath)	\
    ( (This)->lpVtbl -> GetKeyPath(This,RegHive,KeyPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismRegistry_INTERFACE_DEFINED__ */


#ifndef __IDismItemManager_INTERFACE_DEFINED__
#define __IDismItemManager_INTERFACE_DEFINED__

/* interface IDismItemManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismItemManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F316031B-3C98-4F20-B9CB-A3B8702DDDD8")
    IDismItemManager : public IDismServicingProvider
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddItem( 
            /* [in] */ BSTR ItemLocation) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItemByName( 
            /* [in] */ BSTR ItemName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveItem( 
            /* [in] */ IUnknown *Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenItem( 
            /* [in] */ BSTR ItemLocation,
            /* [retval][out] */ IUnknown **Item) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetItems( 
            /* [retval][out] */ IDismItemCollection **Item) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismItemManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismItemManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismItemManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismItemManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismItemManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismItemManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismItemManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismItemManager * This,
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
        
        /* [helpstring] */ HRESULT ( __stdcall *OnConnect )( 
            IDismItemManager * This,
            /* [in] */ IUnknown *Parent,
            /* [in] */ IDismLogger *DismLogger);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnDisconnect )( 
            IDismItemManager * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Parent )( 
            IDismItemManager * This,
            /* [retval][out] */ IUnknown **Parent);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            IDismItemManager * This,
            /* [in] */ IDismOSServiceManager *OSServiceManager,
            /* [in] */ BSTR ScratchDirectory);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Finalize )( 
            IDismItemManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ValidateServiceability )( 
            IDismItemManager * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddItem )( 
            IDismItemManager * This,
            /* [in] */ BSTR ItemLocation);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItemByName )( 
            IDismItemManager * This,
            /* [in] */ BSTR ItemName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveItem )( 
            IDismItemManager * This,
            /* [in] */ IUnknown *Item);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenItem )( 
            IDismItemManager * This,
            /* [in] */ BSTR ItemLocation,
            /* [retval][out] */ IUnknown **Item);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetItems )( 
            IDismItemManager * This,
            /* [retval][out] */ IDismItemCollection **Item);
        
        END_INTERFACE
    } IDismItemManagerVtbl;

    interface IDismItemManager
    {
        CONST_VTBL struct IDismItemManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismItemManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismItemManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismItemManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismItemManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismItemManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismItemManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismItemManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismItemManager_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismItemManager_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismItemManager_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 


#define IDismItemManager_Initialize(This,OSServiceManager,ScratchDirectory)	\
    ( (This)->lpVtbl -> Initialize(This,OSServiceManager,ScratchDirectory) ) 

#define IDismItemManager_Finalize(This)	\
    ( (This)->lpVtbl -> Finalize(This) ) 

#define IDismItemManager_ValidateServiceability(This)	\
    ( (This)->lpVtbl -> ValidateServiceability(This) ) 


#define IDismItemManager_AddItem(This,ItemLocation)	\
    ( (This)->lpVtbl -> AddItem(This,ItemLocation) ) 

#define IDismItemManager_RemoveItemByName(This,ItemName)	\
    ( (This)->lpVtbl -> RemoveItemByName(This,ItemName) ) 

#define IDismItemManager_RemoveItem(This,Item)	\
    ( (This)->lpVtbl -> RemoveItem(This,Item) ) 

#define IDismItemManager_OpenItem(This,ItemLocation,Item)	\
    ( (This)->lpVtbl -> OpenItem(This,ItemLocation,Item) ) 

#define IDismItemManager_GetItems(This,Item)	\
    ( (This)->lpVtbl -> GetItems(This,Item) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismItemManager_INTERFACE_DEFINED__ */


#ifndef __IDismItemCollection_INTERFACE_DEFINED__
#define __IDismItemCollection_INTERFACE_DEFINED__

/* interface IDismItemCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismItemCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E2C60889-8E0F-4A21-9F5B-E80F0B13C8D8")
    IDismItemCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IUnknown **Item) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **Enum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismItemCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismItemCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismItemCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismItemCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismItemCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismItemCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismItemCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismItemCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismItemCollection * This,
            /* [retval][out] */ long *Count);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismItemCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IUnknown **Item);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismItemCollection * This,
            /* [retval][out] */ IUnknown **Enum);
        
        END_INTERFACE
    } IDismItemCollectionVtbl;

    interface IDismItemCollection
    {
        CONST_VTBL struct IDismItemCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismItemCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismItemCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismItemCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismItemCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismItemCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismItemCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismItemCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismItemCollection_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define IDismItemCollection_get_Item(This,n,Item)	\
    ( (This)->lpVtbl -> get_Item(This,n,Item) ) 

#define IDismItemCollection_get__NewEnum(This,Enum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,Enum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismItemCollection_INTERFACE_DEFINED__ */


#ifndef __IDismSupportUnattend_INTERFACE_DEFINED__
#define __IDismSupportUnattend_INTERFACE_DEFINED__

/* interface IDismSupportUnattend */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismSupportUnattend;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DADAD7BB-2B1D-4EDB-9014-B1912E1A2E3D")
    IDismSupportUnattend : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Apply( 
            /* [in] */ BSTR UnattendPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismSupportUnattendVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismSupportUnattend * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismSupportUnattend * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismSupportUnattend * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismSupportUnattend * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismSupportUnattend * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismSupportUnattend * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismSupportUnattend * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Apply )( 
            IDismSupportUnattend * This,
            /* [in] */ BSTR UnattendPath);
        
        END_INTERFACE
    } IDismSupportUnattendVtbl;

    interface IDismSupportUnattend
    {
        CONST_VTBL struct IDismSupportUnattendVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismSupportUnattend_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismSupportUnattend_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismSupportUnattend_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismSupportUnattend_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismSupportUnattend_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismSupportUnattend_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismSupportUnattend_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismSupportUnattend_Apply(This,UnattendPath)	\
    ( (This)->lpVtbl -> Apply(This,UnattendPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismSupportUnattend_INTERFACE_DEFINED__ */


#ifndef __IDismSupportCommands_INTERFACE_DEFINED__
#define __IDismSupportCommands_INTERFACE_DEFINED__

/* interface IDismSupportCommands */
/* [object][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismSupportCommands;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7234EC82-C68B-4C4E-BA1D-D333F5B87B37")
    IDismSupportCommands : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall ExecuteCmdLine( 
            /* [in] */ IDismTokenCollection *Tokens) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetCommandCollection( 
            /* [retval][out] */ IDismCommandCollection **ppCommandCollection) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetHelpItemCollection( 
            /* [retval][out] */ IDismHelpItemCollection **ppHelpItemCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismSupportCommandsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismSupportCommands * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismSupportCommands * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismSupportCommands * This);
        
        /* [helpstring] */ HRESULT ( __stdcall *ExecuteCmdLine )( 
            IDismSupportCommands * This,
            /* [in] */ IDismTokenCollection *Tokens);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetCommandCollection )( 
            IDismSupportCommands * This,
            /* [retval][out] */ IDismCommandCollection **ppCommandCollection);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetHelpItemCollection )( 
            IDismSupportCommands * This,
            /* [retval][out] */ IDismHelpItemCollection **ppHelpItemCollection);
        
        END_INTERFACE
    } IDismSupportCommandsVtbl;

    interface IDismSupportCommands
    {
        CONST_VTBL struct IDismSupportCommandsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismSupportCommands_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismSupportCommands_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismSupportCommands_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismSupportCommands_ExecuteCmdLine(This,Tokens)	\
    ( (This)->lpVtbl -> ExecuteCmdLine(This,Tokens) ) 

#define IDismSupportCommands_GetCommandCollection(This,ppCommandCollection)	\
    ( (This)->lpVtbl -> GetCommandCollection(This,ppCommandCollection) ) 

#define IDismSupportCommands_GetHelpItemCollection(This,ppHelpItemCollection)	\
    ( (This)->lpVtbl -> GetHelpItemCollection(This,ppHelpItemCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismSupportCommands_INTERFACE_DEFINED__ */


#ifndef __IDismTokenCollection_INTERFACE_DEFINED__
#define __IDismTokenCollection_INTERFACE_DEFINED__

/* interface IDismTokenCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismTokenCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("407C0F0F-0540-4900-AFD2-52925246DCB3")
    IDismTokenCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismToken **ppToken) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismTokenCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismTokenCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismTokenCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismTokenCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismTokenCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismTokenCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismTokenCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismTokenCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismTokenCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismTokenCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismToken **ppToken);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismTokenCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismTokenCollectionVtbl;

    interface IDismTokenCollection
    {
        CONST_VTBL struct IDismTokenCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismTokenCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismTokenCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismTokenCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismTokenCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismTokenCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismTokenCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismTokenCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismTokenCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismTokenCollection_get_Item(This,n,ppToken)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppToken) ) 

#define IDismTokenCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismTokenCollection_INTERFACE_DEFINED__ */


#ifndef __IDismToken_INTERFACE_DEFINED__
#define __IDismToken_INTERFACE_DEFINED__

/* interface IDismToken */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismToken;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5BED6686-EEB7-40B7-97F9-FABCC5EFAEC2")
    IDismToken : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Option( 
            /* [retval][out] */ BSTR *Option) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Argument( 
            /* [retval][out] */ BSTR *Argument) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismTokenVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismToken * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismToken * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismToken * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismToken * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismToken * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismToken * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismToken * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Option )( 
            IDismToken * This,
            /* [retval][out] */ BSTR *Option);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Argument )( 
            IDismToken * This,
            /* [retval][out] */ BSTR *Argument);
        
        END_INTERFACE
    } IDismTokenVtbl;

    interface IDismToken
    {
        CONST_VTBL struct IDismTokenVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismToken_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismToken_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismToken_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismToken_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismToken_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismToken_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismToken_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismToken_get_Option(This,Option)	\
    ( (This)->lpVtbl -> get_Option(This,Option) ) 

#define IDismToken_get_Argument(This,Argument)	\
    ( (This)->lpVtbl -> get_Argument(This,Argument) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismToken_INTERFACE_DEFINED__ */


#ifndef __IDismCommandCollection_INTERFACE_DEFINED__
#define __IDismCommandCollection_INTERFACE_DEFINED__

/* interface IDismCommandCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismCommandCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8F609999-5D3C-48A8-AADF-5F96CB297279")
    IDismCommandCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismCommand **ppToken) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismCommandCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismCommandCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismCommandCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismCommandCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismCommandCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismCommandCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismCommandCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismCommandCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismCommandCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismCommandCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismCommand **ppToken);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismCommandCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismCommandCollectionVtbl;

    interface IDismCommandCollection
    {
        CONST_VTBL struct IDismCommandCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismCommandCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismCommandCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismCommandCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismCommandCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismCommandCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismCommandCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismCommandCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismCommandCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismCommandCollection_get_Item(This,n,ppToken)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppToken) ) 

#define IDismCommandCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismCommandCollection_INTERFACE_DEFINED__ */


#ifndef __IDismCommand_INTERFACE_DEFINED__
#define __IDismCommand_INTERFACE_DEFINED__

/* interface IDismCommand */
/* [object][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismCommand;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C112610A-5D2A-4D52-8082-EDCD5A5EB11D")
    IDismCommand : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT __stdcall get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_providerName( 
            /* [retval][out] */ BSTR *pbstrProviderName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismCommandVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismCommand * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismCommand * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismCommand * This);
        
        /* [propget] */ HRESULT ( __stdcall *get_Name )( 
            IDismCommand * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [propget] */ HRESULT ( __stdcall *get_providerName )( 
            IDismCommand * This,
            /* [retval][out] */ BSTR *pbstrProviderName);
        
        END_INTERFACE
    } IDismCommandVtbl;

    interface IDismCommand
    {
        CONST_VTBL struct IDismCommandVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismCommand_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define IDismCommand_get_providerName(This,pbstrProviderName)	\
    ( (This)->lpVtbl -> get_providerName(This,pbstrProviderName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismCommand_INTERFACE_DEFINED__ */


#ifndef __IDismHelpItemCollection_INTERFACE_DEFINED__
#define __IDismHelpItemCollection_INTERFACE_DEFINED__

/* interface IDismHelpItemCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismHelpItemCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("14E23A62-CD9F-4E41-ABD5-58D534BF374E")
    IDismHelpItemCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismHelpItem **ppToken) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismHelpItemCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismHelpItemCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismHelpItemCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismHelpItemCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismHelpItemCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismHelpItemCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismHelpItemCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismHelpItemCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismHelpItemCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismHelpItemCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismHelpItem **ppToken);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismHelpItemCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismHelpItemCollectionVtbl;

    interface IDismHelpItemCollection
    {
        CONST_VTBL struct IDismHelpItemCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismHelpItemCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismHelpItemCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismHelpItemCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismHelpItemCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismHelpItemCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismHelpItemCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismHelpItemCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismHelpItemCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismHelpItemCollection_get_Item(This,n,ppToken)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppToken) ) 

#define IDismHelpItemCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismHelpItemCollection_INTERFACE_DEFINED__ */


#ifndef __IDismHelpItem_INTERFACE_DEFINED__
#define __IDismHelpItem_INTERFACE_DEFINED__

/* interface IDismHelpItem */
/* [object][nonextensible][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismHelpItem;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E3F237D6-8F3C-4443-925A-ABF44807690C")
    IDismHelpItem : public IUnknown
    {
    public:
        virtual /* [propget] */ HRESULT __stdcall get_IsCategory( 
            /* [retval][out] */ VARIANT_BOOL *pvbCategory) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_TopicCategory( 
            /* [retval][out] */ BSTR *pbstrTopicCategory) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_TopicName( 
            /* [retval][out] */ BSTR *pbstrTopicName) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_TopicDescription( 
            /* [retval][out] */ BSTR *pbstrTopicDescription) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_HeaderText( 
            /* [retval][out] */ BSTR *pbstrHeaderText) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_FooterText( 
            /* [retval][out] */ BSTR *pbstrFooterText) = 0;
        
        virtual /* [propget] */ HRESULT __stdcall get_providerName( 
            /* [retval][out] */ BSTR *pbstrProviderName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismHelpItemVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismHelpItem * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismHelpItem * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismHelpItem * This);
        
        /* [propget] */ HRESULT ( __stdcall *get_IsCategory )( 
            IDismHelpItem * This,
            /* [retval][out] */ VARIANT_BOOL *pvbCategory);
        
        /* [propget] */ HRESULT ( __stdcall *get_TopicCategory )( 
            IDismHelpItem * This,
            /* [retval][out] */ BSTR *pbstrTopicCategory);
        
        /* [propget] */ HRESULT ( __stdcall *get_TopicName )( 
            IDismHelpItem * This,
            /* [retval][out] */ BSTR *pbstrTopicName);
        
        /* [propget] */ HRESULT ( __stdcall *get_TopicDescription )( 
            IDismHelpItem * This,
            /* [retval][out] */ BSTR *pbstrTopicDescription);
        
        /* [propget] */ HRESULT ( __stdcall *get_HeaderText )( 
            IDismHelpItem * This,
            /* [retval][out] */ BSTR *pbstrHeaderText);
        
        /* [propget] */ HRESULT ( __stdcall *get_FooterText )( 
            IDismHelpItem * This,
            /* [retval][out] */ BSTR *pbstrFooterText);
        
        /* [propget] */ HRESULT ( __stdcall *get_providerName )( 
            IDismHelpItem * This,
            /* [retval][out] */ BSTR *pbstrProviderName);
        
        END_INTERFACE
    } IDismHelpItemVtbl;

    interface IDismHelpItem
    {
        CONST_VTBL struct IDismHelpItemVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismHelpItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismHelpItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismHelpItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismHelpItem_get_IsCategory(This,pvbCategory)	\
    ( (This)->lpVtbl -> get_IsCategory(This,pvbCategory) ) 

#define IDismHelpItem_get_TopicCategory(This,pbstrTopicCategory)	\
    ( (This)->lpVtbl -> get_TopicCategory(This,pbstrTopicCategory) ) 

#define IDismHelpItem_get_TopicName(This,pbstrTopicName)	\
    ( (This)->lpVtbl -> get_TopicName(This,pbstrTopicName) ) 

#define IDismHelpItem_get_TopicDescription(This,pbstrTopicDescription)	\
    ( (This)->lpVtbl -> get_TopicDescription(This,pbstrTopicDescription) ) 

#define IDismHelpItem_get_HeaderText(This,pbstrHeaderText)	\
    ( (This)->lpVtbl -> get_HeaderText(This,pbstrHeaderText) ) 

#define IDismHelpItem_get_FooterText(This,pbstrFooterText)	\
    ( (This)->lpVtbl -> get_FooterText(This,pbstrFooterText) ) 

#define IDismHelpItem_get_providerName(This,pbstrProviderName)	\
    ( (This)->lpVtbl -> get_providerName(This,pbstrProviderName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismHelpItem_INTERFACE_DEFINED__ */


#ifndef __IDismProviderStorePrivate_INTERFACE_DEFINED__
#define __IDismProviderStorePrivate_INTERFACE_DEFINED__

/* interface IDismProviderStorePrivate */
/* [object][nonextensible][hidden][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProviderStorePrivate;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FE104C14-65E6-43B3-AA56-F07B5E57D81F")
    IDismProviderStorePrivate : public IDismObject
    {
    public:
        virtual /* [helpstring] */ HRESULT __stdcall Initialize( 
            /* [in] */ IDismProviderStorePrivate *pStore) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall GetProviderLocation( 
            /* [in] */ BSTR providerName,
            /* [retval][out] */ BSTR *ProviderLocation) = 0;
        
        virtual /* [helpstring] */ HRESULT __stdcall RegisterProvider( 
            /* [in] */ IDismProvider *Provider) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProviderStorePrivateVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProviderStorePrivate * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProviderStorePrivate * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProviderStorePrivate * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProviderStorePrivate * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProviderStorePrivate * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProviderStorePrivate * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProviderStorePrivate * This,
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
        
        /* [helpstring] */ HRESULT ( __stdcall *OnConnect )( 
            IDismProviderStorePrivate * This,
            /* [in] */ IUnknown *Parent,
            /* [in] */ IDismLogger *DismLogger);
        
        /* [helpstring] */ HRESULT ( __stdcall *OnDisconnect )( 
            IDismProviderStorePrivate * This);
        
        /* [helpstring][propget] */ HRESULT ( __stdcall *get_Parent )( 
            IDismProviderStorePrivate * This,
            /* [retval][out] */ IUnknown **Parent);
        
        /* [helpstring] */ HRESULT ( __stdcall *Initialize )( 
            IDismProviderStorePrivate * This,
            /* [in] */ IDismProviderStorePrivate *pStore);
        
        /* [helpstring] */ HRESULT ( __stdcall *GetProviderLocation )( 
            IDismProviderStorePrivate * This,
            /* [in] */ BSTR providerName,
            /* [retval][out] */ BSTR *ProviderLocation);
        
        /* [helpstring] */ HRESULT ( __stdcall *RegisterProvider )( 
            IDismProviderStorePrivate * This,
            /* [in] */ IDismProvider *Provider);
        
        END_INTERFACE
    } IDismProviderStorePrivateVtbl;

    interface IDismProviderStorePrivate
    {
        CONST_VTBL struct IDismProviderStorePrivateVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProviderStorePrivate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProviderStorePrivate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProviderStorePrivate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProviderStorePrivate_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProviderStorePrivate_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProviderStorePrivate_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProviderStorePrivate_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProviderStorePrivate_OnConnect(This,Parent,DismLogger)	\
    ( (This)->lpVtbl -> OnConnect(This,Parent,DismLogger) ) 

#define IDismProviderStorePrivate_OnDisconnect(This)	\
    ( (This)->lpVtbl -> OnDisconnect(This) ) 

#define IDismProviderStorePrivate_get_Parent(This,Parent)	\
    ( (This)->lpVtbl -> get_Parent(This,Parent) ) 


#define IDismProviderStorePrivate_Initialize(This,pStore)	\
    ( (This)->lpVtbl -> Initialize(This,pStore) ) 

#define IDismProviderStorePrivate_GetProviderLocation(This,providerName,ProviderLocation)	\
    ( (This)->lpVtbl -> GetProviderLocation(This,providerName,ProviderLocation) ) 

#define IDismProviderStorePrivate_RegisterProvider(This,Provider)	\
    ( (This)->lpVtbl -> RegisterProvider(This,Provider) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProviderStorePrivate_INTERFACE_DEFINED__ */


#ifndef __IDismHostManager_INTERFACE_DEFINED__
#define __IDismHostManager_INTERFACE_DEFINED__

/* interface IDismHostManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismHostManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C9E39092-53DF-42B6-89B4-FBA12662EAD1")
    IDismHostManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateObjectFromDLL( 
            /* [in] */ BSTR DLLPath,
            /* [in] */ GUID *ClassIdentifier,
            /* [in] */ GUID *riid,
            /* [retval][out] */ IUnknown **ppUnknown) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ExtendedLogInfo( 
            /* [in] */ BSTR WdsCorePath,
            /* [in] */ BSTR LogPath,
            /* [in] */ DISM_LOGLEVEL_TYPE rhs) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetSynchronizationContext( 
            /* [in] */ BSTR SyncObjectName,
            /* [in] */ ULONG_PTR ProcessHandle) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismHostManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismHostManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismHostManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismHostManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismHostManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismHostManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismHostManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismHostManager * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateObjectFromDLL )( 
            IDismHostManager * This,
            /* [in] */ BSTR DLLPath,
            /* [in] */ GUID *ClassIdentifier,
            /* [in] */ GUID *riid,
            /* [retval][out] */ IUnknown **ppUnknown);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ExtendedLogInfo )( 
            IDismHostManager * This,
            /* [in] */ BSTR WdsCorePath,
            /* [in] */ BSTR LogPath,
            /* [in] */ DISM_LOGLEVEL_TYPE rhs);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSynchronizationContext )( 
            IDismHostManager * This,
            /* [in] */ BSTR SyncObjectName,
            /* [in] */ ULONG_PTR ProcessHandle);
        
        END_INTERFACE
    } IDismHostManagerVtbl;

    interface IDismHostManager
    {
        CONST_VTBL struct IDismHostManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismHostManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismHostManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismHostManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismHostManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismHostManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismHostManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismHostManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismHostManager_CreateObjectFromDLL(This,DLLPath,ClassIdentifier,riid,ppUnknown)	\
    ( (This)->lpVtbl -> CreateObjectFromDLL(This,DLLPath,ClassIdentifier,riid,ppUnknown) ) 

#define IDismHostManager_put_ExtendedLogInfo(This,WdsCorePath,LogPath,rhs)	\
    ( (This)->lpVtbl -> put_ExtendedLogInfo(This,WdsCorePath,LogPath,rhs) ) 

#define IDismHostManager_SetSynchronizationContext(This,SyncObjectName,ProcessHandle)	\
    ( (This)->lpVtbl -> SetSynchronizationContext(This,SyncObjectName,ProcessHandle) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismHostManager_INTERFACE_DEFINED__ */


#ifndef __IDismPackage_INTERFACE_DEFINED__
#define __IDismPackage_INTERFACE_DEFINED__

/* interface IDismPackage */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DEE9A285-B7F6-4C16-B651-7A13AF90F42C")
    IDismPackage : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Identity( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ReleaseType( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ DISM_INSTALL_STATE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RestartRequired( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProductName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ProductVersion( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Company( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Copyright( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SupportInformation( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CreationTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastUpdateTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallPackageName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallLocation( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallClient( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallUserName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsApplicable( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Install( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Remove( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Stage( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE OpenFeature( 
            /* [in] */ BSTR UpdateName,
            /* [retval][out] */ IDismPackageFeature **PackageFeature) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetPackageFeatureCollection( 
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDismPropertyCollection( 
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackage * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseType )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDismPackage * This,
            /* [retval][out] */ DISM_INSTALL_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RestartRequired )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersion )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Company )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Copyright )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportInformation )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreationTime )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdateTime )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallTime )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallPackageName )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallLocation )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallClient )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallUserName )( 
            IDismPackage * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsApplicable )( 
            IDismPackage * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismPackage * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDismPackage * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stage )( 
            IDismPackage * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenFeature )( 
            IDismPackage * This,
            /* [in] */ BSTR UpdateName,
            /* [retval][out] */ IDismPackageFeature **PackageFeature);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageFeatureCollection )( 
            IDismPackage * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDismPropertyCollection )( 
            IDismPackage * This,
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection);
        
        END_INTERFACE
    } IDismPackageVtbl;

    interface IDismPackage
    {
        CONST_VTBL struct IDismPackageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackage_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IDismPackage_get_ReleaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_ReleaseType(This,pVal) ) 

#define IDismPackage_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#define IDismPackage_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismPackage_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IDismPackage_get_RestartRequired(This,pVal)	\
    ( (This)->lpVtbl -> get_RestartRequired(This,pVal) ) 

#define IDismPackage_get_ProductName(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductName(This,pVal) ) 

#define IDismPackage_get_ProductVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductVersion(This,pVal) ) 

#define IDismPackage_get_Company(This,pVal)	\
    ( (This)->lpVtbl -> get_Company(This,pVal) ) 

#define IDismPackage_get_Copyright(This,pVal)	\
    ( (This)->lpVtbl -> get_Copyright(This,pVal) ) 

#define IDismPackage_get_SupportInformation(This,pVal)	\
    ( (This)->lpVtbl -> get_SupportInformation(This,pVal) ) 

#define IDismPackage_get_CreationTime(This,pVal)	\
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) ) 

#define IDismPackage_get_LastUpdateTime(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdateTime(This,pVal) ) 

#define IDismPackage_get_InstallTime(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallTime(This,pVal) ) 

#define IDismPackage_get_InstallPackageName(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallPackageName(This,pVal) ) 

#define IDismPackage_get_InstallLocation(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallLocation(This,pVal) ) 

#define IDismPackage_get_InstallClient(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallClient(This,pVal) ) 

#define IDismPackage_get_InstallUserName(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallUserName(This,pVal) ) 

#define IDismPackage_get_IsApplicable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsApplicable(This,pVal) ) 

#define IDismPackage_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismPackage_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#define IDismPackage_Stage(This)	\
    ( (This)->lpVtbl -> Stage(This) ) 

#define IDismPackage_OpenFeature(This,UpdateName,PackageFeature)	\
    ( (This)->lpVtbl -> OpenFeature(This,UpdateName,PackageFeature) ) 

#define IDismPackage_GetPackageFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPackageFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackage_GetDismPropertyCollection(This,PropertyCollection)	\
    ( (This)->lpVtbl -> GetDismPropertyCollection(This,PropertyCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackage_INTERFACE_DEFINED__ */


#ifndef __IDismPackageFeature_INTERFACE_DEFINED__
#define __IDismPackageFeature_INTERFACE_DEFINED__

/* interface IDismPackageFeature */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageFeature;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3BC3752E-74C5-46F0-B50C-12FF269D5BB1")
    IDismPackageFeature : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ DISM_INSTALL_STATE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayFile( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Restart( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PsfName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadSize( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SetMembership( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_RawParentPackage( 
            /* [retval][out] */ IDismPackage **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Enable( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Disable( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetParentFeatureCollection( 
            /* [retval][out] */ IDismPackageFeatureCollection **pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDismPropertyCollection( 
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageFeatureVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageFeature * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageFeature * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageFeature * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageFeature * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageFeature * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageFeature * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageFeature * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismPackageFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDismPackageFeature * This,
            /* [retval][out] */ DISM_INSTALL_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            IDismPackageFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismPackageFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayFile )( 
            IDismPackageFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Restart )( 
            IDismPackageFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PsfName )( 
            IDismPackageFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadSize )( 
            IDismPackageFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SetMembership )( 
            IDismPackageFeature * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RawParentPackage )( 
            IDismPackageFeature * This,
            /* [retval][out] */ IDismPackage **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IDismPackageFeature * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disable )( 
            IDismPackageFeature * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetParentFeatureCollection )( 
            IDismPackageFeature * This,
            /* [retval][out] */ IDismPackageFeatureCollection **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDismPropertyCollection )( 
            IDismPackageFeature * This,
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection);
        
        END_INTERFACE
    } IDismPackageFeatureVtbl;

    interface IDismPackageFeature
    {
        CONST_VTBL struct IDismPackageFeatureVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageFeature_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageFeature_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageFeature_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageFeature_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageFeature_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageFeature_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageFeature_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageFeature_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismPackageFeature_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#define IDismPackageFeature_get_DisplayName(This,pVal)	\
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) ) 

#define IDismPackageFeature_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IDismPackageFeature_get_DisplayFile(This,pVal)	\
    ( (This)->lpVtbl -> get_DisplayFile(This,pVal) ) 

#define IDismPackageFeature_get_Restart(This,pVal)	\
    ( (This)->lpVtbl -> get_Restart(This,pVal) ) 

#define IDismPackageFeature_get_PsfName(This,pVal)	\
    ( (This)->lpVtbl -> get_PsfName(This,pVal) ) 

#define IDismPackageFeature_get_DownloadSize(This,pVal)	\
    ( (This)->lpVtbl -> get_DownloadSize(This,pVal) ) 

#define IDismPackageFeature_get_SetMembership(This,pVal)	\
    ( (This)->lpVtbl -> get_SetMembership(This,pVal) ) 

#define IDismPackageFeature_get_RawParentPackage(This,pVal)	\
    ( (This)->lpVtbl -> get_RawParentPackage(This,pVal) ) 

#define IDismPackageFeature_Enable(This)	\
    ( (This)->lpVtbl -> Enable(This) ) 

#define IDismPackageFeature_Disable(This)	\
    ( (This)->lpVtbl -> Disable(This) ) 

#define IDismPackageFeature_GetParentFeatureCollection(This,pVal)	\
    ( (This)->lpVtbl -> GetParentFeatureCollection(This,pVal) ) 

#define IDismPackageFeature_GetDismPropertyCollection(This,PropertyCollection)	\
    ( (This)->lpVtbl -> GetDismPropertyCollection(This,PropertyCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageFeature_INTERFACE_DEFINED__ */


#ifndef __IDismPackageFeatureCollection_INTERFACE_DEFINED__
#define __IDismPackageFeatureCollection_INTERFACE_DEFINED__

/* interface IDismPackageFeatureCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageFeatureCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("63E0AF82-28E4-4145-AE9A-AADD715C1251")
    IDismPackageFeatureCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismPackageFeature **ppDriver) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageFeatureCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageFeatureCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageFeatureCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageFeatureCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageFeatureCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageFeatureCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageFeatureCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageFeatureCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismPackageFeatureCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismPackageFeatureCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismPackageFeature **ppDriver);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismPackageFeatureCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismPackageFeatureCollectionVtbl;

    interface IDismPackageFeatureCollection
    {
        CONST_VTBL struct IDismPackageFeatureCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageFeatureCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageFeatureCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageFeatureCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageFeatureCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageFeatureCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageFeatureCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageFeatureCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageFeatureCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismPackageFeatureCollection_get_Item(This,n,ppDriver)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppDriver) ) 

#define IDismPackageFeatureCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageFeatureCollection_INTERFACE_DEFINED__ */


#ifndef __IDismPackage2_INTERFACE_DEFINED__
#define __IDismPackage2_INTERFACE_DEFINED__

/* interface IDismPackage2 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5F81A121-C3C5-4E94-B7AE-22B532F9F3A8")
    IDismPackage2 : public IDismPackage
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_FullyOfflineInstallable( 
            /* [retval][out] */ DISM_PACKAGE_FULLY_OFFLINE_INSTALLABLE_STATE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScavengeSequence( 
            /* [retval][out] */ unsigned int *piScavengeSequence) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CreationFileTime( 
            /* [retval][out] */ BSTR *pFileTime) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastUpdateFileTime( 
            /* [retval][out] */ BSTR *pFileTime) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallFileTime( 
            /* [retval][out] */ BSTR *pFileTime) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackage2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackage2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackage2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackage2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackage2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackage2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackage2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackage2 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseType )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDismPackage2 * This,
            /* [retval][out] */ DISM_INSTALL_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RestartRequired )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersion )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Company )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Copyright )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportInformation )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreationTime )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdateTime )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallTime )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallPackageName )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallLocation )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallClient )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallUserName )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsApplicable )( 
            IDismPackage2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismPackage2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDismPackage2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stage )( 
            IDismPackage2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenFeature )( 
            IDismPackage2 * This,
            /* [in] */ BSTR UpdateName,
            /* [retval][out] */ IDismPackageFeature **PackageFeature);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageFeatureCollection )( 
            IDismPackage2 * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDismPropertyCollection )( 
            IDismPackage2 * This,
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullyOfflineInstallable )( 
            IDismPackage2 * This,
            /* [retval][out] */ DISM_PACKAGE_FULLY_OFFLINE_INSTALLABLE_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScavengeSequence )( 
            IDismPackage2 * This,
            /* [retval][out] */ unsigned int *piScavengeSequence);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreationFileTime )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdateFileTime )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallFileTime )( 
            IDismPackage2 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        END_INTERFACE
    } IDismPackage2Vtbl;

    interface IDismPackage2
    {
        CONST_VTBL struct IDismPackage2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackage2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackage2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackage2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackage2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackage2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackage2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackage2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackage2_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IDismPackage2_get_ReleaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_ReleaseType(This,pVal) ) 

#define IDismPackage2_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#define IDismPackage2_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismPackage2_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IDismPackage2_get_RestartRequired(This,pVal)	\
    ( (This)->lpVtbl -> get_RestartRequired(This,pVal) ) 

#define IDismPackage2_get_ProductName(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductName(This,pVal) ) 

#define IDismPackage2_get_ProductVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductVersion(This,pVal) ) 

#define IDismPackage2_get_Company(This,pVal)	\
    ( (This)->lpVtbl -> get_Company(This,pVal) ) 

#define IDismPackage2_get_Copyright(This,pVal)	\
    ( (This)->lpVtbl -> get_Copyright(This,pVal) ) 

#define IDismPackage2_get_SupportInformation(This,pVal)	\
    ( (This)->lpVtbl -> get_SupportInformation(This,pVal) ) 

#define IDismPackage2_get_CreationTime(This,pVal)	\
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) ) 

#define IDismPackage2_get_LastUpdateTime(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdateTime(This,pVal) ) 

#define IDismPackage2_get_InstallTime(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallTime(This,pVal) ) 

#define IDismPackage2_get_InstallPackageName(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallPackageName(This,pVal) ) 

#define IDismPackage2_get_InstallLocation(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallLocation(This,pVal) ) 

#define IDismPackage2_get_InstallClient(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallClient(This,pVal) ) 

#define IDismPackage2_get_InstallUserName(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallUserName(This,pVal) ) 

#define IDismPackage2_get_IsApplicable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsApplicable(This,pVal) ) 

#define IDismPackage2_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismPackage2_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#define IDismPackage2_Stage(This)	\
    ( (This)->lpVtbl -> Stage(This) ) 

#define IDismPackage2_OpenFeature(This,UpdateName,PackageFeature)	\
    ( (This)->lpVtbl -> OpenFeature(This,UpdateName,PackageFeature) ) 

#define IDismPackage2_GetPackageFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPackageFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackage2_GetDismPropertyCollection(This,PropertyCollection)	\
    ( (This)->lpVtbl -> GetDismPropertyCollection(This,PropertyCollection) ) 


#define IDismPackage2_get_FullyOfflineInstallable(This,pVal)	\
    ( (This)->lpVtbl -> get_FullyOfflineInstallable(This,pVal) ) 

#define IDismPackage2_get_ScavengeSequence(This,piScavengeSequence)	\
    ( (This)->lpVtbl -> get_ScavengeSequence(This,piScavengeSequence) ) 

#define IDismPackage2_get_CreationFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_CreationFileTime(This,pFileTime) ) 

#define IDismPackage2_get_LastUpdateFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_LastUpdateFileTime(This,pFileTime) ) 

#define IDismPackage2_get_InstallFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_InstallFileTime(This,pFileTime) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackage2_INTERFACE_DEFINED__ */


#ifndef __IDismPackage3_INTERFACE_DEFINED__
#define __IDismPackage3_INTERFACE_DEFINED__

/* interface IDismPackage3 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackage3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("EC622249-BA0C-405B-A83C-4A31BC7F0C4D")
    IDismPackage3 : public IDismPackage2
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CapabilityId( 
            /* [retval][out] */ BSTR *pId) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsSSU( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackage3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackage3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackage3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackage3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackage3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackage3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackage3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackage3 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseType )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDismPackage3 * This,
            /* [retval][out] */ DISM_INSTALL_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RestartRequired )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersion )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Company )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Copyright )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportInformation )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreationTime )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdateTime )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallTime )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallPackageName )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallLocation )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallClient )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallUserName )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsApplicable )( 
            IDismPackage3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismPackage3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDismPackage3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stage )( 
            IDismPackage3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenFeature )( 
            IDismPackage3 * This,
            /* [in] */ BSTR UpdateName,
            /* [retval][out] */ IDismPackageFeature **PackageFeature);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageFeatureCollection )( 
            IDismPackage3 * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDismPropertyCollection )( 
            IDismPackage3 * This,
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullyOfflineInstallable )( 
            IDismPackage3 * This,
            /* [retval][out] */ DISM_PACKAGE_FULLY_OFFLINE_INSTALLABLE_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScavengeSequence )( 
            IDismPackage3 * This,
            /* [retval][out] */ unsigned int *piScavengeSequence);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreationFileTime )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdateFileTime )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallFileTime )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CapabilityId )( 
            IDismPackage3 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsSSU )( 
            IDismPackage3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        END_INTERFACE
    } IDismPackage3Vtbl;

    interface IDismPackage3
    {
        CONST_VTBL struct IDismPackage3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackage3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackage3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackage3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackage3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackage3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackage3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackage3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackage3_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IDismPackage3_get_ReleaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_ReleaseType(This,pVal) ) 

#define IDismPackage3_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#define IDismPackage3_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismPackage3_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IDismPackage3_get_RestartRequired(This,pVal)	\
    ( (This)->lpVtbl -> get_RestartRequired(This,pVal) ) 

#define IDismPackage3_get_ProductName(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductName(This,pVal) ) 

#define IDismPackage3_get_ProductVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductVersion(This,pVal) ) 

#define IDismPackage3_get_Company(This,pVal)	\
    ( (This)->lpVtbl -> get_Company(This,pVal) ) 

#define IDismPackage3_get_Copyright(This,pVal)	\
    ( (This)->lpVtbl -> get_Copyright(This,pVal) ) 

#define IDismPackage3_get_SupportInformation(This,pVal)	\
    ( (This)->lpVtbl -> get_SupportInformation(This,pVal) ) 

#define IDismPackage3_get_CreationTime(This,pVal)	\
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) ) 

#define IDismPackage3_get_LastUpdateTime(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdateTime(This,pVal) ) 

#define IDismPackage3_get_InstallTime(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallTime(This,pVal) ) 

#define IDismPackage3_get_InstallPackageName(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallPackageName(This,pVal) ) 

#define IDismPackage3_get_InstallLocation(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallLocation(This,pVal) ) 

#define IDismPackage3_get_InstallClient(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallClient(This,pVal) ) 

#define IDismPackage3_get_InstallUserName(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallUserName(This,pVal) ) 

#define IDismPackage3_get_IsApplicable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsApplicable(This,pVal) ) 

#define IDismPackage3_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismPackage3_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#define IDismPackage3_Stage(This)	\
    ( (This)->lpVtbl -> Stage(This) ) 

#define IDismPackage3_OpenFeature(This,UpdateName,PackageFeature)	\
    ( (This)->lpVtbl -> OpenFeature(This,UpdateName,PackageFeature) ) 

#define IDismPackage3_GetPackageFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPackageFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackage3_GetDismPropertyCollection(This,PropertyCollection)	\
    ( (This)->lpVtbl -> GetDismPropertyCollection(This,PropertyCollection) ) 


#define IDismPackage3_get_FullyOfflineInstallable(This,pVal)	\
    ( (This)->lpVtbl -> get_FullyOfflineInstallable(This,pVal) ) 

#define IDismPackage3_get_ScavengeSequence(This,piScavengeSequence)	\
    ( (This)->lpVtbl -> get_ScavengeSequence(This,piScavengeSequence) ) 

#define IDismPackage3_get_CreationFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_CreationFileTime(This,pFileTime) ) 

#define IDismPackage3_get_LastUpdateFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_LastUpdateFileTime(This,pFileTime) ) 

#define IDismPackage3_get_InstallFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_InstallFileTime(This,pFileTime) ) 


#define IDismPackage3_get_CapabilityId(This,pId)	\
    ( (This)->lpVtbl -> get_CapabilityId(This,pId) ) 

#define IDismPackage3_get_IsSSU(This,pVal)	\
    ( (This)->lpVtbl -> get_IsSSU(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackage3_INTERFACE_DEFINED__ */


#ifndef __IDismPackage4_INTERFACE_DEFINED__
#define __IDismPackage4_INTERFACE_DEFINED__

/* interface IDismPackage4 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackage4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A27155B5-6831-4427-B0D0-972D58F20263")
    IDismPackage4 : public IDismPackage3
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE InstallEx( 
            /* [in] */ DISM_PACKAGE_INSTALL_OPTION InstallOption) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackage4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackage4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackage4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackage4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackage4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackage4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackage4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackage4 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Identity )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ReleaseType )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDismPackage4 * This,
            /* [retval][out] */ DISM_INSTALL_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RestartRequired )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductName )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ProductVersion )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Company )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Copyright )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupportInformation )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreationTime )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdateTime )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallTime )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallPackageName )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallLocation )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallClient )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallUserName )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsApplicable )( 
            IDismPackage4 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismPackage4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDismPackage4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Stage )( 
            IDismPackage4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *OpenFeature )( 
            IDismPackage4 * This,
            /* [in] */ BSTR UpdateName,
            /* [retval][out] */ IDismPackageFeature **PackageFeature);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageFeatureCollection )( 
            IDismPackage4 * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDismPropertyCollection )( 
            IDismPackage4 * This,
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_FullyOfflineInstallable )( 
            IDismPackage4 * This,
            /* [retval][out] */ DISM_PACKAGE_FULLY_OFFLINE_INSTALLABLE_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScavengeSequence )( 
            IDismPackage4 * This,
            /* [retval][out] */ unsigned int *piScavengeSequence);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CreationFileTime )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastUpdateFileTime )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallFileTime )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pFileTime);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CapabilityId )( 
            IDismPackage4 * This,
            /* [retval][out] */ BSTR *pId);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsSSU )( 
            IDismPackage4 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *InstallEx )( 
            IDismPackage4 * This,
            /* [in] */ DISM_PACKAGE_INSTALL_OPTION InstallOption);
        
        END_INTERFACE
    } IDismPackage4Vtbl;

    interface IDismPackage4
    {
        CONST_VTBL struct IDismPackage4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackage4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackage4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackage4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackage4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackage4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackage4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackage4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackage4_get_Identity(This,pVal)	\
    ( (This)->lpVtbl -> get_Identity(This,pVal) ) 

#define IDismPackage4_get_ReleaseType(This,pVal)	\
    ( (This)->lpVtbl -> get_ReleaseType(This,pVal) ) 

#define IDismPackage4_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#define IDismPackage4_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismPackage4_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IDismPackage4_get_RestartRequired(This,pVal)	\
    ( (This)->lpVtbl -> get_RestartRequired(This,pVal) ) 

#define IDismPackage4_get_ProductName(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductName(This,pVal) ) 

#define IDismPackage4_get_ProductVersion(This,pVal)	\
    ( (This)->lpVtbl -> get_ProductVersion(This,pVal) ) 

#define IDismPackage4_get_Company(This,pVal)	\
    ( (This)->lpVtbl -> get_Company(This,pVal) ) 

#define IDismPackage4_get_Copyright(This,pVal)	\
    ( (This)->lpVtbl -> get_Copyright(This,pVal) ) 

#define IDismPackage4_get_SupportInformation(This,pVal)	\
    ( (This)->lpVtbl -> get_SupportInformation(This,pVal) ) 

#define IDismPackage4_get_CreationTime(This,pVal)	\
    ( (This)->lpVtbl -> get_CreationTime(This,pVal) ) 

#define IDismPackage4_get_LastUpdateTime(This,pVal)	\
    ( (This)->lpVtbl -> get_LastUpdateTime(This,pVal) ) 

#define IDismPackage4_get_InstallTime(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallTime(This,pVal) ) 

#define IDismPackage4_get_InstallPackageName(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallPackageName(This,pVal) ) 

#define IDismPackage4_get_InstallLocation(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallLocation(This,pVal) ) 

#define IDismPackage4_get_InstallClient(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallClient(This,pVal) ) 

#define IDismPackage4_get_InstallUserName(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallUserName(This,pVal) ) 

#define IDismPackage4_get_IsApplicable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsApplicable(This,pVal) ) 

#define IDismPackage4_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismPackage4_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#define IDismPackage4_Stage(This)	\
    ( (This)->lpVtbl -> Stage(This) ) 

#define IDismPackage4_OpenFeature(This,UpdateName,PackageFeature)	\
    ( (This)->lpVtbl -> OpenFeature(This,UpdateName,PackageFeature) ) 

#define IDismPackage4_GetPackageFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPackageFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackage4_GetDismPropertyCollection(This,PropertyCollection)	\
    ( (This)->lpVtbl -> GetDismPropertyCollection(This,PropertyCollection) ) 


#define IDismPackage4_get_FullyOfflineInstallable(This,pVal)	\
    ( (This)->lpVtbl -> get_FullyOfflineInstallable(This,pVal) ) 

#define IDismPackage4_get_ScavengeSequence(This,piScavengeSequence)	\
    ( (This)->lpVtbl -> get_ScavengeSequence(This,piScavengeSequence) ) 

#define IDismPackage4_get_CreationFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_CreationFileTime(This,pFileTime) ) 

#define IDismPackage4_get_LastUpdateFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_LastUpdateFileTime(This,pFileTime) ) 

#define IDismPackage4_get_InstallFileTime(This,pFileTime)	\
    ( (This)->lpVtbl -> get_InstallFileTime(This,pFileTime) ) 


#define IDismPackage4_get_CapabilityId(This,pId)	\
    ( (This)->lpVtbl -> get_CapabilityId(This,pId) ) 

#define IDismPackage4_get_IsSSU(This,pVal)	\
    ( (This)->lpVtbl -> get_IsSSU(This,pVal) ) 


#define IDismPackage4_InstallEx(This,InstallOption)	\
    ( (This)->lpVtbl -> InstallEx(This,InstallOption) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackage4_INTERFACE_DEFINED__ */


#ifndef __IDismPackageCollection_INTERFACE_DEFINED__
#define __IDismPackageCollection_INTERFACE_DEFINED__

/* interface IDismPackageCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D80D838A-0D57-428C-B898-265A7D244A67")
    IDismPackageCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismPackage **ppPackage) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismPackageCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismPackageCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismPackage **ppPackage);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismPackageCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismPackageCollectionVtbl;

    interface IDismPackageCollection
    {
        CONST_VTBL struct IDismPackageCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismPackageCollection_get_Item(This,n,ppPackage)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppPackage) ) 

#define IDismPackageCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageCollection_INTERFACE_DEFINED__ */


#ifndef __IDismPackageFeature2_INTERFACE_DEFINED__
#define __IDismPackageFeature2_INTERFACE_DEFINED__

/* interface IDismPackageFeature2 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageFeature2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C551557-21C2-4907-BE82-35D7EEF5BB13")
    IDismPackageFeature2 : public IDismPackageFeature
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE EnableAll( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE DisableEx( 
            /* [in] */ unsigned int Options) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CustomPropertyXMLBlob( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageFeature2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageFeature2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageFeature2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageFeature2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageFeature2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageFeature2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageFeature2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageFeature2 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ DISM_INSTALL_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayFile )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Restart )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PsfName )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadSize )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SetMembership )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_RawParentPackage )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ IDismPackage **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Enable )( 
            IDismPackageFeature2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Disable )( 
            IDismPackageFeature2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetParentFeatureCollection )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ IDismPackageFeatureCollection **pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDismPropertyCollection )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *EnableAll )( 
            IDismPackageFeature2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *DisableEx )( 
            IDismPackageFeature2 * This,
            /* [in] */ unsigned int Options);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CustomPropertyXMLBlob )( 
            IDismPackageFeature2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IDismPackageFeature2Vtbl;

    interface IDismPackageFeature2
    {
        CONST_VTBL struct IDismPackageFeature2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageFeature2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageFeature2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageFeature2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageFeature2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageFeature2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageFeature2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageFeature2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageFeature2_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismPackageFeature2_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#define IDismPackageFeature2_get_DisplayName(This,pVal)	\
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) ) 

#define IDismPackageFeature2_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IDismPackageFeature2_get_DisplayFile(This,pVal)	\
    ( (This)->lpVtbl -> get_DisplayFile(This,pVal) ) 

#define IDismPackageFeature2_get_Restart(This,pVal)	\
    ( (This)->lpVtbl -> get_Restart(This,pVal) ) 

#define IDismPackageFeature2_get_PsfName(This,pVal)	\
    ( (This)->lpVtbl -> get_PsfName(This,pVal) ) 

#define IDismPackageFeature2_get_DownloadSize(This,pVal)	\
    ( (This)->lpVtbl -> get_DownloadSize(This,pVal) ) 

#define IDismPackageFeature2_get_SetMembership(This,pVal)	\
    ( (This)->lpVtbl -> get_SetMembership(This,pVal) ) 

#define IDismPackageFeature2_get_RawParentPackage(This,pVal)	\
    ( (This)->lpVtbl -> get_RawParentPackage(This,pVal) ) 

#define IDismPackageFeature2_Enable(This)	\
    ( (This)->lpVtbl -> Enable(This) ) 

#define IDismPackageFeature2_Disable(This)	\
    ( (This)->lpVtbl -> Disable(This) ) 

#define IDismPackageFeature2_GetParentFeatureCollection(This,pVal)	\
    ( (This)->lpVtbl -> GetParentFeatureCollection(This,pVal) ) 

#define IDismPackageFeature2_GetDismPropertyCollection(This,PropertyCollection)	\
    ( (This)->lpVtbl -> GetDismPropertyCollection(This,PropertyCollection) ) 


#define IDismPackageFeature2_EnableAll(This)	\
    ( (This)->lpVtbl -> EnableAll(This) ) 

#define IDismPackageFeature2_DisableEx(This,Options)	\
    ( (This)->lpVtbl -> DisableEx(This,Options) ) 

#define IDismPackageFeature2_get_CustomPropertyXMLBlob(This,pVal)	\
    ( (This)->lpVtbl -> get_CustomPropertyXMLBlob(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageFeature2_INTERFACE_DEFINED__ */


#ifndef __IDismCapability_INTERFACE_DEFINED__
#define __IDismCapability_INTERFACE_DEFINED__

/* interface IDismCapability */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismCapability;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A7DEE63-129C-41E8-B6A4-BD1EB1D85E65")
    IDismCapability : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_State( 
            /* [retval][out] */ DISM_INSTALL_STATE *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DownloadSize( 
            /* [retval][out] */ unsigned long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallSize( 
            /* [retval][out] */ unsigned long *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_DisplayName( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Install( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Uninstall( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismCapabilityVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismCapability * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismCapability * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismCapability * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismCapability * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismCapability * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismCapability * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismCapability * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismCapability * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            IDismCapability * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_State )( 
            IDismCapability * This,
            /* [retval][out] */ DISM_INSTALL_STATE *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DownloadSize )( 
            IDismCapability * This,
            /* [retval][out] */ unsigned long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallSize )( 
            IDismCapability * This,
            /* [retval][out] */ unsigned long *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_DisplayName )( 
            IDismCapability * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismCapability * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismCapability * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Uninstall )( 
            IDismCapability * This);
        
        END_INTERFACE
    } IDismCapabilityVtbl;

    interface IDismCapability
    {
        CONST_VTBL struct IDismCapabilityVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismCapability_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismCapability_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismCapability_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismCapability_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismCapability_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismCapability_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismCapability_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismCapability_get_Name(This,pVal)	\
    ( (This)->lpVtbl -> get_Name(This,pVal) ) 

#define IDismCapability_get_Id(This,pVal)	\
    ( (This)->lpVtbl -> get_Id(This,pVal) ) 

#define IDismCapability_get_State(This,pVal)	\
    ( (This)->lpVtbl -> get_State(This,pVal) ) 

#define IDismCapability_get_DownloadSize(This,pVal)	\
    ( (This)->lpVtbl -> get_DownloadSize(This,pVal) ) 

#define IDismCapability_get_InstallSize(This,pVal)	\
    ( (This)->lpVtbl -> get_InstallSize(This,pVal) ) 

#define IDismCapability_get_DisplayName(This,pVal)	\
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) ) 

#define IDismCapability_get_Description(This,pVal)	\
    ( (This)->lpVtbl -> get_Description(This,pVal) ) 

#define IDismCapability_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismCapability_Uninstall(This)	\
    ( (This)->lpVtbl -> Uninstall(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismCapability_INTERFACE_DEFINED__ */


#ifndef __IDismCapabilityCollection_INTERFACE_DEFINED__
#define __IDismCapabilityCollection_INTERFACE_DEFINED__

/* interface IDismCapabilityCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismCapabilityCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B4784DA-E322-4BF0-800B-28BAE357EC71")
    IDismCapabilityCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismCapability **ppCapability) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismCapabilityCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismCapabilityCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismCapabilityCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismCapabilityCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismCapabilityCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismCapabilityCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismCapabilityCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismCapabilityCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismCapabilityCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismCapabilityCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismCapability **ppCapability);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismCapabilityCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismCapabilityCollectionVtbl;

    interface IDismCapabilityCollection
    {
        CONST_VTBL struct IDismCapabilityCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismCapabilityCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismCapabilityCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismCapabilityCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismCapabilityCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismCapabilityCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismCapabilityCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismCapabilityCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismCapabilityCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismCapabilityCollection_get_Item(This,n,ppCapability)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppCapability) ) 

#define IDismCapabilityCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismCapabilityCollection_INTERFACE_DEFINED__ */


#ifndef __IDismPackageManager_INTERFACE_DEFINED__
#define __IDismPackageManager_INTERFACE_DEFINED__

/* interface IDismPackageManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1754AA4F-F0E2-4692-A802-D51871085F34")
    IDismPackageManager : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsCompressionEnabled( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsImageUnserviceable( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPackageByPath( 
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismPackage **Package) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPackageByName( 
            /* [in] */ BSTR PackageName,
            /* [retval][out] */ IDismPackage **Package) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenFoundationPackage( 
            /* [retval][out] */ IDismPackage **Package) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenMsuPackage( 
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismMsuPackage **Package) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPublicFeature( 
            /* [in] */ BSTR FeatureName,
            /* [retval][out] */ IDismPackageFeature **Feature) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetPackageCollection( 
            /* [retval][out] */ IDismPackageCollection **ppPackages) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetPublicFeatureCollection( 
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProcessChanges( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProcessChangesWithOptions( 
            /* [in] */ unsigned int Options) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ProcessChangesPostReboot( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Scavenge( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RevertPendingActions( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageManager * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompressionEnabled )( 
            IDismPackageManager * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsImageUnserviceable )( 
            IDismPackageManager * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByPath )( 
            IDismPackageManager * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByName )( 
            IDismPackageManager * This,
            /* [in] */ BSTR PackageName,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenFoundationPackage )( 
            IDismPackageManager * This,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenMsuPackage )( 
            IDismPackageManager * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismMsuPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPublicFeature )( 
            IDismPackageManager * This,
            /* [in] */ BSTR FeatureName,
            /* [retval][out] */ IDismPackageFeature **Feature);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageCollection )( 
            IDismPackageManager * This,
            /* [retval][out] */ IDismPackageCollection **ppPackages);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPublicFeatureCollection )( 
            IDismPackageManager * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChanges )( 
            IDismPackageManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesWithOptions )( 
            IDismPackageManager * This,
            /* [in] */ unsigned int Options);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesPostReboot )( 
            IDismPackageManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Scavenge )( 
            IDismPackageManager * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RevertPendingActions )( 
            IDismPackageManager * This);
        
        END_INTERFACE
    } IDismPackageManagerVtbl;

    interface IDismPackageManager
    {
        CONST_VTBL struct IDismPackageManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageManager_get_IsCompressionEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCompressionEnabled(This,pVal) ) 

#define IDismPackageManager_get_IsImageUnserviceable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsImageUnserviceable(This,pVal) ) 

#define IDismPackageManager_OpenPackageByPath(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenPackageByPath(This,PackageLocation,Package) ) 

#define IDismPackageManager_OpenPackageByName(This,PackageName,Package)	\
    ( (This)->lpVtbl -> OpenPackageByName(This,PackageName,Package) ) 

#define IDismPackageManager_OpenFoundationPackage(This,Package)	\
    ( (This)->lpVtbl -> OpenFoundationPackage(This,Package) ) 

#define IDismPackageManager_OpenMsuPackage(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenMsuPackage(This,PackageLocation,Package) ) 

#define IDismPackageManager_OpenPublicFeature(This,FeatureName,Feature)	\
    ( (This)->lpVtbl -> OpenPublicFeature(This,FeatureName,Feature) ) 

#define IDismPackageManager_GetPackageCollection(This,ppPackages)	\
    ( (This)->lpVtbl -> GetPackageCollection(This,ppPackages) ) 

#define IDismPackageManager_GetPublicFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPublicFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackageManager_ProcessChanges(This)	\
    ( (This)->lpVtbl -> ProcessChanges(This) ) 

#define IDismPackageManager_ProcessChangesWithOptions(This,Options)	\
    ( (This)->lpVtbl -> ProcessChangesWithOptions(This,Options) ) 

#define IDismPackageManager_ProcessChangesPostReboot(This)	\
    ( (This)->lpVtbl -> ProcessChangesPostReboot(This) ) 

#define IDismPackageManager_Scavenge(This)	\
    ( (This)->lpVtbl -> Scavenge(This) ) 

#define IDismPackageManager_RevertPendingActions(This)	\
    ( (This)->lpVtbl -> RevertPendingActions(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageManager_INTERFACE_DEFINED__ */


#ifndef __IDismMsuPackage_INTERFACE_DEFINED__
#define __IDismMsuPackage_INTERFACE_DEFINED__

/* interface IDismMsuPackage */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismMsuPackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F8EF44D0-94F1-4DFB-BAD8-7B13830BA06E")
    IDismMsuPackage : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *Path) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Install( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismMsuPackageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismMsuPackage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismMsuPackage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismMsuPackage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismMsuPackage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismMsuPackage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismMsuPackage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismMsuPackage * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IDismMsuPackage * This,
            /* [retval][out] */ BSTR *Path);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismMsuPackage * This);
        
        END_INTERFACE
    } IDismMsuPackageVtbl;

    interface IDismMsuPackage
    {
        CONST_VTBL struct IDismMsuPackageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismMsuPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismMsuPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismMsuPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismMsuPackage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismMsuPackage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismMsuPackage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismMsuPackage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismMsuPackage_get_Path(This,Path)	\
    ( (This)->lpVtbl -> get_Path(This,Path) ) 

#define IDismMsuPackage_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismMsuPackage_INTERFACE_DEFINED__ */


#ifndef __IDismPackageManager2_INTERFACE_DEFINED__
#define __IDismPackageManager2_INTERFACE_DEFINED__

/* interface IDismPackageManager2 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5CC9ED95-CF41-4685-BEAA-70531031FEC4")
    IDismPackageManager2 : public IDismPackageManager
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_IsStoreCorrupt( 
            /* [retval][out] */ VARIANT_BOOL *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastCBSSessionID( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CBSSessionState( 
            /* [in] */ BSTR Id,
            /* [out] */ VARIANT_BOOL *Completed,
            /* [retval][out] */ HRESULT *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CleanupSize( 
            /* [retval][out] */ unsigned long *pulSizeInMB) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_PreventPending( 
            /* [in] */ VARIANT_BOOL rhs) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AddSourcePath( 
            BSTR Path) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ClearSourcePaths( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE ScanHealth( void) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE RestoreHealth( 
            /* [in] */ VARIANT_BOOL LimitAccess) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartComponentCleanup( 
            /* [in] */ VARIANT_BOOL ResetBase) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE WindowsUpdateCleanup( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageManager2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageManager2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageManager2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageManager2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageManager2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageManager2 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompressionEnabled )( 
            IDismPackageManager2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsImageUnserviceable )( 
            IDismPackageManager2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByPath )( 
            IDismPackageManager2 * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByName )( 
            IDismPackageManager2 * This,
            /* [in] */ BSTR PackageName,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenFoundationPackage )( 
            IDismPackageManager2 * This,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenMsuPackage )( 
            IDismPackageManager2 * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismMsuPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPublicFeature )( 
            IDismPackageManager2 * This,
            /* [in] */ BSTR FeatureName,
            /* [retval][out] */ IDismPackageFeature **Feature);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageCollection )( 
            IDismPackageManager2 * This,
            /* [retval][out] */ IDismPackageCollection **ppPackages);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPublicFeatureCollection )( 
            IDismPackageManager2 * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChanges )( 
            IDismPackageManager2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesWithOptions )( 
            IDismPackageManager2 * This,
            /* [in] */ unsigned int Options);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesPostReboot )( 
            IDismPackageManager2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Scavenge )( 
            IDismPackageManager2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RevertPendingActions )( 
            IDismPackageManager2 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsStoreCorrupt )( 
            IDismPackageManager2 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastCBSSessionID )( 
            IDismPackageManager2 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CBSSessionState )( 
            IDismPackageManager2 * This,
            /* [in] */ BSTR Id,
            /* [out] */ VARIANT_BOOL *Completed,
            /* [retval][out] */ HRESULT *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CleanupSize )( 
            IDismPackageManager2 * This,
            /* [retval][out] */ unsigned long *pulSizeInMB);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PreventPending )( 
            IDismPackageManager2 * This,
            /* [in] */ VARIANT_BOOL rhs);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddSourcePath )( 
            IDismPackageManager2 * This,
            BSTR Path);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearSourcePaths )( 
            IDismPackageManager2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScanHealth )( 
            IDismPackageManager2 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreHealth )( 
            IDismPackageManager2 * This,
            /* [in] */ VARIANT_BOOL LimitAccess);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartComponentCleanup )( 
            IDismPackageManager2 * This,
            /* [in] */ VARIANT_BOOL ResetBase);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WindowsUpdateCleanup )( 
            IDismPackageManager2 * This);
        
        END_INTERFACE
    } IDismPackageManager2Vtbl;

    interface IDismPackageManager2
    {
        CONST_VTBL struct IDismPackageManager2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageManager2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageManager2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageManager2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageManager2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageManager2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageManager2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageManager2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageManager2_get_IsCompressionEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCompressionEnabled(This,pVal) ) 

#define IDismPackageManager2_get_IsImageUnserviceable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsImageUnserviceable(This,pVal) ) 

#define IDismPackageManager2_OpenPackageByPath(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenPackageByPath(This,PackageLocation,Package) ) 

#define IDismPackageManager2_OpenPackageByName(This,PackageName,Package)	\
    ( (This)->lpVtbl -> OpenPackageByName(This,PackageName,Package) ) 

#define IDismPackageManager2_OpenFoundationPackage(This,Package)	\
    ( (This)->lpVtbl -> OpenFoundationPackage(This,Package) ) 

#define IDismPackageManager2_OpenMsuPackage(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenMsuPackage(This,PackageLocation,Package) ) 

#define IDismPackageManager2_OpenPublicFeature(This,FeatureName,Feature)	\
    ( (This)->lpVtbl -> OpenPublicFeature(This,FeatureName,Feature) ) 

#define IDismPackageManager2_GetPackageCollection(This,ppPackages)	\
    ( (This)->lpVtbl -> GetPackageCollection(This,ppPackages) ) 

#define IDismPackageManager2_GetPublicFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPublicFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackageManager2_ProcessChanges(This)	\
    ( (This)->lpVtbl -> ProcessChanges(This) ) 

#define IDismPackageManager2_ProcessChangesWithOptions(This,Options)	\
    ( (This)->lpVtbl -> ProcessChangesWithOptions(This,Options) ) 

#define IDismPackageManager2_ProcessChangesPostReboot(This)	\
    ( (This)->lpVtbl -> ProcessChangesPostReboot(This) ) 

#define IDismPackageManager2_Scavenge(This)	\
    ( (This)->lpVtbl -> Scavenge(This) ) 

#define IDismPackageManager2_RevertPendingActions(This)	\
    ( (This)->lpVtbl -> RevertPendingActions(This) ) 


#define IDismPackageManager2_get_IsStoreCorrupt(This,pVal)	\
    ( (This)->lpVtbl -> get_IsStoreCorrupt(This,pVal) ) 

#define IDismPackageManager2_get_LastCBSSessionID(This,pVal)	\
    ( (This)->lpVtbl -> get_LastCBSSessionID(This,pVal) ) 

#define IDismPackageManager2_get_CBSSessionState(This,Id,Completed,pVal)	\
    ( (This)->lpVtbl -> get_CBSSessionState(This,Id,Completed,pVal) ) 

#define IDismPackageManager2_get_CleanupSize(This,pulSizeInMB)	\
    ( (This)->lpVtbl -> get_CleanupSize(This,pulSizeInMB) ) 

#define IDismPackageManager2_put_PreventPending(This,rhs)	\
    ( (This)->lpVtbl -> put_PreventPending(This,rhs) ) 

#define IDismPackageManager2_AddSourcePath(This,Path)	\
    ( (This)->lpVtbl -> AddSourcePath(This,Path) ) 

#define IDismPackageManager2_ClearSourcePaths(This)	\
    ( (This)->lpVtbl -> ClearSourcePaths(This) ) 

#define IDismPackageManager2_ScanHealth(This)	\
    ( (This)->lpVtbl -> ScanHealth(This) ) 

#define IDismPackageManager2_RestoreHealth(This,LimitAccess)	\
    ( (This)->lpVtbl -> RestoreHealth(This,LimitAccess) ) 

#define IDismPackageManager2_StartComponentCleanup(This,ResetBase)	\
    ( (This)->lpVtbl -> StartComponentCleanup(This,ResetBase) ) 

#define IDismPackageManager2_WindowsUpdateCleanup(This)	\
    ( (This)->lpVtbl -> WindowsUpdateCleanup(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageManager2_INTERFACE_DEFINED__ */


#ifndef __IDismPackageManager3_INTERFACE_DEFINED__
#define __IDismPackageManager3_INTERFACE_DEFINED__

/* interface IDismPackageManager3 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageManager3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E40DD35A-89E1-4619-AD21-EF97D29B5D00")
    IDismPackageManager3 : public IDismPackageManager2
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE AnalyzeComponentStore( 
            /* [retval][out] */ IDismComponentStoreReport **ppReport) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageManager3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageManager3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageManager3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageManager3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageManager3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageManager3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageManager3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageManager3 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompressionEnabled )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsImageUnserviceable )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByPath )( 
            IDismPackageManager3 * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByName )( 
            IDismPackageManager3 * This,
            /* [in] */ BSTR PackageName,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenFoundationPackage )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenMsuPackage )( 
            IDismPackageManager3 * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismMsuPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPublicFeature )( 
            IDismPackageManager3 * This,
            /* [in] */ BSTR FeatureName,
            /* [retval][out] */ IDismPackageFeature **Feature);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageCollection )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ IDismPackageCollection **ppPackages);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPublicFeatureCollection )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChanges )( 
            IDismPackageManager3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesWithOptions )( 
            IDismPackageManager3 * This,
            /* [in] */ unsigned int Options);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesPostReboot )( 
            IDismPackageManager3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Scavenge )( 
            IDismPackageManager3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RevertPendingActions )( 
            IDismPackageManager3 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsStoreCorrupt )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastCBSSessionID )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CBSSessionState )( 
            IDismPackageManager3 * This,
            /* [in] */ BSTR Id,
            /* [out] */ VARIANT_BOOL *Completed,
            /* [retval][out] */ HRESULT *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CleanupSize )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ unsigned long *pulSizeInMB);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PreventPending )( 
            IDismPackageManager3 * This,
            /* [in] */ VARIANT_BOOL rhs);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddSourcePath )( 
            IDismPackageManager3 * This,
            BSTR Path);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearSourcePaths )( 
            IDismPackageManager3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScanHealth )( 
            IDismPackageManager3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreHealth )( 
            IDismPackageManager3 * This,
            /* [in] */ VARIANT_BOOL LimitAccess);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartComponentCleanup )( 
            IDismPackageManager3 * This,
            /* [in] */ VARIANT_BOOL ResetBase);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WindowsUpdateCleanup )( 
            IDismPackageManager3 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AnalyzeComponentStore )( 
            IDismPackageManager3 * This,
            /* [retval][out] */ IDismComponentStoreReport **ppReport);
        
        END_INTERFACE
    } IDismPackageManager3Vtbl;

    interface IDismPackageManager3
    {
        CONST_VTBL struct IDismPackageManager3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageManager3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageManager3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageManager3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageManager3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageManager3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageManager3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageManager3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageManager3_get_IsCompressionEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCompressionEnabled(This,pVal) ) 

#define IDismPackageManager3_get_IsImageUnserviceable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsImageUnserviceable(This,pVal) ) 

#define IDismPackageManager3_OpenPackageByPath(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenPackageByPath(This,PackageLocation,Package) ) 

#define IDismPackageManager3_OpenPackageByName(This,PackageName,Package)	\
    ( (This)->lpVtbl -> OpenPackageByName(This,PackageName,Package) ) 

#define IDismPackageManager3_OpenFoundationPackage(This,Package)	\
    ( (This)->lpVtbl -> OpenFoundationPackage(This,Package) ) 

#define IDismPackageManager3_OpenMsuPackage(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenMsuPackage(This,PackageLocation,Package) ) 

#define IDismPackageManager3_OpenPublicFeature(This,FeatureName,Feature)	\
    ( (This)->lpVtbl -> OpenPublicFeature(This,FeatureName,Feature) ) 

#define IDismPackageManager3_GetPackageCollection(This,ppPackages)	\
    ( (This)->lpVtbl -> GetPackageCollection(This,ppPackages) ) 

#define IDismPackageManager3_GetPublicFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPublicFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackageManager3_ProcessChanges(This)	\
    ( (This)->lpVtbl -> ProcessChanges(This) ) 

#define IDismPackageManager3_ProcessChangesWithOptions(This,Options)	\
    ( (This)->lpVtbl -> ProcessChangesWithOptions(This,Options) ) 

#define IDismPackageManager3_ProcessChangesPostReboot(This)	\
    ( (This)->lpVtbl -> ProcessChangesPostReboot(This) ) 

#define IDismPackageManager3_Scavenge(This)	\
    ( (This)->lpVtbl -> Scavenge(This) ) 

#define IDismPackageManager3_RevertPendingActions(This)	\
    ( (This)->lpVtbl -> RevertPendingActions(This) ) 


#define IDismPackageManager3_get_IsStoreCorrupt(This,pVal)	\
    ( (This)->lpVtbl -> get_IsStoreCorrupt(This,pVal) ) 

#define IDismPackageManager3_get_LastCBSSessionID(This,pVal)	\
    ( (This)->lpVtbl -> get_LastCBSSessionID(This,pVal) ) 

#define IDismPackageManager3_get_CBSSessionState(This,Id,Completed,pVal)	\
    ( (This)->lpVtbl -> get_CBSSessionState(This,Id,Completed,pVal) ) 

#define IDismPackageManager3_get_CleanupSize(This,pulSizeInMB)	\
    ( (This)->lpVtbl -> get_CleanupSize(This,pulSizeInMB) ) 

#define IDismPackageManager3_put_PreventPending(This,rhs)	\
    ( (This)->lpVtbl -> put_PreventPending(This,rhs) ) 

#define IDismPackageManager3_AddSourcePath(This,Path)	\
    ( (This)->lpVtbl -> AddSourcePath(This,Path) ) 

#define IDismPackageManager3_ClearSourcePaths(This)	\
    ( (This)->lpVtbl -> ClearSourcePaths(This) ) 

#define IDismPackageManager3_ScanHealth(This)	\
    ( (This)->lpVtbl -> ScanHealth(This) ) 

#define IDismPackageManager3_RestoreHealth(This,LimitAccess)	\
    ( (This)->lpVtbl -> RestoreHealth(This,LimitAccess) ) 

#define IDismPackageManager3_StartComponentCleanup(This,ResetBase)	\
    ( (This)->lpVtbl -> StartComponentCleanup(This,ResetBase) ) 

#define IDismPackageManager3_WindowsUpdateCleanup(This)	\
    ( (This)->lpVtbl -> WindowsUpdateCleanup(This) ) 


#define IDismPackageManager3_AnalyzeComponentStore(This,ppReport)	\
    ( (This)->lpVtbl -> AnalyzeComponentStore(This,ppReport) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageManager3_INTERFACE_DEFINED__ */


#ifndef __IDismComponentStoreReport_INTERFACE_DEFINED__
#define __IDismComponentStoreReport_INTERFACE_DEFINED__

/* interface IDismComponentStoreReport */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismComponentStoreReport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("46CE4564-E88A-4EAE-BD7C-DA221F61E0C7")
    IDismComponentStoreReport : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WinSxSVolatileSize( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WinSxSNonVolatileSize( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WinSxSSharedWithWindowsSize( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_WinSxSAccordingToExplorerSize( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LastScavengeDateTime( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SupersededPackageCount( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ComponentCleanupRecommended( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ActualSize( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismComponentStoreReportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismComponentStoreReport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismComponentStoreReport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismComponentStoreReport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismComponentStoreReport * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismComponentStoreReport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismComponentStoreReport * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismComponentStoreReport * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinSxSVolatileSize )( 
            IDismComponentStoreReport * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinSxSNonVolatileSize )( 
            IDismComponentStoreReport * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinSxSSharedWithWindowsSize )( 
            IDismComponentStoreReport * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_WinSxSAccordingToExplorerSize )( 
            IDismComponentStoreReport * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastScavengeDateTime )( 
            IDismComponentStoreReport * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SupersededPackageCount )( 
            IDismComponentStoreReport * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ComponentCleanupRecommended )( 
            IDismComponentStoreReport * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ActualSize )( 
            IDismComponentStoreReport * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IDismComponentStoreReportVtbl;

    interface IDismComponentStoreReport
    {
        CONST_VTBL struct IDismComponentStoreReportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismComponentStoreReport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismComponentStoreReport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismComponentStoreReport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismComponentStoreReport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismComponentStoreReport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismComponentStoreReport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismComponentStoreReport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismComponentStoreReport_get_WinSxSVolatileSize(This,pVal)	\
    ( (This)->lpVtbl -> get_WinSxSVolatileSize(This,pVal) ) 

#define IDismComponentStoreReport_get_WinSxSNonVolatileSize(This,pVal)	\
    ( (This)->lpVtbl -> get_WinSxSNonVolatileSize(This,pVal) ) 

#define IDismComponentStoreReport_get_WinSxSSharedWithWindowsSize(This,pVal)	\
    ( (This)->lpVtbl -> get_WinSxSSharedWithWindowsSize(This,pVal) ) 

#define IDismComponentStoreReport_get_WinSxSAccordingToExplorerSize(This,pVal)	\
    ( (This)->lpVtbl -> get_WinSxSAccordingToExplorerSize(This,pVal) ) 

#define IDismComponentStoreReport_get_LastScavengeDateTime(This,pVal)	\
    ( (This)->lpVtbl -> get_LastScavengeDateTime(This,pVal) ) 

#define IDismComponentStoreReport_get_SupersededPackageCount(This,pVal)	\
    ( (This)->lpVtbl -> get_SupersededPackageCount(This,pVal) ) 

#define IDismComponentStoreReport_get_ComponentCleanupRecommended(This,pVal)	\
    ( (This)->lpVtbl -> get_ComponentCleanupRecommended(This,pVal) ) 

#define IDismComponentStoreReport_get_ActualSize(This,pVal)	\
    ( (This)->lpVtbl -> get_ActualSize(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismComponentStoreReport_INTERFACE_DEFINED__ */


#ifndef __IDismPackageManager4_INTERFACE_DEFINED__
#define __IDismPackageManager4_INTERFACE_DEFINED__

/* interface IDismPackageManager4 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageManager4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4DFD752A-1E5E-4C70-94FF-9C91B5F61335")
    IDismPackageManager4 : public IDismPackageManager3
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetCapabilityCollection( 
            /* [in] */ DISM_ON_DEMAND_SOURCE_FILTER SourceFilter,
            /* [retval][out] */ IDismCapabilityCollection **ppCapabilities) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE StartComponentCleanupEx( 
            /* [in] */ VARIANT_BOOL ResetBase,
            /* [in] */ DISM_RESETBASE_OPTION ResetBaseOption) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageManager4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageManager4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageManager4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageManager4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageManager4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageManager4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageManager4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageManager4 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompressionEnabled )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsImageUnserviceable )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByPath )( 
            IDismPackageManager4 * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByName )( 
            IDismPackageManager4 * This,
            /* [in] */ BSTR PackageName,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenFoundationPackage )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenMsuPackage )( 
            IDismPackageManager4 * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismMsuPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPublicFeature )( 
            IDismPackageManager4 * This,
            /* [in] */ BSTR FeatureName,
            /* [retval][out] */ IDismPackageFeature **Feature);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageCollection )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ IDismPackageCollection **ppPackages);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPublicFeatureCollection )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChanges )( 
            IDismPackageManager4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesWithOptions )( 
            IDismPackageManager4 * This,
            /* [in] */ unsigned int Options);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesPostReboot )( 
            IDismPackageManager4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Scavenge )( 
            IDismPackageManager4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RevertPendingActions )( 
            IDismPackageManager4 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsStoreCorrupt )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastCBSSessionID )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CBSSessionState )( 
            IDismPackageManager4 * This,
            /* [in] */ BSTR Id,
            /* [out] */ VARIANT_BOOL *Completed,
            /* [retval][out] */ HRESULT *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CleanupSize )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ unsigned long *pulSizeInMB);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PreventPending )( 
            IDismPackageManager4 * This,
            /* [in] */ VARIANT_BOOL rhs);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddSourcePath )( 
            IDismPackageManager4 * This,
            BSTR Path);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearSourcePaths )( 
            IDismPackageManager4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScanHealth )( 
            IDismPackageManager4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreHealth )( 
            IDismPackageManager4 * This,
            /* [in] */ VARIANT_BOOL LimitAccess);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartComponentCleanup )( 
            IDismPackageManager4 * This,
            /* [in] */ VARIANT_BOOL ResetBase);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WindowsUpdateCleanup )( 
            IDismPackageManager4 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AnalyzeComponentStore )( 
            IDismPackageManager4 * This,
            /* [retval][out] */ IDismComponentStoreReport **ppReport);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCapabilityCollection )( 
            IDismPackageManager4 * This,
            /* [in] */ DISM_ON_DEMAND_SOURCE_FILTER SourceFilter,
            /* [retval][out] */ IDismCapabilityCollection **ppCapabilities);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartComponentCleanupEx )( 
            IDismPackageManager4 * This,
            /* [in] */ VARIANT_BOOL ResetBase,
            /* [in] */ DISM_RESETBASE_OPTION ResetBaseOption);
        
        END_INTERFACE
    } IDismPackageManager4Vtbl;

    interface IDismPackageManager4
    {
        CONST_VTBL struct IDismPackageManager4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageManager4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageManager4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageManager4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageManager4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageManager4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageManager4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageManager4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageManager4_get_IsCompressionEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCompressionEnabled(This,pVal) ) 

#define IDismPackageManager4_get_IsImageUnserviceable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsImageUnserviceable(This,pVal) ) 

#define IDismPackageManager4_OpenPackageByPath(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenPackageByPath(This,PackageLocation,Package) ) 

#define IDismPackageManager4_OpenPackageByName(This,PackageName,Package)	\
    ( (This)->lpVtbl -> OpenPackageByName(This,PackageName,Package) ) 

#define IDismPackageManager4_OpenFoundationPackage(This,Package)	\
    ( (This)->lpVtbl -> OpenFoundationPackage(This,Package) ) 

#define IDismPackageManager4_OpenMsuPackage(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenMsuPackage(This,PackageLocation,Package) ) 

#define IDismPackageManager4_OpenPublicFeature(This,FeatureName,Feature)	\
    ( (This)->lpVtbl -> OpenPublicFeature(This,FeatureName,Feature) ) 

#define IDismPackageManager4_GetPackageCollection(This,ppPackages)	\
    ( (This)->lpVtbl -> GetPackageCollection(This,ppPackages) ) 

#define IDismPackageManager4_GetPublicFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPublicFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackageManager4_ProcessChanges(This)	\
    ( (This)->lpVtbl -> ProcessChanges(This) ) 

#define IDismPackageManager4_ProcessChangesWithOptions(This,Options)	\
    ( (This)->lpVtbl -> ProcessChangesWithOptions(This,Options) ) 

#define IDismPackageManager4_ProcessChangesPostReboot(This)	\
    ( (This)->lpVtbl -> ProcessChangesPostReboot(This) ) 

#define IDismPackageManager4_Scavenge(This)	\
    ( (This)->lpVtbl -> Scavenge(This) ) 

#define IDismPackageManager4_RevertPendingActions(This)	\
    ( (This)->lpVtbl -> RevertPendingActions(This) ) 


#define IDismPackageManager4_get_IsStoreCorrupt(This,pVal)	\
    ( (This)->lpVtbl -> get_IsStoreCorrupt(This,pVal) ) 

#define IDismPackageManager4_get_LastCBSSessionID(This,pVal)	\
    ( (This)->lpVtbl -> get_LastCBSSessionID(This,pVal) ) 

#define IDismPackageManager4_get_CBSSessionState(This,Id,Completed,pVal)	\
    ( (This)->lpVtbl -> get_CBSSessionState(This,Id,Completed,pVal) ) 

#define IDismPackageManager4_get_CleanupSize(This,pulSizeInMB)	\
    ( (This)->lpVtbl -> get_CleanupSize(This,pulSizeInMB) ) 

#define IDismPackageManager4_put_PreventPending(This,rhs)	\
    ( (This)->lpVtbl -> put_PreventPending(This,rhs) ) 

#define IDismPackageManager4_AddSourcePath(This,Path)	\
    ( (This)->lpVtbl -> AddSourcePath(This,Path) ) 

#define IDismPackageManager4_ClearSourcePaths(This)	\
    ( (This)->lpVtbl -> ClearSourcePaths(This) ) 

#define IDismPackageManager4_ScanHealth(This)	\
    ( (This)->lpVtbl -> ScanHealth(This) ) 

#define IDismPackageManager4_RestoreHealth(This,LimitAccess)	\
    ( (This)->lpVtbl -> RestoreHealth(This,LimitAccess) ) 

#define IDismPackageManager4_StartComponentCleanup(This,ResetBase)	\
    ( (This)->lpVtbl -> StartComponentCleanup(This,ResetBase) ) 

#define IDismPackageManager4_WindowsUpdateCleanup(This)	\
    ( (This)->lpVtbl -> WindowsUpdateCleanup(This) ) 


#define IDismPackageManager4_AnalyzeComponentStore(This,ppReport)	\
    ( (This)->lpVtbl -> AnalyzeComponentStore(This,ppReport) ) 


#define IDismPackageManager4_GetCapabilityCollection(This,SourceFilter,ppCapabilities)	\
    ( (This)->lpVtbl -> GetCapabilityCollection(This,SourceFilter,ppCapabilities) ) 

#define IDismPackageManager4_StartComponentCleanupEx(This,ResetBase,ResetBaseOption)	\
    ( (This)->lpVtbl -> StartComponentCleanupEx(This,ResetBase,ResetBaseOption) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageManager4_INTERFACE_DEFINED__ */


#ifndef __IDismPackageManager5_INTERFACE_DEFINED__
#define __IDismPackageManager5_INTERFACE_DEFINED__

/* interface IDismPackageManager5 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismPackageManager5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("BC8687E4-4B69-4749-878D-6DEF2746FC36")
    IDismPackageManager5 : public IDismPackageManager4
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            DISM_CONFIGURABLE_PROPERTY Property,
            BSTR PropertyValue) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE PerformOperation( 
            /* [in] */ unsigned int Options,
            /* [in] */ DISM_CBS_OPERATION_TYPE OperationType) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismPackageManager5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismPackageManager5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismPackageManager5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismPackageManager5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismPackageManager5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismPackageManager5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismPackageManager5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismPackageManager5 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsCompressionEnabled )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsImageUnserviceable )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByPath )( 
            IDismPackageManager5 * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByName )( 
            IDismPackageManager5 * This,
            /* [in] */ BSTR PackageName,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenFoundationPackage )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ IDismPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenMsuPackage )( 
            IDismPackageManager5 * This,
            /* [in] */ BSTR PackageLocation,
            /* [retval][out] */ IDismMsuPackage **Package);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPublicFeature )( 
            IDismPackageManager5 * This,
            /* [in] */ BSTR FeatureName,
            /* [retval][out] */ IDismPackageFeature **Feature);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPackageCollection )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ IDismPackageCollection **ppPackages);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetPublicFeatureCollection )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ IDismPackageFeatureCollection **ppPackageFeatures);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChanges )( 
            IDismPackageManager5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesWithOptions )( 
            IDismPackageManager5 * This,
            /* [in] */ unsigned int Options);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ProcessChangesPostReboot )( 
            IDismPackageManager5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Scavenge )( 
            IDismPackageManager5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RevertPendingActions )( 
            IDismPackageManager5 * This);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_IsStoreCorrupt )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ VARIANT_BOOL *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LastCBSSessionID )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ BSTR *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CBSSessionState )( 
            IDismPackageManager5 * This,
            /* [in] */ BSTR Id,
            /* [out] */ VARIANT_BOOL *Completed,
            /* [retval][out] */ HRESULT *pVal);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CleanupSize )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ unsigned long *pulSizeInMB);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_PreventPending )( 
            IDismPackageManager5 * This,
            /* [in] */ VARIANT_BOOL rhs);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AddSourcePath )( 
            IDismPackageManager5 * This,
            BSTR Path);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ClearSourcePaths )( 
            IDismPackageManager5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *ScanHealth )( 
            IDismPackageManager5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *RestoreHealth )( 
            IDismPackageManager5 * This,
            /* [in] */ VARIANT_BOOL LimitAccess);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartComponentCleanup )( 
            IDismPackageManager5 * This,
            /* [in] */ VARIANT_BOOL ResetBase);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *WindowsUpdateCleanup )( 
            IDismPackageManager5 * This);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *AnalyzeComponentStore )( 
            IDismPackageManager5 * This,
            /* [retval][out] */ IDismComponentStoreReport **ppReport);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCapabilityCollection )( 
            IDismPackageManager5 * This,
            /* [in] */ DISM_ON_DEMAND_SOURCE_FILTER SourceFilter,
            /* [retval][out] */ IDismCapabilityCollection **ppCapabilities);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *StartComponentCleanupEx )( 
            IDismPackageManager5 * This,
            /* [in] */ VARIANT_BOOL ResetBase,
            /* [in] */ DISM_RESETBASE_OPTION ResetBaseOption);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IDismPackageManager5 * This,
            DISM_CONFIGURABLE_PROPERTY Property,
            BSTR PropertyValue);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *PerformOperation )( 
            IDismPackageManager5 * This,
            /* [in] */ unsigned int Options,
            /* [in] */ DISM_CBS_OPERATION_TYPE OperationType);
        
        END_INTERFACE
    } IDismPackageManager5Vtbl;

    interface IDismPackageManager5
    {
        CONST_VTBL struct IDismPackageManager5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismPackageManager5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismPackageManager5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismPackageManager5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismPackageManager5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismPackageManager5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismPackageManager5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismPackageManager5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismPackageManager5_get_IsCompressionEnabled(This,pVal)	\
    ( (This)->lpVtbl -> get_IsCompressionEnabled(This,pVal) ) 

#define IDismPackageManager5_get_IsImageUnserviceable(This,pVal)	\
    ( (This)->lpVtbl -> get_IsImageUnserviceable(This,pVal) ) 

#define IDismPackageManager5_OpenPackageByPath(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenPackageByPath(This,PackageLocation,Package) ) 

#define IDismPackageManager5_OpenPackageByName(This,PackageName,Package)	\
    ( (This)->lpVtbl -> OpenPackageByName(This,PackageName,Package) ) 

#define IDismPackageManager5_OpenFoundationPackage(This,Package)	\
    ( (This)->lpVtbl -> OpenFoundationPackage(This,Package) ) 

#define IDismPackageManager5_OpenMsuPackage(This,PackageLocation,Package)	\
    ( (This)->lpVtbl -> OpenMsuPackage(This,PackageLocation,Package) ) 

#define IDismPackageManager5_OpenPublicFeature(This,FeatureName,Feature)	\
    ( (This)->lpVtbl -> OpenPublicFeature(This,FeatureName,Feature) ) 

#define IDismPackageManager5_GetPackageCollection(This,ppPackages)	\
    ( (This)->lpVtbl -> GetPackageCollection(This,ppPackages) ) 

#define IDismPackageManager5_GetPublicFeatureCollection(This,ppPackageFeatures)	\
    ( (This)->lpVtbl -> GetPublicFeatureCollection(This,ppPackageFeatures) ) 

#define IDismPackageManager5_ProcessChanges(This)	\
    ( (This)->lpVtbl -> ProcessChanges(This) ) 

#define IDismPackageManager5_ProcessChangesWithOptions(This,Options)	\
    ( (This)->lpVtbl -> ProcessChangesWithOptions(This,Options) ) 

#define IDismPackageManager5_ProcessChangesPostReboot(This)	\
    ( (This)->lpVtbl -> ProcessChangesPostReboot(This) ) 

#define IDismPackageManager5_Scavenge(This)	\
    ( (This)->lpVtbl -> Scavenge(This) ) 

#define IDismPackageManager5_RevertPendingActions(This)	\
    ( (This)->lpVtbl -> RevertPendingActions(This) ) 


#define IDismPackageManager5_get_IsStoreCorrupt(This,pVal)	\
    ( (This)->lpVtbl -> get_IsStoreCorrupt(This,pVal) ) 

#define IDismPackageManager5_get_LastCBSSessionID(This,pVal)	\
    ( (This)->lpVtbl -> get_LastCBSSessionID(This,pVal) ) 

#define IDismPackageManager5_get_CBSSessionState(This,Id,Completed,pVal)	\
    ( (This)->lpVtbl -> get_CBSSessionState(This,Id,Completed,pVal) ) 

#define IDismPackageManager5_get_CleanupSize(This,pulSizeInMB)	\
    ( (This)->lpVtbl -> get_CleanupSize(This,pulSizeInMB) ) 

#define IDismPackageManager5_put_PreventPending(This,rhs)	\
    ( (This)->lpVtbl -> put_PreventPending(This,rhs) ) 

#define IDismPackageManager5_AddSourcePath(This,Path)	\
    ( (This)->lpVtbl -> AddSourcePath(This,Path) ) 

#define IDismPackageManager5_ClearSourcePaths(This)	\
    ( (This)->lpVtbl -> ClearSourcePaths(This) ) 

#define IDismPackageManager5_ScanHealth(This)	\
    ( (This)->lpVtbl -> ScanHealth(This) ) 

#define IDismPackageManager5_RestoreHealth(This,LimitAccess)	\
    ( (This)->lpVtbl -> RestoreHealth(This,LimitAccess) ) 

#define IDismPackageManager5_StartComponentCleanup(This,ResetBase)	\
    ( (This)->lpVtbl -> StartComponentCleanup(This,ResetBase) ) 

#define IDismPackageManager5_WindowsUpdateCleanup(This)	\
    ( (This)->lpVtbl -> WindowsUpdateCleanup(This) ) 


#define IDismPackageManager5_AnalyzeComponentStore(This,ppReport)	\
    ( (This)->lpVtbl -> AnalyzeComponentStore(This,ppReport) ) 


#define IDismPackageManager5_GetCapabilityCollection(This,SourceFilter,ppCapabilities)	\
    ( (This)->lpVtbl -> GetCapabilityCollection(This,SourceFilter,ppCapabilities) ) 

#define IDismPackageManager5_StartComponentCleanupEx(This,ResetBase,ResetBaseOption)	\
    ( (This)->lpVtbl -> StartComponentCleanupEx(This,ResetBase,ResetBaseOption) ) 


#define IDismPackageManager5_SetProperty(This,Property,PropertyValue)	\
    ( (This)->lpVtbl -> SetProperty(This,Property,PropertyValue) ) 

#define IDismPackageManager5_PerformOperation(This,Options,OperationType)	\
    ( (This)->lpVtbl -> PerformOperation(This,Options,OperationType) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismPackageManager5_INTERFACE_DEFINED__ */


#ifndef __IDismServicePackScavenge_INTERFACE_DEFINED__
#define __IDismServicePackScavenge_INTERFACE_DEFINED__

/* interface IDismServicePackScavenge */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismServicePackScavenge;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A457B170-C9C3-499B-85BC-59259E92AE4D")
    IDismServicePackScavenge : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SPScavenge( 
            /* [in] */ VARIANT_BOOL bHideSpSpecified) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE SPScavengeable( 
            /* [out] */ VARIANT_BOOL *bScavenge,
            /* [out] */ long *plNumberOfSupersededSP) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE IsSystemPending( 
            /* [retval][out] */ VARIANT_BOOL *pbPending) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetCurrentEdition( 
            /* [out] */ BSTR *pszCurrentEdition,
            /* [out] */ long *plEditionsCount) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismServicePackScavengeVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismServicePackScavenge * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismServicePackScavenge * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismServicePackScavenge * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismServicePackScavenge * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismServicePackScavenge * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismServicePackScavenge * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismServicePackScavenge * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SPScavenge )( 
            IDismServicePackScavenge * This,
            /* [in] */ VARIANT_BOOL bHideSpSpecified);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *SPScavengeable )( 
            IDismServicePackScavenge * This,
            /* [out] */ VARIANT_BOOL *bScavenge,
            /* [out] */ long *plNumberOfSupersededSP);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *IsSystemPending )( 
            IDismServicePackScavenge * This,
            /* [retval][out] */ VARIANT_BOOL *pbPending);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentEdition )( 
            IDismServicePackScavenge * This,
            /* [out] */ BSTR *pszCurrentEdition,
            /* [out] */ long *plEditionsCount);
        
        END_INTERFACE
    } IDismServicePackScavengeVtbl;

    interface IDismServicePackScavenge
    {
        CONST_VTBL struct IDismServicePackScavengeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismServicePackScavenge_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismServicePackScavenge_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismServicePackScavenge_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismServicePackScavenge_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismServicePackScavenge_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismServicePackScavenge_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismServicePackScavenge_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismServicePackScavenge_SPScavenge(This,bHideSpSpecified)	\
    ( (This)->lpVtbl -> SPScavenge(This,bHideSpSpecified) ) 

#define IDismServicePackScavenge_SPScavengeable(This,bScavenge,plNumberOfSupersededSP)	\
    ( (This)->lpVtbl -> SPScavengeable(This,bScavenge,plNumberOfSupersededSP) ) 

#define IDismServicePackScavenge_IsSystemPending(This,pbPending)	\
    ( (This)->lpVtbl -> IsSystemPending(This,pbPending) ) 

#define IDismServicePackScavenge_GetCurrentEdition(This,pszCurrentEdition,plEditionsCount)	\
    ( (This)->lpVtbl -> GetCurrentEdition(This,pszCurrentEdition,plEditionsCount) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismServicePackScavenge_INTERFACE_DEFINED__ */


#ifndef __IDismXmlPackageManager_INTERFACE_DEFINED__
#define __IDismXmlPackageManager_INTERFACE_DEFINED__

/* interface IDismXmlPackageManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismXmlPackageManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C1817AEF-4351-4721-9A62-5DEDA9DA246C")
    IDismXmlPackageManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CheckXmlPackageApplicability( 
            /* [in] */ BSTR MetadataBlob,
            /* [out] */ VARIANT_BOOL *bApplicable,
            /* [out] */ VARIANT_BOOL *bInstalled) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismXmlPackageManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismXmlPackageManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismXmlPackageManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismXmlPackageManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismXmlPackageManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismXmlPackageManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismXmlPackageManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismXmlPackageManager * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CheckXmlPackageApplicability )( 
            IDismXmlPackageManager * This,
            /* [in] */ BSTR MetadataBlob,
            /* [out] */ VARIANT_BOOL *bApplicable,
            /* [out] */ VARIANT_BOOL *bInstalled);
        
        END_INTERFACE
    } IDismXmlPackageManagerVtbl;

    interface IDismXmlPackageManager
    {
        CONST_VTBL struct IDismXmlPackageManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismXmlPackageManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismXmlPackageManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismXmlPackageManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismXmlPackageManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismXmlPackageManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismXmlPackageManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismXmlPackageManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismXmlPackageManager_CheckXmlPackageApplicability(This,MetadataBlob,bApplicable,bInstalled)	\
    ( (This)->lpVtbl -> CheckXmlPackageApplicability(This,MetadataBlob,bApplicable,bInstalled) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismXmlPackageManager_INTERFACE_DEFINED__ */


#ifndef __IDismDriverManager_INTERFACE_DEFINED__
#define __IDismDriverManager_INTERFACE_DEFINED__

/* interface IDismDriverManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDriverManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6A064B65-3CEC-491B-A2D4-8D1D4DA6DECC")
    IDismDriverManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDriverPackageCollection( 
            /* [in] */ DRIVER_COLL_OUTPUT CollType,
            /* [retval][out] */ IDismDriverPackageCollection **DriverPackages) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPackageByFile( 
            /* [in] */ BSTR PackageInf,
            /* [retval][out] */ IDismDriverPackage **DriverPackage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPackageByFolder( 
            /* [in] */ BSTR PackageFolder,
            /* [in] */ VARIANT_BOOL SearchSubFolders,
            /* [out] */ IDismErrorCollection **Errors,
            /* [retval][out] */ IDismDriverPackageCollection **DriverPackages) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPackageInStore( 
            /* [in] */ BSTR PackageName,
            /* [retval][out] */ IDismDriverPackage **DriverPackage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDriverManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDriverManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDriverManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDriverManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDriverManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDriverManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDriverManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDriverManager * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDriverPackageCollection )( 
            IDismDriverManager * This,
            /* [in] */ DRIVER_COLL_OUTPUT CollType,
            /* [retval][out] */ IDismDriverPackageCollection **DriverPackages);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByFile )( 
            IDismDriverManager * This,
            /* [in] */ BSTR PackageInf,
            /* [retval][out] */ IDismDriverPackage **DriverPackage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageByFolder )( 
            IDismDriverManager * This,
            /* [in] */ BSTR PackageFolder,
            /* [in] */ VARIANT_BOOL SearchSubFolders,
            /* [out] */ IDismErrorCollection **Errors,
            /* [retval][out] */ IDismDriverPackageCollection **DriverPackages);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPackageInStore )( 
            IDismDriverManager * This,
            /* [in] */ BSTR PackageName,
            /* [retval][out] */ IDismDriverPackage **DriverPackage);
        
        END_INTERFACE
    } IDismDriverManagerVtbl;

    interface IDismDriverManager
    {
        CONST_VTBL struct IDismDriverManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDriverManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDriverManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDriverManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDriverManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDriverManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDriverManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDriverManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDriverManager_GetDriverPackageCollection(This,CollType,DriverPackages)	\
    ( (This)->lpVtbl -> GetDriverPackageCollection(This,CollType,DriverPackages) ) 

#define IDismDriverManager_OpenPackageByFile(This,PackageInf,DriverPackage)	\
    ( (This)->lpVtbl -> OpenPackageByFile(This,PackageInf,DriverPackage) ) 

#define IDismDriverManager_OpenPackageByFolder(This,PackageFolder,SearchSubFolders,Errors,DriverPackages)	\
    ( (This)->lpVtbl -> OpenPackageByFolder(This,PackageFolder,SearchSubFolders,Errors,DriverPackages) ) 

#define IDismDriverManager_OpenPackageInStore(This,PackageName,DriverPackage)	\
    ( (This)->lpVtbl -> OpenPackageInStore(This,PackageName,DriverPackage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDriverManager_INTERFACE_DEFINED__ */


#ifndef __IDismDriverPackageCollection_INTERFACE_DEFINED__
#define __IDismDriverPackageCollection_INTERFACE_DEFINED__

/* interface IDismDriverPackageCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDriverPackageCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("45554AF5-6058-4913-8E5F-C9B79D5995CF")
    IDismDriverPackageCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismDriverPackage **Driver) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDriverPackageCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDriverPackageCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDriverPackageCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDriverPackageCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDriverPackageCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDriverPackageCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDriverPackageCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDriverPackageCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismDriverPackageCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismDriverPackageCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismDriverPackage **Driver);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismDriverPackageCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismDriverPackageCollectionVtbl;

    interface IDismDriverPackageCollection
    {
        CONST_VTBL struct IDismDriverPackageCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDriverPackageCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDriverPackageCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDriverPackageCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDriverPackageCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDriverPackageCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDriverPackageCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDriverPackageCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDriverPackageCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismDriverPackageCollection_get_Item(This,n,Driver)	\
    ( (This)->lpVtbl -> get_Item(This,n,Driver) ) 

#define IDismDriverPackageCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDriverPackageCollection_INTERFACE_DEFINED__ */


#ifndef __IDismDriverPackage_INTERFACE_DEFINED__
#define __IDismDriverPackage_INTERFACE_DEFINED__

/* interface IDismDriverPackage */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDriverPackage;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1AF61D22-D513-4417-8838-61F8724EDC4F")
    IDismDriverPackage : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDriverCollection( 
            /* [in] */ long Architecture,
            /* [retval][out] */ IDismDriverCollection **Drivers) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_LocaleName( 
            /* [retval][out] */ BSTR *LocaleName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InfProviderName( 
            /* [retval][out] */ BSTR *Name) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InBox( 
            /* [retval][out] */ VARIANT_BOOL *InBox) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CatalogFile( 
            /* [retval][out] */ BSTR *CatalogFile) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InfPath( 
            /* [retval][out] */ BSTR *InfPath) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PublishedInfName( 
            /* [retval][out] */ BSTR *InfName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClassGuid( 
            /* [retval][out] */ BSTR *ClassGuid) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClassName( 
            /* [retval][out] */ BSTR *ClassName) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ClassDescription( 
            /* [retval][out] */ BSTR *ClassDesc) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_BootCritical( 
            /* [retval][out] */ VARIANT_BOOL *BootCritical) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_SignatureStatus( 
            /* [retval][out] */ DRIVER_SIG_STATUS *SigStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDate( 
            /* [out] */ long *Year,
            /* [out] */ long *Month,
            /* [out] */ long *Day) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetVersion( 
            /* [out] */ long *Major,
            /* [out] */ long *Minor,
            /* [out] */ long *Build,
            /* [out] */ long *Revision) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Install( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Remove( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDriverPackageVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDriverPackage * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDriverPackage * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDriverPackage * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDriverPackage * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDriverPackage * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDriverPackage * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDriverPackage * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDriverCollection )( 
            IDismDriverPackage * This,
            /* [in] */ long Architecture,
            /* [retval][out] */ IDismDriverCollection **Drivers);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LocaleName )( 
            IDismDriverPackage * This,
            /* [retval][out] */ BSTR *LocaleName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfProviderName )( 
            IDismDriverPackage * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBox )( 
            IDismDriverPackage * This,
            /* [retval][out] */ VARIANT_BOOL *InBox);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CatalogFile )( 
            IDismDriverPackage * This,
            /* [retval][out] */ BSTR *CatalogFile);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfPath )( 
            IDismDriverPackage * This,
            /* [retval][out] */ BSTR *InfPath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublishedInfName )( 
            IDismDriverPackage * This,
            /* [retval][out] */ BSTR *InfName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassGuid )( 
            IDismDriverPackage * This,
            /* [retval][out] */ BSTR *ClassGuid);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IDismDriverPackage * This,
            /* [retval][out] */ BSTR *ClassName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassDescription )( 
            IDismDriverPackage * This,
            /* [retval][out] */ BSTR *ClassDesc);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BootCritical )( 
            IDismDriverPackage * This,
            /* [retval][out] */ VARIANT_BOOL *BootCritical);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )( 
            IDismDriverPackage * This,
            /* [retval][out] */ DRIVER_SIG_STATUS *SigStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IDismDriverPackage * This,
            /* [out] */ long *Year,
            /* [out] */ long *Month,
            /* [out] */ long *Day);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IDismDriverPackage * This,
            /* [out] */ long *Major,
            /* [out] */ long *Minor,
            /* [out] */ long *Build,
            /* [out] */ long *Revision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismDriverPackage * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDismDriverPackage * This);
        
        END_INTERFACE
    } IDismDriverPackageVtbl;

    interface IDismDriverPackage
    {
        CONST_VTBL struct IDismDriverPackageVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDriverPackage_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDriverPackage_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDriverPackage_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDriverPackage_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDriverPackage_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDriverPackage_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDriverPackage_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDriverPackage_GetDriverCollection(This,Architecture,Drivers)	\
    ( (This)->lpVtbl -> GetDriverCollection(This,Architecture,Drivers) ) 

#define IDismDriverPackage_get_LocaleName(This,LocaleName)	\
    ( (This)->lpVtbl -> get_LocaleName(This,LocaleName) ) 

#define IDismDriverPackage_get_InfProviderName(This,Name)	\
    ( (This)->lpVtbl -> get_InfProviderName(This,Name) ) 

#define IDismDriverPackage_get_InBox(This,InBox)	\
    ( (This)->lpVtbl -> get_InBox(This,InBox) ) 

#define IDismDriverPackage_get_CatalogFile(This,CatalogFile)	\
    ( (This)->lpVtbl -> get_CatalogFile(This,CatalogFile) ) 

#define IDismDriverPackage_get_InfPath(This,InfPath)	\
    ( (This)->lpVtbl -> get_InfPath(This,InfPath) ) 

#define IDismDriverPackage_get_PublishedInfName(This,InfName)	\
    ( (This)->lpVtbl -> get_PublishedInfName(This,InfName) ) 

#define IDismDriverPackage_get_ClassGuid(This,ClassGuid)	\
    ( (This)->lpVtbl -> get_ClassGuid(This,ClassGuid) ) 

#define IDismDriverPackage_get_ClassName(This,ClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,ClassName) ) 

#define IDismDriverPackage_get_ClassDescription(This,ClassDesc)	\
    ( (This)->lpVtbl -> get_ClassDescription(This,ClassDesc) ) 

#define IDismDriverPackage_get_BootCritical(This,BootCritical)	\
    ( (This)->lpVtbl -> get_BootCritical(This,BootCritical) ) 

#define IDismDriverPackage_get_SignatureStatus(This,SigStatus)	\
    ( (This)->lpVtbl -> get_SignatureStatus(This,SigStatus) ) 

#define IDismDriverPackage_GetDate(This,Year,Month,Day)	\
    ( (This)->lpVtbl -> GetDate(This,Year,Month,Day) ) 

#define IDismDriverPackage_GetVersion(This,Major,Minor,Build,Revision)	\
    ( (This)->lpVtbl -> GetVersion(This,Major,Minor,Build,Revision) ) 

#define IDismDriverPackage_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismDriverPackage_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDriverPackage_INTERFACE_DEFINED__ */


#ifndef __IDismDriverCollection_INTERFACE_DEFINED__
#define __IDismDriverCollection_INTERFACE_DEFINED__

/* interface IDismDriverCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDriverCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("4E1CB72F-C47D-42EE-8CCA-4CEB35B3FE17")
    IDismDriverCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismDriver **Driver) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDriverCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDriverCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDriverCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDriverCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDriverCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDriverCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDriverCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDriverCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismDriverCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismDriverCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismDriver **Driver);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismDriverCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismDriverCollectionVtbl;

    interface IDismDriverCollection
    {
        CONST_VTBL struct IDismDriverCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDriverCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDriverCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDriverCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDriverCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDriverCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDriverCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDriverCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDriverCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismDriverCollection_get_Item(This,n,Driver)	\
    ( (This)->lpVtbl -> get_Item(This,n,Driver) ) 

#define IDismDriverCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDriverCollection_INTERFACE_DEFINED__ */


#ifndef __IDismDriver_INTERFACE_DEFINED__
#define __IDismDriver_INTERFACE_DEFINED__

/* interface IDismDriver */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDriver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3B6BBFA2-F817-423B-A83C-103AD54615D4")
    IDismDriver : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ParentPackage( 
            /* [retval][out] */ IDismDriverPackage **Package) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Manufacturer( 
            /* [retval][out] */ BSTR *Manufacturer) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Description( 
            /* [retval][out] */ BSTR *Description) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_HardwareId( 
            /* [retval][out] */ BSTR *HardwareId) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Architecture( 
            /* [retval][out] */ long *Architecture) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ServiceName( 
            /* [retval][out] */ BSTR *HardwareId) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_CompatibleIds( 
            /* [retval][out] */ IDismDeviceIdCollection **DeviceIds) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ExcludeIds( 
            /* [retval][out] */ IDismDeviceIdCollection **DeviceIds) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDriverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDriver * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDriver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDriver * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDriver * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDriver * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDriver * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDriver * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ParentPackage )( 
            IDismDriver * This,
            /* [retval][out] */ IDismDriverPackage **Package);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Manufacturer )( 
            IDismDriver * This,
            /* [retval][out] */ BSTR *Manufacturer);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Description )( 
            IDismDriver * This,
            /* [retval][out] */ BSTR *Description);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_HardwareId )( 
            IDismDriver * This,
            /* [retval][out] */ BSTR *HardwareId);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Architecture )( 
            IDismDriver * This,
            /* [retval][out] */ long *Architecture);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ServiceName )( 
            IDismDriver * This,
            /* [retval][out] */ BSTR *HardwareId);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CompatibleIds )( 
            IDismDriver * This,
            /* [retval][out] */ IDismDeviceIdCollection **DeviceIds);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ExcludeIds )( 
            IDismDriver * This,
            /* [retval][out] */ IDismDeviceIdCollection **DeviceIds);
        
        END_INTERFACE
    } IDismDriverVtbl;

    interface IDismDriver
    {
        CONST_VTBL struct IDismDriverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDriver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDriver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDriver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDriver_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDriver_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDriver_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDriver_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDriver_get_ParentPackage(This,Package)	\
    ( (This)->lpVtbl -> get_ParentPackage(This,Package) ) 

#define IDismDriver_get_Manufacturer(This,Manufacturer)	\
    ( (This)->lpVtbl -> get_Manufacturer(This,Manufacturer) ) 

#define IDismDriver_get_Description(This,Description)	\
    ( (This)->lpVtbl -> get_Description(This,Description) ) 

#define IDismDriver_get_HardwareId(This,HardwareId)	\
    ( (This)->lpVtbl -> get_HardwareId(This,HardwareId) ) 

#define IDismDriver_get_Architecture(This,Architecture)	\
    ( (This)->lpVtbl -> get_Architecture(This,Architecture) ) 

#define IDismDriver_get_ServiceName(This,HardwareId)	\
    ( (This)->lpVtbl -> get_ServiceName(This,HardwareId) ) 

#define IDismDriver_get_CompatibleIds(This,DeviceIds)	\
    ( (This)->lpVtbl -> get_CompatibleIds(This,DeviceIds) ) 

#define IDismDriver_get_ExcludeIds(This,DeviceIds)	\
    ( (This)->lpVtbl -> get_ExcludeIds(This,DeviceIds) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDriver_INTERFACE_DEFINED__ */


#ifndef __IDismDeviceIdCollection_INTERFACE_DEFINED__
#define __IDismDeviceIdCollection_INTERFACE_DEFINED__

/* interface IDismDeviceIdCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDeviceIdCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("A3CCF844-82C9-431E-8D29-5BD09F8C9B70")
    IDismDeviceIdCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ BSTR *pVal) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDeviceIdCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDeviceIdCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDeviceIdCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDeviceIdCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDeviceIdCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDeviceIdCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDeviceIdCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDeviceIdCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismDeviceIdCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismDeviceIdCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ BSTR *pVal);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismDeviceIdCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismDeviceIdCollectionVtbl;

    interface IDismDeviceIdCollection
    {
        CONST_VTBL struct IDismDeviceIdCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDeviceIdCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDeviceIdCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDeviceIdCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDeviceIdCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDeviceIdCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDeviceIdCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDeviceIdCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDeviceIdCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismDeviceIdCollection_get_Item(This,n,pVal)	\
    ( (This)->lpVtbl -> get_Item(This,n,pVal) ) 

#define IDismDeviceIdCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDeviceIdCollection_INTERFACE_DEFINED__ */


#ifndef __IDismDriverPackage2_INTERFACE_DEFINED__
#define __IDismDriverPackage2_INTERFACE_DEFINED__

/* interface IDismDriverPackage2 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDriverPackage2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("671FCAAF-CF96-4B46-AC3D-7B968FBBCC3F")
    IDismDriverPackage2 : public IDismDriverPackage
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InstallEx( 
            /* [in] */ DRIVER_INSTALL_FLAGS Flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDriverPackage2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDriverPackage2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDriverPackage2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDriverPackage2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDriverPackage2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDriverPackage2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDriverPackage2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDriverPackage2 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDriverCollection )( 
            IDismDriverPackage2 * This,
            /* [in] */ long Architecture,
            /* [retval][out] */ IDismDriverCollection **Drivers);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LocaleName )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ BSTR *LocaleName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfProviderName )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBox )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ VARIANT_BOOL *InBox);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CatalogFile )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ BSTR *CatalogFile);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfPath )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ BSTR *InfPath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublishedInfName )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ BSTR *InfName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassGuid )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ BSTR *ClassGuid);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ BSTR *ClassName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassDescription )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ BSTR *ClassDesc);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BootCritical )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ VARIANT_BOOL *BootCritical);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )( 
            IDismDriverPackage2 * This,
            /* [retval][out] */ DRIVER_SIG_STATUS *SigStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IDismDriverPackage2 * This,
            /* [out] */ long *Year,
            /* [out] */ long *Month,
            /* [out] */ long *Day);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IDismDriverPackage2 * This,
            /* [out] */ long *Major,
            /* [out] */ long *Minor,
            /* [out] */ long *Build,
            /* [out] */ long *Revision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismDriverPackage2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDismDriverPackage2 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallEx )( 
            IDismDriverPackage2 * This,
            /* [in] */ DRIVER_INSTALL_FLAGS Flags);
        
        END_INTERFACE
    } IDismDriverPackage2Vtbl;

    interface IDismDriverPackage2
    {
        CONST_VTBL struct IDismDriverPackage2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDriverPackage2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDriverPackage2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDriverPackage2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDriverPackage2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDriverPackage2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDriverPackage2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDriverPackage2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDriverPackage2_GetDriverCollection(This,Architecture,Drivers)	\
    ( (This)->lpVtbl -> GetDriverCollection(This,Architecture,Drivers) ) 

#define IDismDriverPackage2_get_LocaleName(This,LocaleName)	\
    ( (This)->lpVtbl -> get_LocaleName(This,LocaleName) ) 

#define IDismDriverPackage2_get_InfProviderName(This,Name)	\
    ( (This)->lpVtbl -> get_InfProviderName(This,Name) ) 

#define IDismDriverPackage2_get_InBox(This,InBox)	\
    ( (This)->lpVtbl -> get_InBox(This,InBox) ) 

#define IDismDriverPackage2_get_CatalogFile(This,CatalogFile)	\
    ( (This)->lpVtbl -> get_CatalogFile(This,CatalogFile) ) 

#define IDismDriverPackage2_get_InfPath(This,InfPath)	\
    ( (This)->lpVtbl -> get_InfPath(This,InfPath) ) 

#define IDismDriverPackage2_get_PublishedInfName(This,InfName)	\
    ( (This)->lpVtbl -> get_PublishedInfName(This,InfName) ) 

#define IDismDriverPackage2_get_ClassGuid(This,ClassGuid)	\
    ( (This)->lpVtbl -> get_ClassGuid(This,ClassGuid) ) 

#define IDismDriverPackage2_get_ClassName(This,ClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,ClassName) ) 

#define IDismDriverPackage2_get_ClassDescription(This,ClassDesc)	\
    ( (This)->lpVtbl -> get_ClassDescription(This,ClassDesc) ) 

#define IDismDriverPackage2_get_BootCritical(This,BootCritical)	\
    ( (This)->lpVtbl -> get_BootCritical(This,BootCritical) ) 

#define IDismDriverPackage2_get_SignatureStatus(This,SigStatus)	\
    ( (This)->lpVtbl -> get_SignatureStatus(This,SigStatus) ) 

#define IDismDriverPackage2_GetDate(This,Year,Month,Day)	\
    ( (This)->lpVtbl -> GetDate(This,Year,Month,Day) ) 

#define IDismDriverPackage2_GetVersion(This,Major,Minor,Build,Revision)	\
    ( (This)->lpVtbl -> GetVersion(This,Major,Minor,Build,Revision) ) 

#define IDismDriverPackage2_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismDriverPackage2_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 


#define IDismDriverPackage2_InstallEx(This,Flags)	\
    ( (This)->lpVtbl -> InstallEx(This,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDriverPackage2_INTERFACE_DEFINED__ */


#ifndef __IDismDriverPackage3_INTERFACE_DEFINED__
#define __IDismDriverPackage3_INTERFACE_DEFINED__

/* interface IDismDriverPackage3 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDriverPackage3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("04F36A61-A37D-406D-A320-0708444F3E26")
    IDismDriverPackage3 : public IDismDriverPackage2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InstallEx2( 
            /* [in] */ DRIVER_INSTALL_FLAGS Flags,
            /* [out][in] */ IDismDriverPackage **StorePackage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProperty( 
            /* [in] */ _DEVPROPKEY *PropertyKey,
            /* [in] */ unsigned long PropertyType,
            /* [in] */ SAFEARRAY * PropertyBuffer,
            /* [in] */ unsigned long Flags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProperty( 
            /* [in] */ _DEVPROPKEY *PropertyKey,
            /* [out][in] */ unsigned long *PropertyType,
            /* [out][in] */ SAFEARRAY * *PropertyBuffer,
            /* [in] */ unsigned long Flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDriverPackage3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDriverPackage3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDriverPackage3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDriverPackage3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDriverPackage3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDriverPackage3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDriverPackage3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDriverPackage3 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDriverCollection )( 
            IDismDriverPackage3 * This,
            /* [in] */ long Architecture,
            /* [retval][out] */ IDismDriverCollection **Drivers);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LocaleName )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ BSTR *LocaleName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfProviderName )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBox )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ VARIANT_BOOL *InBox);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CatalogFile )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ BSTR *CatalogFile);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfPath )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ BSTR *InfPath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublishedInfName )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ BSTR *InfName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassGuid )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ BSTR *ClassGuid);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ BSTR *ClassName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassDescription )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ BSTR *ClassDesc);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BootCritical )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ VARIANT_BOOL *BootCritical);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )( 
            IDismDriverPackage3 * This,
            /* [retval][out] */ DRIVER_SIG_STATUS *SigStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IDismDriverPackage3 * This,
            /* [out] */ long *Year,
            /* [out] */ long *Month,
            /* [out] */ long *Day);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IDismDriverPackage3 * This,
            /* [out] */ long *Major,
            /* [out] */ long *Minor,
            /* [out] */ long *Build,
            /* [out] */ long *Revision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismDriverPackage3 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDismDriverPackage3 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallEx )( 
            IDismDriverPackage3 * This,
            /* [in] */ DRIVER_INSTALL_FLAGS Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallEx2 )( 
            IDismDriverPackage3 * This,
            /* [in] */ DRIVER_INSTALL_FLAGS Flags,
            /* [out][in] */ IDismDriverPackage **StorePackage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IDismDriverPackage3 * This,
            /* [in] */ _DEVPROPKEY *PropertyKey,
            /* [in] */ unsigned long PropertyType,
            /* [in] */ SAFEARRAY * PropertyBuffer,
            /* [in] */ unsigned long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IDismDriverPackage3 * This,
            /* [in] */ _DEVPROPKEY *PropertyKey,
            /* [out][in] */ unsigned long *PropertyType,
            /* [out][in] */ SAFEARRAY * *PropertyBuffer,
            /* [in] */ unsigned long Flags);
        
        END_INTERFACE
    } IDismDriverPackage3Vtbl;

    interface IDismDriverPackage3
    {
        CONST_VTBL struct IDismDriverPackage3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDriverPackage3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDriverPackage3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDriverPackage3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDriverPackage3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDriverPackage3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDriverPackage3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDriverPackage3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDriverPackage3_GetDriverCollection(This,Architecture,Drivers)	\
    ( (This)->lpVtbl -> GetDriverCollection(This,Architecture,Drivers) ) 

#define IDismDriverPackage3_get_LocaleName(This,LocaleName)	\
    ( (This)->lpVtbl -> get_LocaleName(This,LocaleName) ) 

#define IDismDriverPackage3_get_InfProviderName(This,Name)	\
    ( (This)->lpVtbl -> get_InfProviderName(This,Name) ) 

#define IDismDriverPackage3_get_InBox(This,InBox)	\
    ( (This)->lpVtbl -> get_InBox(This,InBox) ) 

#define IDismDriverPackage3_get_CatalogFile(This,CatalogFile)	\
    ( (This)->lpVtbl -> get_CatalogFile(This,CatalogFile) ) 

#define IDismDriverPackage3_get_InfPath(This,InfPath)	\
    ( (This)->lpVtbl -> get_InfPath(This,InfPath) ) 

#define IDismDriverPackage3_get_PublishedInfName(This,InfName)	\
    ( (This)->lpVtbl -> get_PublishedInfName(This,InfName) ) 

#define IDismDriverPackage3_get_ClassGuid(This,ClassGuid)	\
    ( (This)->lpVtbl -> get_ClassGuid(This,ClassGuid) ) 

#define IDismDriverPackage3_get_ClassName(This,ClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,ClassName) ) 

#define IDismDriverPackage3_get_ClassDescription(This,ClassDesc)	\
    ( (This)->lpVtbl -> get_ClassDescription(This,ClassDesc) ) 

#define IDismDriverPackage3_get_BootCritical(This,BootCritical)	\
    ( (This)->lpVtbl -> get_BootCritical(This,BootCritical) ) 

#define IDismDriverPackage3_get_SignatureStatus(This,SigStatus)	\
    ( (This)->lpVtbl -> get_SignatureStatus(This,SigStatus) ) 

#define IDismDriverPackage3_GetDate(This,Year,Month,Day)	\
    ( (This)->lpVtbl -> GetDate(This,Year,Month,Day) ) 

#define IDismDriverPackage3_GetVersion(This,Major,Minor,Build,Revision)	\
    ( (This)->lpVtbl -> GetVersion(This,Major,Minor,Build,Revision) ) 

#define IDismDriverPackage3_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismDriverPackage3_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 


#define IDismDriverPackage3_InstallEx(This,Flags)	\
    ( (This)->lpVtbl -> InstallEx(This,Flags) ) 


#define IDismDriverPackage3_InstallEx2(This,Flags,StorePackage)	\
    ( (This)->lpVtbl -> InstallEx2(This,Flags,StorePackage) ) 

#define IDismDriverPackage3_SetProperty(This,PropertyKey,PropertyType,PropertyBuffer,Flags)	\
    ( (This)->lpVtbl -> SetProperty(This,PropertyKey,PropertyType,PropertyBuffer,Flags) ) 

#define IDismDriverPackage3_GetProperty(This,PropertyKey,PropertyType,PropertyBuffer,Flags)	\
    ( (This)->lpVtbl -> GetProperty(This,PropertyKey,PropertyType,PropertyBuffer,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDriverPackage3_INTERFACE_DEFINED__ */


#ifndef __IDismDriverPackage4_INTERFACE_DEFINED__
#define __IDismDriverPackage4_INTERFACE_DEFINED__

/* interface IDismDriverPackage4 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismDriverPackage4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6D9208E3-17B2-46C2-B902-2433CC8CF0FD")
    IDismDriverPackage4 : public IDismDriverPackage3
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_TargetProcessorArchitecture( 
            /* [retval][out] */ long *Architecture) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_TargetProcessorArchitecture( 
            /* [in] */ long Architecture) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismDriverPackage4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismDriverPackage4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismDriverPackage4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismDriverPackage4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismDriverPackage4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismDriverPackage4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismDriverPackage4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismDriverPackage4 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDriverCollection )( 
            IDismDriverPackage4 * This,
            /* [in] */ long Architecture,
            /* [retval][out] */ IDismDriverCollection **Drivers);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_LocaleName )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ BSTR *LocaleName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfProviderName )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ BSTR *Name);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InBox )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ VARIANT_BOOL *InBox);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_CatalogFile )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ BSTR *CatalogFile);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InfPath )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ BSTR *InfPath);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublishedInfName )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ BSTR *InfName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassGuid )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ BSTR *ClassGuid);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassName )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ BSTR *ClassName);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ClassDescription )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ BSTR *ClassDesc);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_BootCritical )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ VARIANT_BOOL *BootCritical);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ DRIVER_SIG_STATUS *SigStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDate )( 
            IDismDriverPackage4 * This,
            /* [out] */ long *Year,
            /* [out] */ long *Month,
            /* [out] */ long *Day);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetVersion )( 
            IDismDriverPackage4 * This,
            /* [out] */ long *Major,
            /* [out] */ long *Minor,
            /* [out] */ long *Build,
            /* [out] */ long *Revision);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Install )( 
            IDismDriverPackage4 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Remove )( 
            IDismDriverPackage4 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallEx )( 
            IDismDriverPackage4 * This,
            /* [in] */ DRIVER_INSTALL_FLAGS Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InstallEx2 )( 
            IDismDriverPackage4 * This,
            /* [in] */ DRIVER_INSTALL_FLAGS Flags,
            /* [out][in] */ IDismDriverPackage **StorePackage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProperty )( 
            IDismDriverPackage4 * This,
            /* [in] */ _DEVPROPKEY *PropertyKey,
            /* [in] */ unsigned long PropertyType,
            /* [in] */ SAFEARRAY * PropertyBuffer,
            /* [in] */ unsigned long Flags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProperty )( 
            IDismDriverPackage4 * This,
            /* [in] */ _DEVPROPKEY *PropertyKey,
            /* [out][in] */ unsigned long *PropertyType,
            /* [out][in] */ SAFEARRAY * *PropertyBuffer,
            /* [in] */ unsigned long Flags);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_TargetProcessorArchitecture )( 
            IDismDriverPackage4 * This,
            /* [retval][out] */ long *Architecture);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_TargetProcessorArchitecture )( 
            IDismDriverPackage4 * This,
            /* [in] */ long Architecture);
        
        END_INTERFACE
    } IDismDriverPackage4Vtbl;

    interface IDismDriverPackage4
    {
        CONST_VTBL struct IDismDriverPackage4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismDriverPackage4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismDriverPackage4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismDriverPackage4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismDriverPackage4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismDriverPackage4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismDriverPackage4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismDriverPackage4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismDriverPackage4_GetDriverCollection(This,Architecture,Drivers)	\
    ( (This)->lpVtbl -> GetDriverCollection(This,Architecture,Drivers) ) 

#define IDismDriverPackage4_get_LocaleName(This,LocaleName)	\
    ( (This)->lpVtbl -> get_LocaleName(This,LocaleName) ) 

#define IDismDriverPackage4_get_InfProviderName(This,Name)	\
    ( (This)->lpVtbl -> get_InfProviderName(This,Name) ) 

#define IDismDriverPackage4_get_InBox(This,InBox)	\
    ( (This)->lpVtbl -> get_InBox(This,InBox) ) 

#define IDismDriverPackage4_get_CatalogFile(This,CatalogFile)	\
    ( (This)->lpVtbl -> get_CatalogFile(This,CatalogFile) ) 

#define IDismDriverPackage4_get_InfPath(This,InfPath)	\
    ( (This)->lpVtbl -> get_InfPath(This,InfPath) ) 

#define IDismDriverPackage4_get_PublishedInfName(This,InfName)	\
    ( (This)->lpVtbl -> get_PublishedInfName(This,InfName) ) 

#define IDismDriverPackage4_get_ClassGuid(This,ClassGuid)	\
    ( (This)->lpVtbl -> get_ClassGuid(This,ClassGuid) ) 

#define IDismDriverPackage4_get_ClassName(This,ClassName)	\
    ( (This)->lpVtbl -> get_ClassName(This,ClassName) ) 

#define IDismDriverPackage4_get_ClassDescription(This,ClassDesc)	\
    ( (This)->lpVtbl -> get_ClassDescription(This,ClassDesc) ) 

#define IDismDriverPackage4_get_BootCritical(This,BootCritical)	\
    ( (This)->lpVtbl -> get_BootCritical(This,BootCritical) ) 

#define IDismDriverPackage4_get_SignatureStatus(This,SigStatus)	\
    ( (This)->lpVtbl -> get_SignatureStatus(This,SigStatus) ) 

#define IDismDriverPackage4_GetDate(This,Year,Month,Day)	\
    ( (This)->lpVtbl -> GetDate(This,Year,Month,Day) ) 

#define IDismDriverPackage4_GetVersion(This,Major,Minor,Build,Revision)	\
    ( (This)->lpVtbl -> GetVersion(This,Major,Minor,Build,Revision) ) 

#define IDismDriverPackage4_Install(This)	\
    ( (This)->lpVtbl -> Install(This) ) 

#define IDismDriverPackage4_Remove(This)	\
    ( (This)->lpVtbl -> Remove(This) ) 


#define IDismDriverPackage4_InstallEx(This,Flags)	\
    ( (This)->lpVtbl -> InstallEx(This,Flags) ) 


#define IDismDriverPackage4_InstallEx2(This,Flags,StorePackage)	\
    ( (This)->lpVtbl -> InstallEx2(This,Flags,StorePackage) ) 

#define IDismDriverPackage4_SetProperty(This,PropertyKey,PropertyType,PropertyBuffer,Flags)	\
    ( (This)->lpVtbl -> SetProperty(This,PropertyKey,PropertyType,PropertyBuffer,Flags) ) 

#define IDismDriverPackage4_GetProperty(This,PropertyKey,PropertyType,PropertyBuffer,Flags)	\
    ( (This)->lpVtbl -> GetProperty(This,PropertyKey,PropertyType,PropertyBuffer,Flags) ) 


#define IDismDriverPackage4_get_TargetProcessorArchitecture(This,Architecture)	\
    ( (This)->lpVtbl -> get_TargetProcessorArchitecture(This,Architecture) ) 

#define IDismDriverPackage4_put_TargetProcessorArchitecture(This,Architecture)	\
    ( (This)->lpVtbl -> put_TargetProcessorArchitecture(This,Architecture) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismDriverPackage4_INTERFACE_DEFINED__ */


#ifndef __IUnattend_INTERFACE_DEFINED__
#define __IUnattend_INTERFACE_DEFINED__

/* interface IUnattend */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IUnattend;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E7627187-C11B-42FC-91DB-4F46BD545374")
    IUnattend : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Path( 
            /* [retval][out] */ BSTR *pVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUnattendVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUnattend * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUnattend * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUnattend * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUnattend * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUnattend * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUnattend * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUnattend * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Path )( 
            IUnattend * This,
            /* [retval][out] */ BSTR *pVal);
        
        END_INTERFACE
    } IUnattendVtbl;

    interface IUnattend
    {
        CONST_VTBL struct IUnattendVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnattend_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUnattend_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUnattend_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUnattend_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUnattend_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUnattend_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUnattend_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUnattend_get_Path(This,pVal)	\
    ( (This)->lpVtbl -> get_Path(This,pVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUnattend_INTERFACE_DEFINED__ */


#ifndef __IUnattendManager_INTERFACE_DEFINED__
#define __IUnattendManager_INTERFACE_DEFINED__

/* interface IUnattendManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IUnattendManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("517CDC5A-7A77-4356-81CA-D39F50658726")
    IUnattendManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenUnattend( 
            /* [in] */ BSTR UnattendPath,
            /* [retval][out] */ IUnattend **ppUnattend) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Validate( 
            /* [in] */ IUnattend *pUnattend) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Apply( 
            /* [in] */ IUnattend *pUnattend,
            /* [in] */ unsigned long Flags) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUnattendManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUnattendManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUnattendManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUnattendManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUnattendManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUnattendManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUnattendManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUnattendManager * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenUnattend )( 
            IUnattendManager * This,
            /* [in] */ BSTR UnattendPath,
            /* [retval][out] */ IUnattend **ppUnattend);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Validate )( 
            IUnattendManager * This,
            /* [in] */ IUnattend *pUnattend);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Apply )( 
            IUnattendManager * This,
            /* [in] */ IUnattend *pUnattend,
            /* [in] */ unsigned long Flags);
        
        END_INTERFACE
    } IUnattendManagerVtbl;

    interface IUnattendManager
    {
        CONST_VTBL struct IUnattendManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnattendManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUnattendManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUnattendManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUnattendManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUnattendManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUnattendManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUnattendManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUnattendManager_OpenUnattend(This,UnattendPath,ppUnattend)	\
    ( (This)->lpVtbl -> OpenUnattend(This,UnattendPath,ppUnattend) ) 

#define IUnattendManager_Validate(This,pUnattend)	\
    ( (This)->lpVtbl -> Validate(This,pUnattend) ) 

#define IUnattendManager_Apply(This,pUnattend,Flags)	\
    ( (This)->lpVtbl -> Apply(This,pUnattend,Flags) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUnattendManager_INTERFACE_DEFINED__ */


#ifndef __IUnattendSettings_INTERFACE_DEFINED__
#define __IUnattendSettings_INTERFACE_DEFINED__

/* interface IUnattendSettings */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IUnattendSettings;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F8A8AEF3-1322-4E1D-BBF1-0A228C6FE193")
    IUnattendSettings : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Settings( 
            /* [retval][out] */ unsigned long *pSettings) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IUnattendSettingsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IUnattendSettings * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IUnattendSettings * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IUnattendSettings * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IUnattendSettings * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IUnattendSettings * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IUnattendSettings * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IUnattendSettings * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Settings )( 
            IUnattendSettings * This,
            /* [retval][out] */ unsigned long *pSettings);
        
        END_INTERFACE
    } IUnattendSettingsVtbl;

    interface IUnattendSettings
    {
        CONST_VTBL struct IUnattendSettingsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IUnattendSettings_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IUnattendSettings_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IUnattendSettings_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IUnattendSettings_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IUnattendSettings_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IUnattendSettings_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IUnattendSettings_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IUnattendSettings_get_Settings(This,pSettings)	\
    ( (This)->lpVtbl -> get_Settings(This,pSettings) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IUnattendSettings_INTERFACE_DEFINED__ */


#ifndef __IDismCompatManager_INTERFACE_DEFINED__
#define __IDismCompatManager_INTERFACE_DEFINED__

/* interface IDismCompatManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismCompatManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("092187E4-09B8-46A3-87D5-1C9BC6ED8B5D")
    IDismCompatManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CompatExecuteCmdLine( 
            /* [in] */ IDismTokenCollection *Tokens,
            /* [in] */ BSTR bszPkgMgrExe,
            /* [in] */ BSTR bszImagePath,
            /* [in] */ BSTR bszWindir,
            /* [in] */ VARIANT_BOOL vbQuiet,
            /* [in] */ VARIANT_BOOL vbNoRestart) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismCompatManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismCompatManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismCompatManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismCompatManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismCompatManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismCompatManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismCompatManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismCompatManager * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CompatExecuteCmdLine )( 
            IDismCompatManager * This,
            /* [in] */ IDismTokenCollection *Tokens,
            /* [in] */ BSTR bszPkgMgrExe,
            /* [in] */ BSTR bszImagePath,
            /* [in] */ BSTR bszWindir,
            /* [in] */ VARIANT_BOOL vbQuiet,
            /* [in] */ VARIANT_BOOL vbNoRestart);
        
        END_INTERFACE
    } IDismCompatManagerVtbl;

    interface IDismCompatManager
    {
        CONST_VTBL struct IDismCompatManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismCompatManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismCompatManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismCompatManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismCompatManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismCompatManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismCompatManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismCompatManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismCompatManager_CompatExecuteCmdLine(This,Tokens,bszPkgMgrExe,bszImagePath,bszWindir,vbQuiet,vbNoRestart)	\
    ( (This)->lpVtbl -> CompatExecuteCmdLine(This,Tokens,bszPkgMgrExe,bszImagePath,bszWindir,vbQuiet,vbNoRestart) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismCompatManager_INTERFACE_DEFINED__ */


#ifndef __IDismIntlManager_INTERFACE_DEFINED__
#define __IDismIntlManager_INTERFACE_DEFINED__

/* interface IDismIntlManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismIntlManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ECED57DF-5D67-440A-A3CD-B4F1B8B39D1A")
    IDismIntlManager : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDismIntlManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismIntlManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismIntlManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismIntlManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismIntlManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismIntlManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismIntlManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismIntlManager * This,
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
        
        END_INTERFACE
    } IDismIntlManagerVtbl;

    interface IDismIntlManager
    {
        CONST_VTBL struct IDismIntlManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismIntlManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismIntlManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismIntlManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismIntlManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismIntlManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismIntlManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismIntlManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismIntlManager_INTERFACE_DEFINED__ */


#ifndef __IDismIntl_INTERFACE_DEFINED__
#define __IDismIntl_INTERFACE_DEFINED__

/* interface IDismIntl */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismIntl;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("574FD8F3-BC64-455E-A0D8-BCF95D8819B1")
    IDismIntl : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetEffectiveSystemUILanguage( 
            /* [retval][out] */ BSTR *pbstrLanguage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetInstallLanguage( 
            /* [retval][out] */ BSTR *pbstrLanguage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetAllIntlSettings( 
            /* [in] */ BSTR bstrLanguage) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetSkuIntlDefaults( 
            /* [in] */ BSTR bstrLanguage) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismIntlVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismIntl * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismIntl * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismIntl * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismIntl * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismIntl * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismIntl * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismIntl * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetEffectiveSystemUILanguage )( 
            IDismIntl * This,
            /* [retval][out] */ BSTR *pbstrLanguage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetInstallLanguage )( 
            IDismIntl * This,
            /* [retval][out] */ BSTR *pbstrLanguage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetAllIntlSettings )( 
            IDismIntl * This,
            /* [in] */ BSTR bstrLanguage);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetSkuIntlDefaults )( 
            IDismIntl * This,
            /* [in] */ BSTR bstrLanguage);
        
        END_INTERFACE
    } IDismIntlVtbl;

    interface IDismIntl
    {
        CONST_VTBL struct IDismIntlVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismIntl_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismIntl_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismIntl_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismIntl_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismIntl_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismIntl_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismIntl_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismIntl_GetEffectiveSystemUILanguage(This,pbstrLanguage)	\
    ( (This)->lpVtbl -> GetEffectiveSystemUILanguage(This,pbstrLanguage) ) 

#define IDismIntl_GetInstallLanguage(This,pbstrLanguage)	\
    ( (This)->lpVtbl -> GetInstallLanguage(This,pbstrLanguage) ) 

#define IDismIntl_SetAllIntlSettings(This,bstrLanguage)	\
    ( (This)->lpVtbl -> SetAllIntlSettings(This,bstrLanguage) ) 

#define IDismIntl_SetSkuIntlDefaults(This,bstrLanguage)	\
    ( (This)->lpVtbl -> SetSkuIntlDefaults(This,bstrLanguage) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismIntl_INTERFACE_DEFINED__ */


#ifndef __IPEImageManager_INTERFACE_DEFINED__
#define __IPEImageManager_INTERFACE_DEFINED__

/* interface IPEImageManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IPEImageManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("30EB8593-FA91-4948-ADF5-DC6A354F1873")
    IPEImageManager : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ScratchSpace( 
            /* [retval][out] */ unsigned long *pulScratchSpace) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_ScratchSpace( 
            /* [in] */ unsigned long pulScratchSpace) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallRoot( 
            /* [retval][out] */ BSTR *pInstallRoot) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_InstallRoot( 
            /* [in] */ BSTR pInstallRoot) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Profiling( 
            /* [retval][out] */ ProfileStatus *pStatus) = 0;
        
        virtual /* [helpstring][propput][id] */ HRESULT STDMETHODCALLTYPE put_Profiling( 
            /* [in] */ ProfileStatus pStatus) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Prep( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyProfile( 
            /* [in] */ BSTR Profiles) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IPEImageManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPEImageManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPEImageManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPEImageManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IPEImageManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IPEImageManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IPEImageManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IPEImageManager * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ScratchSpace )( 
            IPEImageManager * This,
            /* [retval][out] */ unsigned long *pulScratchSpace);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_ScratchSpace )( 
            IPEImageManager * This,
            /* [in] */ unsigned long pulScratchSpace);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallRoot )( 
            IPEImageManager * This,
            /* [retval][out] */ BSTR *pInstallRoot);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_InstallRoot )( 
            IPEImageManager * This,
            /* [in] */ BSTR pInstallRoot);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Profiling )( 
            IPEImageManager * This,
            /* [retval][out] */ ProfileStatus *pStatus);
        
        /* [helpstring][propput][id] */ HRESULT ( STDMETHODCALLTYPE *put_Profiling )( 
            IPEImageManager * This,
            /* [in] */ ProfileStatus pStatus);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Prep )( 
            IPEImageManager * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplyProfile )( 
            IPEImageManager * This,
            /* [in] */ BSTR Profiles);
        
        END_INTERFACE
    } IPEImageManagerVtbl;

    interface IPEImageManager
    {
        CONST_VTBL struct IPEImageManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPEImageManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPEImageManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPEImageManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IPEImageManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IPEImageManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IPEImageManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IPEImageManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IPEImageManager_get_ScratchSpace(This,pulScratchSpace)	\
    ( (This)->lpVtbl -> get_ScratchSpace(This,pulScratchSpace) ) 

#define IPEImageManager_put_ScratchSpace(This,pulScratchSpace)	\
    ( (This)->lpVtbl -> put_ScratchSpace(This,pulScratchSpace) ) 

#define IPEImageManager_get_InstallRoot(This,pInstallRoot)	\
    ( (This)->lpVtbl -> get_InstallRoot(This,pInstallRoot) ) 

#define IPEImageManager_put_InstallRoot(This,pInstallRoot)	\
    ( (This)->lpVtbl -> put_InstallRoot(This,pInstallRoot) ) 

#define IPEImageManager_get_Profiling(This,pStatus)	\
    ( (This)->lpVtbl -> get_Profiling(This,pStatus) ) 

#define IPEImageManager_put_Profiling(This,pStatus)	\
    ( (This)->lpVtbl -> put_Profiling(This,pStatus) ) 

#define IPEImageManager_Prep(This)	\
    ( (This)->lpVtbl -> Prep(This) ) 

#define IPEImageManager_ApplyProfile(This,Profiles)	\
    ( (This)->lpVtbl -> ApplyProfile(This,Profiles) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPEImageManager_INTERFACE_DEFINED__ */


#ifndef __ITransmogrify_INTERFACE_DEFINED__
#define __ITransmogrify_INTERFACE_DEFINED__

/* interface ITransmogrify */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITransmogrify;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05BD25AF-F5D6-4246-9F91-94B187BC2BF4")
    ITransmogrify : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CanTransmogrify( 
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoTransmogrify( 
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetCurrentEdition( 
            /* [retval][out] */ BSTR *pEditionId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CreateEditionCollection( 
            /* [retval][out] */ ITransmogrifyEditionCollection **ppEditionCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTargetEditions( 
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetEditions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStagedEditions( 
            /* [retval][out] */ ITransmogrifyEditionCollection **ppStagedEditions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveStagedEditions( 
            /* [in] */ ITransmogrifyEditionCollection *pStagedEditions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransmogrifyVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransmogrify * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransmogrify * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransmogrify * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITransmogrify * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITransmogrify * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITransmogrify * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITransmogrify * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CanTransmogrify )( 
            ITransmogrify * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoTransmogrify )( 
            ITransmogrify * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentEdition )( 
            ITransmogrify * This,
            /* [retval][out] */ BSTR *pEditionId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateEditionCollection )( 
            ITransmogrify * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppEditionCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTargetEditions )( 
            ITransmogrify * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStagedEditions )( 
            ITransmogrify * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveStagedEditions )( 
            ITransmogrify * This,
            /* [in] */ ITransmogrifyEditionCollection *pStagedEditions);
        
        END_INTERFACE
    } ITransmogrifyVtbl;

    interface ITransmogrify
    {
        CONST_VTBL struct ITransmogrifyVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransmogrify_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransmogrify_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransmogrify_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransmogrify_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITransmogrify_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITransmogrify_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITransmogrify_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITransmogrify_CanTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> CanTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify_DoTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> DoTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify_GetCurrentEdition(This,pEditionId)	\
    ( (This)->lpVtbl -> GetCurrentEdition(This,pEditionId) ) 

#define ITransmogrify_CreateEditionCollection(This,ppEditionCollection)	\
    ( (This)->lpVtbl -> CreateEditionCollection(This,ppEditionCollection) ) 

#define ITransmogrify_GetTargetEditions(This,ppTargetEditions)	\
    ( (This)->lpVtbl -> GetTargetEditions(This,ppTargetEditions) ) 

#define ITransmogrify_GetStagedEditions(This,ppStagedEditions)	\
    ( (This)->lpVtbl -> GetStagedEditions(This,ppStagedEditions) ) 

#define ITransmogrify_RemoveStagedEditions(This,pStagedEditions)	\
    ( (This)->lpVtbl -> RemoveStagedEditions(This,pStagedEditions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransmogrify_INTERFACE_DEFINED__ */


#ifndef __ITransmogrifyEditionCollection_INTERFACE_DEFINED__
#define __ITransmogrifyEditionCollection_INTERFACE_DEFINED__

/* interface ITransmogrifyEditionCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITransmogrifyEditionCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B629EEF0-2060-43A0-A180-7D04351C3903")
    ITransmogrifyEditionCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrEditionId) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Index( 
            /* [in] */ BSTR bstrEditionId,
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Add( 
            /* [in] */ BSTR bstrEditionId) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransmogrifyEditionCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransmogrifyEditionCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransmogrifyEditionCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransmogrifyEditionCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITransmogrifyEditionCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITransmogrifyEditionCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITransmogrifyEditionCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITransmogrifyEditionCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            ITransmogrifyEditionCollection * This,
            /* [retval][out] */ long *plCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            ITransmogrifyEditionCollection * This,
            /* [in] */ long lIndex,
            /* [retval][out] */ BSTR *pbstrEditionId);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Index )( 
            ITransmogrifyEditionCollection * This,
            /* [in] */ BSTR bstrEditionId,
            /* [retval][out] */ long *plCount);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Add )( 
            ITransmogrifyEditionCollection * This,
            /* [in] */ BSTR bstrEditionId);
        
        END_INTERFACE
    } ITransmogrifyEditionCollectionVtbl;

    interface ITransmogrifyEditionCollection
    {
        CONST_VTBL struct ITransmogrifyEditionCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransmogrifyEditionCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransmogrifyEditionCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransmogrifyEditionCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransmogrifyEditionCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITransmogrifyEditionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITransmogrifyEditionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITransmogrifyEditionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITransmogrifyEditionCollection_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define ITransmogrifyEditionCollection_get_Item(This,lIndex,pbstrEditionId)	\
    ( (This)->lpVtbl -> get_Item(This,lIndex,pbstrEditionId) ) 

#define ITransmogrifyEditionCollection_get_Index(This,bstrEditionId,plCount)	\
    ( (This)->lpVtbl -> get_Index(This,bstrEditionId,plCount) ) 

#define ITransmogrifyEditionCollection_Add(This,bstrEditionId)	\
    ( (This)->lpVtbl -> Add(This,bstrEditionId) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransmogrifyEditionCollection_INTERFACE_DEFINED__ */


#ifndef __ITransmogrify2_INTERFACE_DEFINED__
#define __ITransmogrify2_INTERFACE_DEFINED__

/* interface ITransmogrify2 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITransmogrify2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C6ABC167-33B8-4A00-BE58-12EC5B013598")
    ITransmogrify2 : public ITransmogrify
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetProductKey( 
            /* [in] */ BSTR ProductKey) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransmogrify2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransmogrify2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransmogrify2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransmogrify2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITransmogrify2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITransmogrify2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITransmogrify2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITransmogrify2 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CanTransmogrify )( 
            ITransmogrify2 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoTransmogrify )( 
            ITransmogrify2 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentEdition )( 
            ITransmogrify2 * This,
            /* [retval][out] */ BSTR *pEditionId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateEditionCollection )( 
            ITransmogrify2 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppEditionCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTargetEditions )( 
            ITransmogrify2 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStagedEditions )( 
            ITransmogrify2 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveStagedEditions )( 
            ITransmogrify2 * This,
            /* [in] */ ITransmogrifyEditionCollection *pStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProductKey )( 
            ITransmogrify2 * This,
            /* [in] */ BSTR ProductKey);
        
        END_INTERFACE
    } ITransmogrify2Vtbl;

    interface ITransmogrify2
    {
        CONST_VTBL struct ITransmogrify2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransmogrify2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransmogrify2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransmogrify2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransmogrify2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITransmogrify2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITransmogrify2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITransmogrify2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITransmogrify2_CanTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> CanTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify2_DoTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> DoTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify2_GetCurrentEdition(This,pEditionId)	\
    ( (This)->lpVtbl -> GetCurrentEdition(This,pEditionId) ) 

#define ITransmogrify2_CreateEditionCollection(This,ppEditionCollection)	\
    ( (This)->lpVtbl -> CreateEditionCollection(This,ppEditionCollection) ) 

#define ITransmogrify2_GetTargetEditions(This,ppTargetEditions)	\
    ( (This)->lpVtbl -> GetTargetEditions(This,ppTargetEditions) ) 

#define ITransmogrify2_GetStagedEditions(This,ppStagedEditions)	\
    ( (This)->lpVtbl -> GetStagedEditions(This,ppStagedEditions) ) 

#define ITransmogrify2_RemoveStagedEditions(This,pStagedEditions)	\
    ( (This)->lpVtbl -> RemoveStagedEditions(This,pStagedEditions) ) 


#define ITransmogrify2_SetProductKey(This,ProductKey)	\
    ( (This)->lpVtbl -> SetProductKey(This,ProductKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransmogrify2_INTERFACE_DEFINED__ */


#ifndef __ITransmogrify3_INTERFACE_DEFINED__
#define __ITransmogrify3_INTERFACE_DEFINED__

/* interface ITransmogrify3 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITransmogrify3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("50F2DDD7-90ED-4DB1-8EBA-3C995486AA0C")
    ITransmogrify3 : public ITransmogrify2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetProductKeyInfo( 
            /* [in] */ BSTR ProductKey,
            /* [out] */ BSTR *pEditionId,
            /* [retval][out] */ BSTR *pProductKeyType) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ValidateProductKey( 
            /* [in] */ BSTR ProductKey) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransmogrify3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransmogrify3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransmogrify3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransmogrify3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITransmogrify3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITransmogrify3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITransmogrify3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITransmogrify3 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CanTransmogrify )( 
            ITransmogrify3 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoTransmogrify )( 
            ITransmogrify3 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentEdition )( 
            ITransmogrify3 * This,
            /* [retval][out] */ BSTR *pEditionId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateEditionCollection )( 
            ITransmogrify3 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppEditionCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTargetEditions )( 
            ITransmogrify3 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStagedEditions )( 
            ITransmogrify3 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveStagedEditions )( 
            ITransmogrify3 * This,
            /* [in] */ ITransmogrifyEditionCollection *pStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProductKey )( 
            ITransmogrify3 * This,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProductKeyInfo )( 
            ITransmogrify3 * This,
            /* [in] */ BSTR ProductKey,
            /* [out] */ BSTR *pEditionId,
            /* [retval][out] */ BSTR *pProductKeyType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidateProductKey )( 
            ITransmogrify3 * This,
            /* [in] */ BSTR ProductKey);
        
        END_INTERFACE
    } ITransmogrify3Vtbl;

    interface ITransmogrify3
    {
        CONST_VTBL struct ITransmogrify3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransmogrify3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransmogrify3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransmogrify3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransmogrify3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITransmogrify3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITransmogrify3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITransmogrify3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITransmogrify3_CanTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> CanTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify3_DoTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> DoTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify3_GetCurrentEdition(This,pEditionId)	\
    ( (This)->lpVtbl -> GetCurrentEdition(This,pEditionId) ) 

#define ITransmogrify3_CreateEditionCollection(This,ppEditionCollection)	\
    ( (This)->lpVtbl -> CreateEditionCollection(This,ppEditionCollection) ) 

#define ITransmogrify3_GetTargetEditions(This,ppTargetEditions)	\
    ( (This)->lpVtbl -> GetTargetEditions(This,ppTargetEditions) ) 

#define ITransmogrify3_GetStagedEditions(This,ppStagedEditions)	\
    ( (This)->lpVtbl -> GetStagedEditions(This,ppStagedEditions) ) 

#define ITransmogrify3_RemoveStagedEditions(This,pStagedEditions)	\
    ( (This)->lpVtbl -> RemoveStagedEditions(This,pStagedEditions) ) 


#define ITransmogrify3_SetProductKey(This,ProductKey)	\
    ( (This)->lpVtbl -> SetProductKey(This,ProductKey) ) 


#define ITransmogrify3_GetProductKeyInfo(This,ProductKey,pEditionId,pProductKeyType)	\
    ( (This)->lpVtbl -> GetProductKeyInfo(This,ProductKey,pEditionId,pProductKeyType) ) 

#define ITransmogrify3_ValidateProductKey(This,ProductKey)	\
    ( (This)->lpVtbl -> ValidateProductKey(This,ProductKey) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransmogrify3_INTERFACE_DEFINED__ */


#ifndef __ITransmogrify4_INTERFACE_DEFINED__
#define __ITransmogrify4_INTERFACE_DEFINED__

/* interface ITransmogrify4 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITransmogrify4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E6757B45-14FC-42C1-9943-AC630A8B0E1B")
    ITransmogrify4 : public ITransmogrify3
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoFootprintCleanup( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransmogrify4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransmogrify4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransmogrify4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransmogrify4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITransmogrify4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITransmogrify4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITransmogrify4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITransmogrify4 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CanTransmogrify )( 
            ITransmogrify4 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoTransmogrify )( 
            ITransmogrify4 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentEdition )( 
            ITransmogrify4 * This,
            /* [retval][out] */ BSTR *pEditionId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateEditionCollection )( 
            ITransmogrify4 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppEditionCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTargetEditions )( 
            ITransmogrify4 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStagedEditions )( 
            ITransmogrify4 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveStagedEditions )( 
            ITransmogrify4 * This,
            /* [in] */ ITransmogrifyEditionCollection *pStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProductKey )( 
            ITransmogrify4 * This,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProductKeyInfo )( 
            ITransmogrify4 * This,
            /* [in] */ BSTR ProductKey,
            /* [out] */ BSTR *pEditionId,
            /* [retval][out] */ BSTR *pProductKeyType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidateProductKey )( 
            ITransmogrify4 * This,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoFootprintCleanup )( 
            ITransmogrify4 * This);
        
        END_INTERFACE
    } ITransmogrify4Vtbl;

    interface ITransmogrify4
    {
        CONST_VTBL struct ITransmogrify4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransmogrify4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransmogrify4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransmogrify4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransmogrify4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITransmogrify4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITransmogrify4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITransmogrify4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITransmogrify4_CanTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> CanTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify4_DoTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> DoTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify4_GetCurrentEdition(This,pEditionId)	\
    ( (This)->lpVtbl -> GetCurrentEdition(This,pEditionId) ) 

#define ITransmogrify4_CreateEditionCollection(This,ppEditionCollection)	\
    ( (This)->lpVtbl -> CreateEditionCollection(This,ppEditionCollection) ) 

#define ITransmogrify4_GetTargetEditions(This,ppTargetEditions)	\
    ( (This)->lpVtbl -> GetTargetEditions(This,ppTargetEditions) ) 

#define ITransmogrify4_GetStagedEditions(This,ppStagedEditions)	\
    ( (This)->lpVtbl -> GetStagedEditions(This,ppStagedEditions) ) 

#define ITransmogrify4_RemoveStagedEditions(This,pStagedEditions)	\
    ( (This)->lpVtbl -> RemoveStagedEditions(This,pStagedEditions) ) 


#define ITransmogrify4_SetProductKey(This,ProductKey)	\
    ( (This)->lpVtbl -> SetProductKey(This,ProductKey) ) 


#define ITransmogrify4_GetProductKeyInfo(This,ProductKey,pEditionId,pProductKeyType)	\
    ( (This)->lpVtbl -> GetProductKeyInfo(This,ProductKey,pEditionId,pProductKeyType) ) 

#define ITransmogrify4_ValidateProductKey(This,ProductKey)	\
    ( (This)->lpVtbl -> ValidateProductKey(This,ProductKey) ) 


#define ITransmogrify4_DoFootprintCleanup(This)	\
    ( (This)->lpVtbl -> DoFootprintCleanup(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransmogrify4_INTERFACE_DEFINED__ */


#ifndef __ITransmogrify5_INTERFACE_DEFINED__
#define __ITransmogrify5_INTERFACE_DEFINED__

/* interface ITransmogrify5 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_ITransmogrify5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3F483E2E-F737-481E-A3A5-C64E53E493AE")
    ITransmogrify5 : public ITransmogrify4
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DoTransmogrify2( 
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR Channel) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTargetCompositionEditions( 
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetCompositionEditions) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetTargetVirtualEditions( 
            /* [in] */ BSTR TargetCompositionEdition,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetVirtualEditions) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ITransmogrify5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ITransmogrify5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ITransmogrify5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ITransmogrify5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            ITransmogrify5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            ITransmogrify5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            ITransmogrify5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            ITransmogrify5 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CanTransmogrify )( 
            ITransmogrify5 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoTransmogrify )( 
            ITransmogrify5 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetCurrentEdition )( 
            ITransmogrify5 * This,
            /* [retval][out] */ BSTR *pEditionId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CreateEditionCollection )( 
            ITransmogrify5 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppEditionCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTargetEditions )( 
            ITransmogrify5 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStagedEditions )( 
            ITransmogrify5 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveStagedEditions )( 
            ITransmogrify5 * This,
            /* [in] */ ITransmogrifyEditionCollection *pStagedEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetProductKey )( 
            ITransmogrify5 * This,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetProductKeyInfo )( 
            ITransmogrify5 * This,
            /* [in] */ BSTR ProductKey,
            /* [out] */ BSTR *pEditionId,
            /* [retval][out] */ BSTR *pProductKeyType);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ValidateProductKey )( 
            ITransmogrify5 * This,
            /* [in] */ BSTR ProductKey);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoFootprintCleanup )( 
            ITransmogrify5 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DoTransmogrify2 )( 
            ITransmogrify5 * This,
            /* [in] */ BSTR EditionId,
            /* [in] */ BSTR Channel);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTargetCompositionEditions )( 
            ITransmogrify5 * This,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetCompositionEditions);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetTargetVirtualEditions )( 
            ITransmogrify5 * This,
            /* [in] */ BSTR TargetCompositionEdition,
            /* [retval][out] */ ITransmogrifyEditionCollection **ppTargetVirtualEditions);
        
        END_INTERFACE
    } ITransmogrify5Vtbl;

    interface ITransmogrify5
    {
        CONST_VTBL struct ITransmogrify5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ITransmogrify5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ITransmogrify5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ITransmogrify5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ITransmogrify5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define ITransmogrify5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define ITransmogrify5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define ITransmogrify5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define ITransmogrify5_CanTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> CanTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify5_DoTransmogrify(This,EditionId,ProductKey)	\
    ( (This)->lpVtbl -> DoTransmogrify(This,EditionId,ProductKey) ) 

#define ITransmogrify5_GetCurrentEdition(This,pEditionId)	\
    ( (This)->lpVtbl -> GetCurrentEdition(This,pEditionId) ) 

#define ITransmogrify5_CreateEditionCollection(This,ppEditionCollection)	\
    ( (This)->lpVtbl -> CreateEditionCollection(This,ppEditionCollection) ) 

#define ITransmogrify5_GetTargetEditions(This,ppTargetEditions)	\
    ( (This)->lpVtbl -> GetTargetEditions(This,ppTargetEditions) ) 

#define ITransmogrify5_GetStagedEditions(This,ppStagedEditions)	\
    ( (This)->lpVtbl -> GetStagedEditions(This,ppStagedEditions) ) 

#define ITransmogrify5_RemoveStagedEditions(This,pStagedEditions)	\
    ( (This)->lpVtbl -> RemoveStagedEditions(This,pStagedEditions) ) 


#define ITransmogrify5_SetProductKey(This,ProductKey)	\
    ( (This)->lpVtbl -> SetProductKey(This,ProductKey) ) 


#define ITransmogrify5_GetProductKeyInfo(This,ProductKey,pEditionId,pProductKeyType)	\
    ( (This)->lpVtbl -> GetProductKeyInfo(This,ProductKey,pEditionId,pProductKeyType) ) 

#define ITransmogrify5_ValidateProductKey(This,ProductKey)	\
    ( (This)->lpVtbl -> ValidateProductKey(This,ProductKey) ) 


#define ITransmogrify5_DoFootprintCleanup(This)	\
    ( (This)->lpVtbl -> DoFootprintCleanup(This) ) 


#define ITransmogrify5_DoTransmogrify2(This,EditionId,Channel)	\
    ( (This)->lpVtbl -> DoTransmogrify2(This,EditionId,Channel) ) 

#define ITransmogrify5_GetTargetCompositionEditions(This,ppTargetCompositionEditions)	\
    ( (This)->lpVtbl -> GetTargetCompositionEditions(This,ppTargetCompositionEditions) ) 

#define ITransmogrify5_GetTargetVirtualEditions(This,TargetCompositionEdition,ppTargetVirtualEditions)	\
    ( (This)->lpVtbl -> GetTargetVirtualEditions(This,TargetCompositionEdition,ppTargetVirtualEditions) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ITransmogrify5_INTERFACE_DEFINED__ */


#ifndef __IDismMsiManager_INTERFACE_DEFINED__
#define __IDismMsiManager_INTERFACE_DEFINED__

/* interface IDismMsiManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismMsiManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("57AB0039-5829-4EBF-B093-0B3A80867C24")
    IDismMsiManager : public IDispatch
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IDismMsiManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismMsiManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismMsiManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismMsiManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismMsiManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismMsiManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismMsiManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismMsiManager * This,
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
        
        END_INTERFACE
    } IDismMsiManagerVtbl;

    interface IDismMsiManager
    {
        CONST_VTBL struct IDismMsiManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismMsiManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismMsiManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismMsiManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismMsiManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismMsiManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismMsiManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismMsiManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismMsiManager_INTERFACE_DEFINED__ */


#ifndef __IDismIBSSupport_INTERFACE_DEFINED__
#define __IDismIBSSupport_INTERFACE_DEFINED__

/* interface IDismIBSSupport */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismIBSSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("E1B47F29-955C-49A5-B0A5-5018207FDE69")
    IDismIBSSupport : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetFirstBootCommandLine( 
            /* [in] */ DISM_FIRST_BOOT_PHASE phase,
            /* [in] */ BSTR commandLine) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismIBSSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismIBSSupport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismIBSSupport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismIBSSupport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismIBSSupport * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismIBSSupport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismIBSSupport * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismIBSSupport * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetFirstBootCommandLine )( 
            IDismIBSSupport * This,
            /* [in] */ DISM_FIRST_BOOT_PHASE phase,
            /* [in] */ BSTR commandLine);
        
        END_INTERFACE
    } IDismIBSSupportVtbl;

    interface IDismIBSSupport
    {
        CONST_VTBL struct IDismIBSSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismIBSSupport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismIBSSupport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismIBSSupport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismIBSSupport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismIBSSupport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismIBSSupport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismIBSSupport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismIBSSupport_SetFirstBootCommandLine(This,phase,commandLine)	\
    ( (This)->lpVtbl -> SetFirstBootCommandLine(This,phase,commandLine) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismIBSSupport_INTERFACE_DEFINED__ */


#ifndef __IDismAppxManager_INTERFACE_DEFINED__
#define __IDismAppxManager_INTERFACE_DEFINED__

/* interface IDismAppxManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("54103F66-7CB7-41BA-AD1A-2E124D01C08C")
    IDismAppxManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAllUserAppxLooseFiles( 
            /* [in] */ BSTR appPath,
            /* [in] */ BSTR customDataPath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAllUserAppxPackage( 
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR licensePath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAllUserAppx( 
            /* [out] */ IDismAppxPackageInfoCollection **packageCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAllUserAppx( 
            /* [in] */ BSTR mainPackageMoniker) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxManager * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxLooseFiles )( 
            IDismAppxManager * This,
            /* [in] */ BSTR appPath,
            /* [in] */ BSTR customDataPath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackage )( 
            IDismAppxManager * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR licensePath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllUserAppx )( 
            IDismAppxManager * This,
            /* [out] */ IDismAppxPackageInfoCollection **packageCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllUserAppx )( 
            IDismAppxManager * This,
            /* [in] */ BSTR mainPackageMoniker);
        
        END_INTERFACE
    } IDismAppxManagerVtbl;

    interface IDismAppxManager
    {
        CONST_VTBL struct IDismAppxManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxManager_AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck) ) 

#define IDismAppxManager_AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck) ) 

#define IDismAppxManager_GetAllUserAppx(This,packageCollection)	\
    ( (This)->lpVtbl -> GetAllUserAppx(This,packageCollection) ) 

#define IDismAppxManager_RemoveAllUserAppx(This,mainPackageMoniker)	\
    ( (This)->lpVtbl -> RemoveAllUserAppx(This,mainPackageMoniker) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxManager_INTERFACE_DEFINED__ */


#ifndef __IDismAppxPackageInfoCollection_INTERFACE_DEFINED__
#define __IDismAppxPackageInfoCollection_INTERFACE_DEFINED__

/* interface IDismAppxPackageInfoCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxPackageInfoCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("75CAE0D9-716D-4E62-931D-BDFA3DBBD42E")
    IDismAppxPackageInfoCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *Count) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismAppxPackageInfo **appxPackageInfo) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **newEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxPackageInfoCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxPackageInfoCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxPackageInfoCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxPackageInfoCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxPackageInfoCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxPackageInfoCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxPackageInfoCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxPackageInfoCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismAppxPackageInfoCollection * This,
            /* [retval][out] */ long *Count);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismAppxPackageInfoCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismAppxPackageInfo **appxPackageInfo);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismAppxPackageInfoCollection * This,
            /* [retval][out] */ IUnknown **newEnum);
        
        END_INTERFACE
    } IDismAppxPackageInfoCollectionVtbl;

    interface IDismAppxPackageInfoCollection
    {
        CONST_VTBL struct IDismAppxPackageInfoCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxPackageInfoCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxPackageInfoCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxPackageInfoCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxPackageInfoCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxPackageInfoCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxPackageInfoCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxPackageInfoCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxPackageInfoCollection_get_Count(This,Count)	\
    ( (This)->lpVtbl -> get_Count(This,Count) ) 

#define IDismAppxPackageInfoCollection_get_Item(This,n,appxPackageInfo)	\
    ( (This)->lpVtbl -> get_Item(This,n,appxPackageInfo) ) 

#define IDismAppxPackageInfoCollection_get__NewEnum(This,newEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,newEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxPackageInfoCollection_INTERFACE_DEFINED__ */


#ifndef __IDismAppxPackageInfo_INTERFACE_DEFINED__
#define __IDismAppxPackageInfo_INTERFACE_DEFINED__

/* interface IDismAppxPackageInfo */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxPackageInfo;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("40E0E56D-3D1D-4F5C-B325-0121423677C6")
    IDismAppxPackageInfo : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PublisherId( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Version( 
            /* [retval][out] */ UINT64 *Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Architecture( 
            /* [retval][out] */ unsigned long *Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_ResourceId( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_PackageMoniker( 
            /* [retval][out] */ BSTR *Value) = 0;
        
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_InstallLocation( 
            /* [retval][out] */ BSTR *Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxPackageInfoVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxPackageInfo * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxPackageInfo * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxPackageInfo * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxPackageInfo * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxPackageInfo * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxPackageInfo * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxPackageInfo * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismAppxPackageInfo * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublisherId )( 
            IDismAppxPackageInfo * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IDismAppxPackageInfo * This,
            /* [retval][out] */ UINT64 *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Architecture )( 
            IDismAppxPackageInfo * This,
            /* [retval][out] */ unsigned long *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResourceId )( 
            IDismAppxPackageInfo * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PackageMoniker )( 
            IDismAppxPackageInfo * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallLocation )( 
            IDismAppxPackageInfo * This,
            /* [retval][out] */ BSTR *Value);
        
        END_INTERFACE
    } IDismAppxPackageInfoVtbl;

    interface IDismAppxPackageInfo
    {
        CONST_VTBL struct IDismAppxPackageInfoVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxPackageInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxPackageInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxPackageInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxPackageInfo_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxPackageInfo_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxPackageInfo_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxPackageInfo_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxPackageInfo_get_Name(This,Value)	\
    ( (This)->lpVtbl -> get_Name(This,Value) ) 

#define IDismAppxPackageInfo_get_PublisherId(This,Value)	\
    ( (This)->lpVtbl -> get_PublisherId(This,Value) ) 

#define IDismAppxPackageInfo_get_Version(This,Value)	\
    ( (This)->lpVtbl -> get_Version(This,Value) ) 

#define IDismAppxPackageInfo_get_Architecture(This,Value)	\
    ( (This)->lpVtbl -> get_Architecture(This,Value) ) 

#define IDismAppxPackageInfo_get_ResourceId(This,Value)	\
    ( (This)->lpVtbl -> get_ResourceId(This,Value) ) 

#define IDismAppxPackageInfo_get_PackageMoniker(This,Value)	\
    ( (This)->lpVtbl -> get_PackageMoniker(This,Value) ) 

#define IDismAppxPackageInfo_get_InstallLocation(This,Value)	\
    ( (This)->lpVtbl -> get_InstallLocation(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxPackageInfo_INTERFACE_DEFINED__ */


#ifndef __IDismAppxManager2_INTERFACE_DEFINED__
#define __IDismAppxManager2_INTERFACE_DEFINED__

/* interface IDismAppxManager2 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxManager2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("80F63941-9464-4495-BAC3-51A49B20CE80")
    IDismAppxManager2 : public IDismAppxManager
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddProvisionedAppxDataFile( 
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR packageFullName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxManager2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxManager2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxManager2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxManager2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxManager2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxManager2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxManager2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxManager2 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxLooseFiles )( 
            IDismAppxManager2 * This,
            /* [in] */ BSTR appPath,
            /* [in] */ BSTR customDataPath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackage )( 
            IDismAppxManager2 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR licensePath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllUserAppx )( 
            IDismAppxManager2 * This,
            /* [out] */ IDismAppxPackageInfoCollection **packageCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllUserAppx )( 
            IDismAppxManager2 * This,
            /* [in] */ BSTR mainPackageMoniker);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProvisionedAppxDataFile )( 
            IDismAppxManager2 * This,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR packageFullName);
        
        END_INTERFACE
    } IDismAppxManager2Vtbl;

    interface IDismAppxManager2
    {
        CONST_VTBL struct IDismAppxManager2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxManager2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxManager2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxManager2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxManager2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxManager2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxManager2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxManager2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxManager2_AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck) ) 

#define IDismAppxManager2_AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck) ) 

#define IDismAppxManager2_GetAllUserAppx(This,packageCollection)	\
    ( (This)->lpVtbl -> GetAllUserAppx(This,packageCollection) ) 

#define IDismAppxManager2_RemoveAllUserAppx(This,mainPackageMoniker)	\
    ( (This)->lpVtbl -> RemoveAllUserAppx(This,mainPackageMoniker) ) 


#define IDismAppxManager2_AddProvisionedAppxDataFile(This,customDataPath,packageFullName)	\
    ( (This)->lpVtbl -> AddProvisionedAppxDataFile(This,customDataPath,packageFullName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxManager2_INTERFACE_DEFINED__ */


#ifndef __IDismAppxManager3_INTERFACE_DEFINED__
#define __IDismAppxManager3_INTERFACE_DEFINED__

/* interface IDismAppxManager3 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxManager3;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("6674FE44-DE28-4B7E-978D-AB6A51CE0A5B")
    IDismAppxManager3 : public IDismAppxManager2
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAllUserAppxPackageWithOptionalPackages( 
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ IDismStringCollection *optionalPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ IDismStringCollection *licensePaths,
            /* [in] */ VARIANT_BOOL skipLicenseCheck) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxManager3Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxManager3 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxManager3 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxManager3 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxManager3 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxManager3 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxManager3 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxManager3 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxLooseFiles )( 
            IDismAppxManager3 * This,
            /* [in] */ BSTR appPath,
            /* [in] */ BSTR customDataPath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackage )( 
            IDismAppxManager3 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR licensePath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllUserAppx )( 
            IDismAppxManager3 * This,
            /* [out] */ IDismAppxPackageInfoCollection **packageCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllUserAppx )( 
            IDismAppxManager3 * This,
            /* [in] */ BSTR mainPackageMoniker);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProvisionedAppxDataFile )( 
            IDismAppxManager3 * This,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR packageFullName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackageWithOptionalPackages )( 
            IDismAppxManager3 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ IDismStringCollection *optionalPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ IDismStringCollection *licensePaths,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        END_INTERFACE
    } IDismAppxManager3Vtbl;

    interface IDismAppxManager3
    {
        CONST_VTBL struct IDismAppxManager3Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxManager3_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxManager3_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxManager3_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxManager3_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxManager3_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxManager3_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxManager3_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxManager3_AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck) ) 

#define IDismAppxManager3_AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck) ) 

#define IDismAppxManager3_GetAllUserAppx(This,packageCollection)	\
    ( (This)->lpVtbl -> GetAllUserAppx(This,packageCollection) ) 

#define IDismAppxManager3_RemoveAllUserAppx(This,mainPackageMoniker)	\
    ( (This)->lpVtbl -> RemoveAllUserAppx(This,mainPackageMoniker) ) 


#define IDismAppxManager3_AddProvisionedAppxDataFile(This,customDataPath,packageFullName)	\
    ( (This)->lpVtbl -> AddProvisionedAppxDataFile(This,customDataPath,packageFullName) ) 


#define IDismAppxManager3_AddAllUserAppxPackageWithOptionalPackages(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackageWithOptionalPackages(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxManager3_INTERFACE_DEFINED__ */


#ifndef __IDismAppxManager4_INTERFACE_DEFINED__
#define __IDismAppxManager4_INTERFACE_DEFINED__

/* interface IDismAppxManager4 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxManager4;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("7446FF66-999D-497A-B712-A26059730C5D")
    IDismAppxManager4 : public IDismAppxManager3
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OptimizeAllUserAppx( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxManager4Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxManager4 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxManager4 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxManager4 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxManager4 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxManager4 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxManager4 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxManager4 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxLooseFiles )( 
            IDismAppxManager4 * This,
            /* [in] */ BSTR appPath,
            /* [in] */ BSTR customDataPath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackage )( 
            IDismAppxManager4 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR licensePath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllUserAppx )( 
            IDismAppxManager4 * This,
            /* [out] */ IDismAppxPackageInfoCollection **packageCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllUserAppx )( 
            IDismAppxManager4 * This,
            /* [in] */ BSTR mainPackageMoniker);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProvisionedAppxDataFile )( 
            IDismAppxManager4 * This,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR packageFullName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackageWithOptionalPackages )( 
            IDismAppxManager4 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ IDismStringCollection *optionalPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ IDismStringCollection *licensePaths,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OptimizeAllUserAppx )( 
            IDismAppxManager4 * This);
        
        END_INTERFACE
    } IDismAppxManager4Vtbl;

    interface IDismAppxManager4
    {
        CONST_VTBL struct IDismAppxManager4Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxManager4_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxManager4_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxManager4_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxManager4_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxManager4_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxManager4_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxManager4_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxManager4_AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck) ) 

#define IDismAppxManager4_AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck) ) 

#define IDismAppxManager4_GetAllUserAppx(This,packageCollection)	\
    ( (This)->lpVtbl -> GetAllUserAppx(This,packageCollection) ) 

#define IDismAppxManager4_RemoveAllUserAppx(This,mainPackageMoniker)	\
    ( (This)->lpVtbl -> RemoveAllUserAppx(This,mainPackageMoniker) ) 


#define IDismAppxManager4_AddProvisionedAppxDataFile(This,customDataPath,packageFullName)	\
    ( (This)->lpVtbl -> AddProvisionedAppxDataFile(This,customDataPath,packageFullName) ) 


#define IDismAppxManager4_AddAllUserAppxPackageWithOptionalPackages(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackageWithOptionalPackages(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck) ) 


#define IDismAppxManager4_OptimizeAllUserAppx(This)	\
    ( (This)->lpVtbl -> OptimizeAllUserAppx(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxManager4_INTERFACE_DEFINED__ */


#ifndef __IDismAppxManager5_INTERFACE_DEFINED__
#define __IDismAppxManager5_INTERFACE_DEFINED__

/* interface IDismAppxManager5 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxManager5;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("9B31F137-5668-441F-8BC3-D21F8D3C70DB")
    IDismAppxManager5 : public IDismAppxManager4
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAllUserAppxPackageWithOptionalPackagesAndRegion( 
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ IDismStringCollection *optionalPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ IDismStringCollection *licensePaths,
            /* [in] */ VARIANT_BOOL skipLicenseCheck,
            /* [in] */ BSTR region) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxManager5Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxManager5 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxManager5 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxManager5 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxManager5 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxManager5 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxManager5 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxManager5 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxLooseFiles )( 
            IDismAppxManager5 * This,
            /* [in] */ BSTR appPath,
            /* [in] */ BSTR customDataPath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackage )( 
            IDismAppxManager5 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR licensePath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllUserAppx )( 
            IDismAppxManager5 * This,
            /* [out] */ IDismAppxPackageInfoCollection **packageCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllUserAppx )( 
            IDismAppxManager5 * This,
            /* [in] */ BSTR mainPackageMoniker);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProvisionedAppxDataFile )( 
            IDismAppxManager5 * This,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR packageFullName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackageWithOptionalPackages )( 
            IDismAppxManager5 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ IDismStringCollection *optionalPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ IDismStringCollection *licensePaths,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OptimizeAllUserAppx )( 
            IDismAppxManager5 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackageWithOptionalPackagesAndRegion )( 
            IDismAppxManager5 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ IDismStringCollection *optionalPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ IDismStringCollection *licensePaths,
            /* [in] */ VARIANT_BOOL skipLicenseCheck,
            /* [in] */ BSTR region);
        
        END_INTERFACE
    } IDismAppxManager5Vtbl;

    interface IDismAppxManager5
    {
        CONST_VTBL struct IDismAppxManager5Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxManager5_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxManager5_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxManager5_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxManager5_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxManager5_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxManager5_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxManager5_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxManager5_AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck) ) 

#define IDismAppxManager5_AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck) ) 

#define IDismAppxManager5_GetAllUserAppx(This,packageCollection)	\
    ( (This)->lpVtbl -> GetAllUserAppx(This,packageCollection) ) 

#define IDismAppxManager5_RemoveAllUserAppx(This,mainPackageMoniker)	\
    ( (This)->lpVtbl -> RemoveAllUserAppx(This,mainPackageMoniker) ) 


#define IDismAppxManager5_AddProvisionedAppxDataFile(This,customDataPath,packageFullName)	\
    ( (This)->lpVtbl -> AddProvisionedAppxDataFile(This,customDataPath,packageFullName) ) 


#define IDismAppxManager5_AddAllUserAppxPackageWithOptionalPackages(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackageWithOptionalPackages(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck) ) 


#define IDismAppxManager5_OptimizeAllUserAppx(This)	\
    ( (This)->lpVtbl -> OptimizeAllUserAppx(This) ) 


#define IDismAppxManager5_AddAllUserAppxPackageWithOptionalPackagesAndRegion(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck,region)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackageWithOptionalPackagesAndRegion(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck,region) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxManager5_INTERFACE_DEFINED__ */


#ifndef __IDismAppxManager6_INTERFACE_DEFINED__
#define __IDismAppxManager6_INTERFACE_DEFINED__

/* interface IDismAppxManager6 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxManager6;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B83F048E-2309-4E52-965B-4FF56B3F5AB7")
    IDismAppxManager6 : public IDismAppxManager5
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE AddAppxUninstallBlocklistEntry( 
            /* [in] */ BSTR packageFamilyName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAppxUninstallBlocklistEntry( 
            /* [in] */ BSTR packageFamilyName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetNonRemovableAppPolicy( 
            /* [out] */ IDismStringCollection **packageFamilyNames) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxManager6Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxManager6 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxManager6 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxManager6 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxManager6 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxManager6 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxManager6 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxManager6 * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxLooseFiles )( 
            IDismAppxManager6 * This,
            /* [in] */ BSTR appPath,
            /* [in] */ BSTR customDataPath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackage )( 
            IDismAppxManager6 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR licensePath,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAllUserAppx )( 
            IDismAppxManager6 * This,
            /* [out] */ IDismAppxPackageInfoCollection **packageCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAllUserAppx )( 
            IDismAppxManager6 * This,
            /* [in] */ BSTR mainPackageMoniker);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddProvisionedAppxDataFile )( 
            IDismAppxManager6 * This,
            /* [in] */ BSTR customDataPath,
            /* [in] */ BSTR packageFullName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackageWithOptionalPackages )( 
            IDismAppxManager6 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ IDismStringCollection *optionalPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ IDismStringCollection *licensePaths,
            /* [in] */ VARIANT_BOOL skipLicenseCheck);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OptimizeAllUserAppx )( 
            IDismAppxManager6 * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAllUserAppxPackageWithOptionalPackagesAndRegion )( 
            IDismAppxManager6 * This,
            /* [in] */ BSTR mainPackagePath,
            /* [in] */ IDismStringCollection *dependencyPackagePaths,
            /* [in] */ IDismStringCollection *optionalPackagePaths,
            /* [in] */ BSTR customDataPath,
            /* [in] */ IDismStringCollection *licensePaths,
            /* [in] */ VARIANT_BOOL skipLicenseCheck,
            /* [in] */ BSTR region);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *AddAppxUninstallBlocklistEntry )( 
            IDismAppxManager6 * This,
            /* [in] */ BSTR packageFamilyName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAppxUninstallBlocklistEntry )( 
            IDismAppxManager6 * This,
            /* [in] */ BSTR packageFamilyName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetNonRemovableAppPolicy )( 
            IDismAppxManager6 * This,
            /* [out] */ IDismStringCollection **packageFamilyNames);
        
        END_INTERFACE
    } IDismAppxManager6Vtbl;

    interface IDismAppxManager6
    {
        CONST_VTBL struct IDismAppxManager6Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxManager6_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxManager6_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxManager6_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxManager6_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxManager6_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxManager6_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxManager6_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxManager6_AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxLooseFiles(This,appPath,customDataPath,skipLicenseCheck) ) 

#define IDismAppxManager6_AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackage(This,mainPackagePath,dependencyPackagePaths,customDataPath,licensePath,skipLicenseCheck) ) 

#define IDismAppxManager6_GetAllUserAppx(This,packageCollection)	\
    ( (This)->lpVtbl -> GetAllUserAppx(This,packageCollection) ) 

#define IDismAppxManager6_RemoveAllUserAppx(This,mainPackageMoniker)	\
    ( (This)->lpVtbl -> RemoveAllUserAppx(This,mainPackageMoniker) ) 


#define IDismAppxManager6_AddProvisionedAppxDataFile(This,customDataPath,packageFullName)	\
    ( (This)->lpVtbl -> AddProvisionedAppxDataFile(This,customDataPath,packageFullName) ) 


#define IDismAppxManager6_AddAllUserAppxPackageWithOptionalPackages(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackageWithOptionalPackages(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck) ) 


#define IDismAppxManager6_OptimizeAllUserAppx(This)	\
    ( (This)->lpVtbl -> OptimizeAllUserAppx(This) ) 


#define IDismAppxManager6_AddAllUserAppxPackageWithOptionalPackagesAndRegion(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck,region)	\
    ( (This)->lpVtbl -> AddAllUserAppxPackageWithOptionalPackagesAndRegion(This,mainPackagePath,dependencyPackagePaths,optionalPackagePaths,customDataPath,licensePaths,skipLicenseCheck,region) ) 


#define IDismAppxManager6_AddAppxUninstallBlocklistEntry(This,packageFamilyName)	\
    ( (This)->lpVtbl -> AddAppxUninstallBlocklistEntry(This,packageFamilyName) ) 

#define IDismAppxManager6_RemoveAppxUninstallBlocklistEntry(This,packageFamilyName)	\
    ( (This)->lpVtbl -> RemoveAppxUninstallBlocklistEntry(This,packageFamilyName) ) 

#define IDismAppxManager6_GetNonRemovableAppPolicy(This,packageFamilyNames)	\
    ( (This)->lpVtbl -> GetNonRemovableAppPolicy(This,packageFamilyNames) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxManager6_INTERFACE_DEFINED__ */


#ifndef __IDismAppxPackageInfo2_INTERFACE_DEFINED__
#define __IDismAppxPackageInfo2_INTERFACE_DEFINED__

/* interface IDismAppxPackageInfo2 */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAppxPackageInfo2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("5367D43F-AA59-4A81-9068-36C7A360FE72")
    IDismAppxPackageInfo2 : public IDismAppxPackageInfo
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Regions( 
            /* [retval][out] */ BSTR *Value) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAppxPackageInfo2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAppxPackageInfo2 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAppxPackageInfo2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAppxPackageInfo2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAppxPackageInfo2 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAppxPackageInfo2 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAppxPackageInfo2 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAppxPackageInfo2 * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            IDismAppxPackageInfo2 * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PublisherId )( 
            IDismAppxPackageInfo2 * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Version )( 
            IDismAppxPackageInfo2 * This,
            /* [retval][out] */ UINT64 *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Architecture )( 
            IDismAppxPackageInfo2 * This,
            /* [retval][out] */ unsigned long *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_ResourceId )( 
            IDismAppxPackageInfo2 * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_PackageMoniker )( 
            IDismAppxPackageInfo2 * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_InstallLocation )( 
            IDismAppxPackageInfo2 * This,
            /* [retval][out] */ BSTR *Value);
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Regions )( 
            IDismAppxPackageInfo2 * This,
            /* [retval][out] */ BSTR *Value);
        
        END_INTERFACE
    } IDismAppxPackageInfo2Vtbl;

    interface IDismAppxPackageInfo2
    {
        CONST_VTBL struct IDismAppxPackageInfo2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAppxPackageInfo2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAppxPackageInfo2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAppxPackageInfo2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAppxPackageInfo2_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAppxPackageInfo2_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAppxPackageInfo2_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAppxPackageInfo2_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAppxPackageInfo2_get_Name(This,Value)	\
    ( (This)->lpVtbl -> get_Name(This,Value) ) 

#define IDismAppxPackageInfo2_get_PublisherId(This,Value)	\
    ( (This)->lpVtbl -> get_PublisherId(This,Value) ) 

#define IDismAppxPackageInfo2_get_Version(This,Value)	\
    ( (This)->lpVtbl -> get_Version(This,Value) ) 

#define IDismAppxPackageInfo2_get_Architecture(This,Value)	\
    ( (This)->lpVtbl -> get_Architecture(This,Value) ) 

#define IDismAppxPackageInfo2_get_ResourceId(This,Value)	\
    ( (This)->lpVtbl -> get_ResourceId(This,Value) ) 

#define IDismAppxPackageInfo2_get_PackageMoniker(This,Value)	\
    ( (This)->lpVtbl -> get_PackageMoniker(This,Value) ) 

#define IDismAppxPackageInfo2_get_InstallLocation(This,Value)	\
    ( (This)->lpVtbl -> get_InstallLocation(This,Value) ) 


#define IDismAppxPackageInfo2_get_Regions(This,Value)	\
    ( (This)->lpVtbl -> get_Regions(This,Value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAppxPackageInfo2_INTERFACE_DEFINED__ */


#ifndef __IDismAssocSupport_INTERFACE_DEFINED__
#define __IDismAssocSupport_INTERFACE_DEFINED__

/* interface IDismAssocSupport */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismAssocSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DCED1A68-143B-4C8C-8451-F155BDE821DB")
    IDismAssocSupport : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ExportAppAssoc( 
            /* [in] */ BSTR bstrFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ImportAppAssoc( 
            /* [in] */ BSTR bstrFile) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetAppAssoc( 
            /* [out] */ BSTR *pbstrOut) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveAppAssoc( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismAssocSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismAssocSupport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismAssocSupport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismAssocSupport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismAssocSupport * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismAssocSupport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismAssocSupport * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismAssocSupport * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ExportAppAssoc )( 
            IDismAssocSupport * This,
            /* [in] */ BSTR bstrFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ImportAppAssoc )( 
            IDismAssocSupport * This,
            /* [in] */ BSTR bstrFile);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetAppAssoc )( 
            IDismAssocSupport * This,
            /* [out] */ BSTR *pbstrOut);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveAppAssoc )( 
            IDismAssocSupport * This);
        
        END_INTERFACE
    } IDismAssocSupportVtbl;

    interface IDismAssocSupport
    {
        CONST_VTBL struct IDismAssocSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismAssocSupport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismAssocSupport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismAssocSupport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismAssocSupport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismAssocSupport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismAssocSupport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismAssocSupport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismAssocSupport_ExportAppAssoc(This,bstrFile)	\
    ( (This)->lpVtbl -> ExportAppAssoc(This,bstrFile) ) 

#define IDismAssocSupport_ImportAppAssoc(This,bstrFile)	\
    ( (This)->lpVtbl -> ImportAppAssoc(This,bstrFile) ) 

#define IDismAssocSupport_GetAppAssoc(This,pbstrOut)	\
    ( (This)->lpVtbl -> GetAppAssoc(This,pbstrOut) ) 

#define IDismAssocSupport_RemoveAppAssoc(This)	\
    ( (This)->lpVtbl -> RemoveAppAssoc(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismAssocSupport_INTERFACE_DEFINED__ */


#ifndef __IDismKcacheManager_INTERFACE_DEFINED__
#define __IDismKcacheManager_INTERFACE_DEFINED__

/* interface IDismKcacheManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismKcacheManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("ED08F15D-D5F2-40BF-B08B-73A8456CA62D")
    IDismKcacheManager : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetStringValue( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetDwordValue( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ unsigned long *pVal) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetBinaryValue( 
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ SAFEARRAY * *pbVal) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismKcacheManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismKcacheManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismKcacheManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismKcacheManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismKcacheManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismKcacheManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismKcacheManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismKcacheManager * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetStringValue )( 
            IDismKcacheManager * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ BSTR *pbstrVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetDwordValue )( 
            IDismKcacheManager * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ unsigned long *pVal);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetBinaryValue )( 
            IDismKcacheManager * This,
            /* [in] */ BSTR bstrName,
            /* [retval][out] */ SAFEARRAY * *pbVal);
        
        END_INTERFACE
    } IDismKcacheManagerVtbl;

    interface IDismKcacheManager
    {
        CONST_VTBL struct IDismKcacheManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismKcacheManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismKcacheManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismKcacheManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismKcacheManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismKcacheManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismKcacheManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismKcacheManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismKcacheManager_GetStringValue(This,bstrName,pbstrVal)	\
    ( (This)->lpVtbl -> GetStringValue(This,bstrName,pbstrVal) ) 

#define IDismKcacheManager_GetDwordValue(This,bstrName,pVal)	\
    ( (This)->lpVtbl -> GetDwordValue(This,bstrName,pVal) ) 

#define IDismKcacheManager_GetBinaryValue(This,bstrName,pbVal)	\
    ( (This)->lpVtbl -> GetBinaryValue(This,bstrName,pbVal) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismKcacheManager_INTERFACE_DEFINED__ */


#ifndef __IDismSetMachineName_INTERFACE_DEFINED__
#define __IDismSetMachineName_INTERFACE_DEFINED__

/* interface IDismSetMachineName */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismSetMachineName;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("16FCF50B-1EB0-4ED3-9A5C-8A33C80F0D83")
    IDismSetMachineName : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetMachineName( 
            /* [in] */ BSTR machineName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismSetMachineNameVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismSetMachineName * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismSetMachineName * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismSetMachineName * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismSetMachineName * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismSetMachineName * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismSetMachineName * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismSetMachineName * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetMachineName )( 
            IDismSetMachineName * This,
            /* [in] */ BSTR machineName);
        
        END_INTERFACE
    } IDismSetMachineNameVtbl;

    interface IDismSetMachineName
    {
        CONST_VTBL struct IDismSetMachineNameVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismSetMachineName_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismSetMachineName_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismSetMachineName_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismSetMachineName_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismSetMachineName_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismSetMachineName_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismSetMachineName_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismSetMachineName_SetMachineName(This,machineName)	\
    ( (This)->lpVtbl -> SetMachineName(This,machineName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismSetMachineName_INTERFACE_DEFINED__ */


#ifndef __IDismGenericManager_INTERFACE_DEFINED__
#define __IDismGenericManager_INTERFACE_DEFINED__

/* interface IDismGenericManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismGenericManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("0AB3AC34-C644-4903-AA5F-5B5D8F15D969")
    IDismGenericManager : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ IDismTokenCollection *Tokens) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismGenericManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismGenericManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismGenericManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismGenericManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismGenericManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismGenericManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismGenericManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismGenericManager * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IDismGenericManager * This,
            /* [in] */ IDismTokenCollection *Tokens);
        
        END_INTERFACE
    } IDismGenericManagerVtbl;

    interface IDismGenericManager
    {
        CONST_VTBL struct IDismGenericManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismGenericManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismGenericManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismGenericManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismGenericManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismGenericManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismGenericManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismGenericManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismGenericManager_Run(This,Tokens)	\
    ( (This)->lpVtbl -> Run(This,Tokens) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismGenericManager_INTERFACE_DEFINED__ */


#ifndef __IDismSysprep_INTERFACE_DEFINED__
#define __IDismSysprep_INTERFACE_DEFINED__

/* interface IDismSysprep */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismSysprep;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("DB46267B-2FEA-4BB5-9F14-E4E582E4777F")
    IDismSysprep : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Stage( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Cleanup( 
            /* [in] */ SYSPREP_RESEAL_TARGET Reseal,
            /* [in] */ BSTR Mode) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Generalize( 
            /* [in] */ SYSPREP_RESEAL_TARGET Reseal,
            /* [in] */ BSTR Mode,
            /* [in] */ BSTR UnattendPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE Specialize( 
            /* [in] */ BSTR UnattendPath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismSysprepVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismSysprep * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismSysprep * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismSysprep * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismSysprep * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismSysprep * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismSysprep * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismSysprep * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Stage )( 
            IDismSysprep * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Cleanup )( 
            IDismSysprep * This,
            /* [in] */ SYSPREP_RESEAL_TARGET Reseal,
            /* [in] */ BSTR Mode);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Generalize )( 
            IDismSysprep * This,
            /* [in] */ SYSPREP_RESEAL_TARGET Reseal,
            /* [in] */ BSTR Mode,
            /* [in] */ BSTR UnattendPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *Specialize )( 
            IDismSysprep * This,
            /* [in] */ BSTR UnattendPath);
        
        END_INTERFACE
    } IDismSysprepVtbl;

    interface IDismSysprep
    {
        CONST_VTBL struct IDismSysprepVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismSysprep_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismSysprep_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismSysprep_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismSysprep_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismSysprep_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismSysprep_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismSysprep_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismSysprep_Stage(This)	\
    ( (This)->lpVtbl -> Stage(This) ) 

#define IDismSysprep_Cleanup(This,Reseal,Mode)	\
    ( (This)->lpVtbl -> Cleanup(This,Reseal,Mode) ) 

#define IDismSysprep_Generalize(This,Reseal,Mode,UnattendPath)	\
    ( (This)->lpVtbl -> Generalize(This,Reseal,Mode,UnattendPath) ) 

#define IDismSysprep_Specialize(This,UnattendPath)	\
    ( (This)->lpVtbl -> Specialize(This,UnattendPath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismSysprep_INTERFACE_DEFINED__ */


#ifndef __IDismSysprepManager_INTERFACE_DEFINED__
#define __IDismSysprepManager_INTERFACE_DEFINED__

/* interface IDismSysprepManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismSysprepManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("8E65FBAC-20AD-4075-BD7B-377112FF1F69")
    IDismSysprepManager : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ IDismTokenCollection *Tokens) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismSysprepManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismSysprepManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismSysprepManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismSysprepManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismSysprepManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismSysprepManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismSysprepManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismSysprepManager * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IDismSysprepManager * This,
            /* [in] */ IDismTokenCollection *Tokens);
        
        END_INTERFACE
    } IDismSysprepManagerVtbl;

    interface IDismSysprepManager
    {
        CONST_VTBL struct IDismSysprepManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismSysprepManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismSysprepManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismSysprepManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismSysprepManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismSysprepManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismSysprepManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismSysprepManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismSysprepManager_Run(This,Tokens)	\
    ( (This)->lpVtbl -> Run(This,Tokens) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismSysprepManager_INTERFACE_DEFINED__ */


#ifndef __IDismSetupPlatform_INTERFACE_DEFINED__
#define __IDismSetupPlatform_INTERFACE_DEFINED__

/* interface IDismSetupPlatform */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismSetupPlatform;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("53219E4F-44C6-4ED4-83F9-065FDEE95795")
    IDismSetupPlatform : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE InitiateUninstall( 
            /* [in] */ unsigned long UninstallReason) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE RemoveUninstall( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetUninstallWindow( 
            /* [out] */ unsigned long *UninstallWindow) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SetUninstallWindow( 
            /* [in] */ unsigned long UninstallWindow) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismSetupPlatformVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismSetupPlatform * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismSetupPlatform * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismSetupPlatform * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismSetupPlatform * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismSetupPlatform * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismSetupPlatform * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismSetupPlatform * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *InitiateUninstall )( 
            IDismSetupPlatform * This,
            /* [in] */ unsigned long UninstallReason);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *RemoveUninstall )( 
            IDismSetupPlatform * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetUninstallWindow )( 
            IDismSetupPlatform * This,
            /* [out] */ unsigned long *UninstallWindow);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SetUninstallWindow )( 
            IDismSetupPlatform * This,
            /* [in] */ unsigned long UninstallWindow);
        
        END_INTERFACE
    } IDismSetupPlatformVtbl;

    interface IDismSetupPlatform
    {
        CONST_VTBL struct IDismSetupPlatformVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismSetupPlatform_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismSetupPlatform_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismSetupPlatform_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismSetupPlatform_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismSetupPlatform_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismSetupPlatform_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismSetupPlatform_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismSetupPlatform_InitiateUninstall(This,UninstallReason)	\
    ( (This)->lpVtbl -> InitiateUninstall(This,UninstallReason) ) 

#define IDismSetupPlatform_RemoveUninstall(This)	\
    ( (This)->lpVtbl -> RemoveUninstall(This) ) 

#define IDismSetupPlatform_GetUninstallWindow(This,UninstallWindow)	\
    ( (This)->lpVtbl -> GetUninstallWindow(This,UninstallWindow) ) 

#define IDismSetupPlatform_SetUninstallWindow(This,UninstallWindow)	\
    ( (This)->lpVtbl -> SetUninstallWindow(This,UninstallWindow) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismSetupPlatform_INTERFACE_DEFINED__ */


#ifndef __IDismSetupPlatformManager_INTERFACE_DEFINED__
#define __IDismSetupPlatformManager_INTERFACE_DEFINED__

/* interface IDismSetupPlatformManager */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismSetupPlatformManager;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("AA668C08-675C-49CB-A127-2CD57A173C04")
    IDismSetupPlatformManager : public IDispatch
    {
    public:
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE Run( 
            /* [in] */ IDismTokenCollection *Tokens) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismSetupPlatformManagerVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismSetupPlatformManager * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismSetupPlatformManager * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismSetupPlatformManager * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismSetupPlatformManager * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismSetupPlatformManager * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismSetupPlatformManager * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismSetupPlatformManager * This,
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
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *Run )( 
            IDismSetupPlatformManager * This,
            /* [in] */ IDismTokenCollection *Tokens);
        
        END_INTERFACE
    } IDismSetupPlatformManagerVtbl;

    interface IDismSetupPlatformManager
    {
        CONST_VTBL struct IDismSetupPlatformManagerVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismSetupPlatformManager_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismSetupPlatformManager_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismSetupPlatformManager_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismSetupPlatformManager_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismSetupPlatformManager_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismSetupPlatformManager_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismSetupPlatformManager_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismSetupPlatformManager_Run(This,Tokens)	\
    ( (This)->lpVtbl -> Run(This,Tokens) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismSetupPlatformManager_INTERFACE_DEFINED__ */


#ifndef __IDismFfuProvider_INTERFACE_DEFINED__
#define __IDismFfuProvider_INTERFACE_DEFINED__

/* interface IDismFfuProvider */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismFfuProvider;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("924D876E-17F7-4A5E-AC33-918C2BEA0FD5")
    IDismFfuProvider : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyImage( 
            /* [in] */ BSTR ImagePath,
            /* [in] */ BSTR ApplyPath,
            /* [in] */ BSTR PartPath) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE SplitImage( 
            /* [in] */ BSTR ImagePath,
            /* [in] */ BSTR PartPath,
            /* [in] */ UINT64 PartSize) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CaptureImage( 
            /* [in] */ BSTR CapturePath,
            /* [in] */ BSTR ImagePath,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Description,
            /* [in] */ BSTR PlatformIds,
            /* [in] */ unsigned short CompressionAlgorithm) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismFfuProviderVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismFfuProvider * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismFfuProvider * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismFfuProvider * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismFfuProvider * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismFfuProvider * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismFfuProvider * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismFfuProvider * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplyImage )( 
            IDismFfuProvider * This,
            /* [in] */ BSTR ImagePath,
            /* [in] */ BSTR ApplyPath,
            /* [in] */ BSTR PartPath);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *SplitImage )( 
            IDismFfuProvider * This,
            /* [in] */ BSTR ImagePath,
            /* [in] */ BSTR PartPath,
            /* [in] */ UINT64 PartSize);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CaptureImage )( 
            IDismFfuProvider * This,
            /* [in] */ BSTR CapturePath,
            /* [in] */ BSTR ImagePath,
            /* [in] */ BSTR Name,
            /* [in] */ BSTR Description,
            /* [in] */ BSTR PlatformIds,
            /* [in] */ unsigned short CompressionAlgorithm);
        
        END_INTERFACE
    } IDismFfuProviderVtbl;

    interface IDismFfuProvider
    {
        CONST_VTBL struct IDismFfuProviderVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismFfuProvider_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismFfuProvider_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismFfuProvider_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismFfuProvider_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismFfuProvider_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismFfuProvider_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismFfuProvider_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismFfuProvider_ApplyImage(This,ImagePath,ApplyPath,PartPath)	\
    ( (This)->lpVtbl -> ApplyImage(This,ImagePath,ApplyPath,PartPath) ) 

#define IDismFfuProvider_SplitImage(This,ImagePath,PartPath,PartSize)	\
    ( (This)->lpVtbl -> SplitImage(This,ImagePath,PartPath,PartSize) ) 

#define IDismFfuProvider_CaptureImage(This,CapturePath,ImagePath,Name,Description,PlatformIds,CompressionAlgorithm)	\
    ( (This)->lpVtbl -> CaptureImage(This,CapturePath,ImagePath,Name,Description,PlatformIds,CompressionAlgorithm) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismFfuProvider_INTERFACE_DEFINED__ */


#ifndef __IDismProvisioningSupport_INTERFACE_DEFINED__
#define __IDismProvisioningSupport_INTERFACE_DEFINED__

/* interface IDismProvisioningSupport */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProvisioningSupport;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("446E7AFC-05E3-4EEA-9E28-D8D6B324A8C7")
    IDismProvisioningSupport : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetElementCollection( 
            /* [in] */ BSTR bstrPackagePath,
            /* [retval][out] */ IDismProvPackageElementCollection **ppElementCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ApplyProvPackage( 
            /* [in] */ BSTR bstrPackagePath) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProvisioningSupportVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProvisioningSupport * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProvisioningSupport * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProvisioningSupport * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProvisioningSupport * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProvisioningSupport * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProvisioningSupport * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProvisioningSupport * This,
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
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetElementCollection )( 
            IDismProvisioningSupport * This,
            /* [in] */ BSTR bstrPackagePath,
            /* [retval][out] */ IDismProvPackageElementCollection **ppElementCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ApplyProvPackage )( 
            IDismProvisioningSupport * This,
            /* [in] */ BSTR bstrPackagePath);
        
        END_INTERFACE
    } IDismProvisioningSupportVtbl;

    interface IDismProvisioningSupport
    {
        CONST_VTBL struct IDismProvisioningSupportVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProvisioningSupport_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProvisioningSupport_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProvisioningSupport_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProvisioningSupport_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProvisioningSupport_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProvisioningSupport_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProvisioningSupport_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProvisioningSupport_GetElementCollection(This,bstrPackagePath,ppElementCollection)	\
    ( (This)->lpVtbl -> GetElementCollection(This,bstrPackagePath,ppElementCollection) ) 

#define IDismProvisioningSupport_ApplyProvPackage(This,bstrPackagePath)	\
    ( (This)->lpVtbl -> ApplyProvPackage(This,bstrPackagePath) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProvisioningSupport_INTERFACE_DEFINED__ */


#ifndef __IDismProvPackageElementCollection_INTERFACE_DEFINED__
#define __IDismProvPackageElementCollection_INTERFACE_DEFINED__

/* interface IDismProvPackageElementCollection */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProvPackageElementCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("3CA3A1B2-FF8C-487A-A0BC-95327CCABD7B")
    IDismProvPackageElementCollection : public IDispatch
    {
    public:
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *pnCount) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get_Item( 
            /* [in] */ long n,
            /* [retval][out] */ IDismProvPackageElement **ppPackage) = 0;
        
        virtual /* [propget][id] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProvPackageElementCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProvPackageElementCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProvPackageElementCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProvPackageElementCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProvPackageElementCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProvPackageElementCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProvPackageElementCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProvPackageElementCollection * This,
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
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            IDismProvPackageElementCollection * This,
            /* [retval][out] */ long *pnCount);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Item )( 
            IDismProvPackageElementCollection * This,
            /* [in] */ long n,
            /* [retval][out] */ IDismProvPackageElement **ppPackage);
        
        /* [propget][id] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            IDismProvPackageElementCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } IDismProvPackageElementCollectionVtbl;

    interface IDismProvPackageElementCollection
    {
        CONST_VTBL struct IDismProvPackageElementCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProvPackageElementCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProvPackageElementCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProvPackageElementCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProvPackageElementCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProvPackageElementCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProvPackageElementCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProvPackageElementCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProvPackageElementCollection_get_Count(This,pnCount)	\
    ( (This)->lpVtbl -> get_Count(This,pnCount) ) 

#define IDismProvPackageElementCollection_get_Item(This,n,ppPackage)	\
    ( (This)->lpVtbl -> get_Item(This,n,ppPackage) ) 

#define IDismProvPackageElementCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProvPackageElementCollection_INTERFACE_DEFINED__ */


#ifndef __IDismProvPackageElement_INTERFACE_DEFINED__
#define __IDismProvPackageElement_INTERFACE_DEFINED__

/* interface IDismProvPackageElement */
/* [object][oleautomation][nonextensible][dual][helpstring][uuid] */ 


EXTERN_C const IID IID_IDismProvPackageElement;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("F7A983D3-E787-40A8-9572-CD04FF99D001")
    IDismProvPackageElement : public IDispatch
    {
    public:
        virtual /* [helpstring][propget][id] */ HRESULT STDMETHODCALLTYPE get_Type( 
            /* [retval][out] */ DISM_ELEMENT_TYPE *pVal) = 0;
        
        virtual /* [id] */ HRESULT STDMETHODCALLTYPE GetDismPropertyCollection( 
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDismProvPackageElementVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDismProvPackageElement * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDismProvPackageElement * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDismProvPackageElement * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IDismProvPackageElement * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IDismProvPackageElement * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IDismProvPackageElement * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDismProvPackageElement * This,
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
        
        /* [helpstring][propget][id] */ HRESULT ( STDMETHODCALLTYPE *get_Type )( 
            IDismProvPackageElement * This,
            /* [retval][out] */ DISM_ELEMENT_TYPE *pVal);
        
        /* [id] */ HRESULT ( STDMETHODCALLTYPE *GetDismPropertyCollection )( 
            IDismProvPackageElement * This,
            /* [retval][out] */ IDismPropertyCollection **PropertyCollection);
        
        END_INTERFACE
    } IDismProvPackageElementVtbl;

    interface IDismProvPackageElement
    {
        CONST_VTBL struct IDismProvPackageElementVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDismProvPackageElement_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDismProvPackageElement_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDismProvPackageElement_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDismProvPackageElement_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDismProvPackageElement_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDismProvPackageElement_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDismProvPackageElement_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDismProvPackageElement_get_Type(This,pVal)	\
    ( (This)->lpVtbl -> get_Type(This,pVal) ) 

#define IDismProvPackageElement_GetDismPropertyCollection(This,PropertyCollection)	\
    ( (This)->lpVtbl -> GetDismPropertyCollection(This,PropertyCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDismProvPackageElement_INTERFACE_DEFINED__ */


#ifndef ___IDismEvents_DISPINTERFACE_DEFINED__
#define ___IDismEvents_DISPINTERFACE_DEFINED__

/* dispinterface _IDismEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__IDismEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("A0EFD55A-17A8-413D-A53A-3C43AEF96C0E")
    _IDismEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _IDismEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _IDismEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _IDismEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _IDismEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _IDismEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _IDismEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _IDismEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _IDismEvents * This,
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
        
        END_INTERFACE
    } _IDismEventsVtbl;

    interface _IDismEvents
    {
        CONST_VTBL struct _IDismEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _IDismEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _IDismEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _IDismEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _IDismEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _IDismEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _IDismEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _IDismEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___IDismEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DismManager;

#ifdef __cplusplus

class DECLSPEC_UUID("BE33A527-42FE-43A4-AC5E-C1D059FC705F")
DismManager;
#endif
#endif /* __DismLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


