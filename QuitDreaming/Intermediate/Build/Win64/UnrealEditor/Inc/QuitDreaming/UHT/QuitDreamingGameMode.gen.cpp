// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QuitDreaming/QuitDreamingGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeQuitDreamingGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
QUITDREAMING_API UClass* Z_Construct_UClass_AQuitDreamingGameMode();
QUITDREAMING_API UClass* Z_Construct_UClass_AQuitDreamingGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_QuitDreaming();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AQuitDreamingGameMode ****************************************************
void AQuitDreamingGameMode::StaticRegisterNativesAQuitDreamingGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AQuitDreamingGameMode;
UClass* AQuitDreamingGameMode::GetPrivateStaticClass()
{
	using TClass = AQuitDreamingGameMode;
	if (!Z_Registration_Info_UClass_AQuitDreamingGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("QuitDreamingGameMode"),
			Z_Registration_Info_UClass_AQuitDreamingGameMode.InnerSingleton,
			StaticRegisterNativesAQuitDreamingGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AQuitDreamingGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AQuitDreamingGameMode_NoRegister()
{
	return AQuitDreamingGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AQuitDreamingGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Game Mode for a top-down perspective game\n *  Sets the default gameplay framework classes\n *  Check the Blueprint derived class for the set values\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "QuitDreamingGameMode.h" },
		{ "ModuleRelativePath", "QuitDreamingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Game Mode for a top-down perspective game\nSets the default gameplay framework classes\nCheck the Blueprint derived class for the set values" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AQuitDreamingGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AQuitDreamingGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_QuitDreaming,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AQuitDreamingGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AQuitDreamingGameMode_Statics::ClassParams = {
	&AQuitDreamingGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AQuitDreamingGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AQuitDreamingGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AQuitDreamingGameMode()
{
	if (!Z_Registration_Info_UClass_AQuitDreamingGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AQuitDreamingGameMode.OuterSingleton, Z_Construct_UClass_AQuitDreamingGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AQuitDreamingGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AQuitDreamingGameMode);
AQuitDreamingGameMode::~AQuitDreamingGameMode() {}
// ********** End Class AQuitDreamingGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h__Script_QuitDreaming_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AQuitDreamingGameMode, AQuitDreamingGameMode::StaticClass, TEXT("AQuitDreamingGameMode"), &Z_Registration_Info_UClass_AQuitDreamingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AQuitDreamingGameMode), 141011499U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h__Script_QuitDreaming_2699479084(TEXT("/Script/QuitDreaming"),
	Z_CompiledInDeferFile_FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h__Script_QuitDreaming_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h__Script_QuitDreaming_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
