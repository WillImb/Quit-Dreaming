// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuitDreaming_init() {}
	QUITDREAMING_API UFunction* Z_Construct_UDelegateFunction_QuitDreaming_OnUnitMoveCompletedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_QuitDreaming;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_QuitDreaming()
	{
		if (!Z_Registration_Info_UPackage__Script_QuitDreaming.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_QuitDreaming_OnUnitMoveCompletedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/QuitDreaming",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x8F51DD2F,
				0x0B15DEE4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_QuitDreaming.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_QuitDreaming.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_QuitDreaming(Z_Construct_UPackage__Script_QuitDreaming, TEXT("/Script/QuitDreaming"), Z_Registration_Info_UPackage__Script_QuitDreaming, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x8F51DD2F, 0x0B15DEE4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
