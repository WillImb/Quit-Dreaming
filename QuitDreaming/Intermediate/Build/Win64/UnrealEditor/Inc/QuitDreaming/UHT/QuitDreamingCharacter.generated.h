// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuitDreamingCharacter.h"

#ifdef QUITDREAMING_QuitDreamingCharacter_generated_h
#error "QuitDreamingCharacter.generated.h already included, missing '#pragma once' in QuitDreamingCharacter.h"
#endif
#define QUITDREAMING_QuitDreamingCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AQuitDreamingCharacter ***************************************************
QUITDREAMING_API UClass* Z_Construct_UClass_AQuitDreamingCharacter_NoRegister();

#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuitDreamingCharacter(); \
	friend struct Z_Construct_UClass_AQuitDreamingCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUITDREAMING_API UClass* Z_Construct_UClass_AQuitDreamingCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AQuitDreamingCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuitDreaming"), Z_Construct_UClass_AQuitDreamingCharacter_NoRegister) \
	DECLARE_SERIALIZER(AQuitDreamingCharacter)


#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingCharacter_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AQuitDreamingCharacter(AQuitDreamingCharacter&&) = delete; \
	AQuitDreamingCharacter(const AQuitDreamingCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuitDreamingCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuitDreamingCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AQuitDreamingCharacter) \
	NO_API virtual ~AQuitDreamingCharacter();


#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingCharacter_h_12_PROLOG
#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuitDreaming_Source_QuitDreaming_QuitDreamingCharacter_h_15_INCLASS_NO_PURE_DECLS \
	FID_QuitDreaming_Source_QuitDreaming_QuitDreamingCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AQuitDreamingCharacter;

// ********** End Class AQuitDreamingCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuitDreaming_Source_QuitDreaming_QuitDreamingCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
