// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuitDreamingGameMode.h"

#ifdef QUITDREAMING_QuitDreamingGameMode_generated_h
#error "QuitDreamingGameMode.generated.h already included, missing '#pragma once' in QuitDreamingGameMode.h"
#endif
#define QUITDREAMING_QuitDreamingGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AQuitDreamingGameMode ****************************************************
QUITDREAMING_API UClass* Z_Construct_UClass_AQuitDreamingGameMode_NoRegister();

#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuitDreamingGameMode(); \
	friend struct Z_Construct_UClass_AQuitDreamingGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUITDREAMING_API UClass* Z_Construct_UClass_AQuitDreamingGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AQuitDreamingGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuitDreaming"), Z_Construct_UClass_AQuitDreamingGameMode_NoRegister) \
	DECLARE_SERIALIZER(AQuitDreamingGameMode)


#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AQuitDreamingGameMode(AQuitDreamingGameMode&&) = delete; \
	AQuitDreamingGameMode(const AQuitDreamingGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuitDreamingGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuitDreamingGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AQuitDreamingGameMode) \
	NO_API virtual ~AQuitDreamingGameMode();


#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h_14_PROLOG
#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h_17_INCLASS_NO_PURE_DECLS \
	FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AQuitDreamingGameMode;

// ********** End Class AQuitDreamingGameMode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuitDreaming_Source_QuitDreaming_QuitDreamingGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
