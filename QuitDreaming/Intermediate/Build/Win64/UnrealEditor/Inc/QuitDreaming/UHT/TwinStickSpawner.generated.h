// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_TwinStick/TwinStickSpawner.h"

#ifdef QUITDREAMING_TwinStickSpawner_generated_h
#error "TwinStickSpawner.generated.h already included, missing '#pragma once' in TwinStickSpawner.h"
#endif
#define QUITDREAMING_TwinStickSpawner_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ATwinStickSpawner ********************************************************
QUITDREAMING_API UClass* Z_Construct_UClass_ATwinStickSpawner_NoRegister();

#define FID_QuitDreaming_Source_QuitDreaming_Variant_TwinStick_TwinStickSpawner_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATwinStickSpawner(); \
	friend struct Z_Construct_UClass_ATwinStickSpawner_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUITDREAMING_API UClass* Z_Construct_UClass_ATwinStickSpawner_NoRegister(); \
public: \
	DECLARE_CLASS2(ATwinStickSpawner, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuitDreaming"), Z_Construct_UClass_ATwinStickSpawner_NoRegister) \
	DECLARE_SERIALIZER(ATwinStickSpawner)


#define FID_QuitDreaming_Source_QuitDreaming_Variant_TwinStick_TwinStickSpawner_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATwinStickSpawner(ATwinStickSpawner&&) = delete; \
	ATwinStickSpawner(const ATwinStickSpawner&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATwinStickSpawner); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATwinStickSpawner); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ATwinStickSpawner) \
	NO_API virtual ~ATwinStickSpawner();


#define FID_QuitDreaming_Source_QuitDreaming_Variant_TwinStick_TwinStickSpawner_h_15_PROLOG
#define FID_QuitDreaming_Source_QuitDreaming_Variant_TwinStick_TwinStickSpawner_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuitDreaming_Source_QuitDreaming_Variant_TwinStick_TwinStickSpawner_h_18_INCLASS_NO_PURE_DECLS \
	FID_QuitDreaming_Source_QuitDreaming_Variant_TwinStick_TwinStickSpawner_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATwinStickSpawner;

// ********** End Class ATwinStickSpawner **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuitDreaming_Source_QuitDreaming_Variant_TwinStick_TwinStickSpawner_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
