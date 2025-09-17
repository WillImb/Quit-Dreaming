// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "QuitDreamingPlayerController.h"

#ifdef QUITDREAMING_QuitDreamingPlayerController_generated_h
#error "QuitDreamingPlayerController.generated.h already included, missing '#pragma once' in QuitDreamingPlayerController.h"
#endif
#define QUITDREAMING_QuitDreamingPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AQuitDreamingPlayerController ********************************************
QUITDREAMING_API UClass* Z_Construct_UClass_AQuitDreamingPlayerController_NoRegister();

#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingPlayerController_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuitDreamingPlayerController(); \
	friend struct Z_Construct_UClass_AQuitDreamingPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend QUITDREAMING_API UClass* Z_Construct_UClass_AQuitDreamingPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AQuitDreamingPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QuitDreaming"), Z_Construct_UClass_AQuitDreamingPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AQuitDreamingPlayerController)


#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingPlayerController_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AQuitDreamingPlayerController(AQuitDreamingPlayerController&&) = delete; \
	AQuitDreamingPlayerController(const AQuitDreamingPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuitDreamingPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuitDreamingPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AQuitDreamingPlayerController) \
	NO_API virtual ~AQuitDreamingPlayerController();


#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingPlayerController_h_20_PROLOG
#define FID_QuitDreaming_Source_QuitDreaming_QuitDreamingPlayerController_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_QuitDreaming_Source_QuitDreaming_QuitDreamingPlayerController_h_23_INCLASS_NO_PURE_DECLS \
	FID_QuitDreaming_Source_QuitDreaming_QuitDreamingPlayerController_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AQuitDreamingPlayerController;

// ********** End Class AQuitDreamingPlayerController **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_QuitDreaming_Source_QuitDreaming_QuitDreamingPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
