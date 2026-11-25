// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MarioState.h"

#ifdef PLATFORMER2D_MarioState_generated_h
#error "MarioState.generated.h already included, missing '#pragma once' in MarioState.h"
#endif
#define PLATFORMER2D_MarioState_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AMarioState **************************************************************
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioState_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMarioState(); \
	friend struct Z_Construct_UClass_AMarioState_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioState_NoRegister(); \
public: \
	DECLARE_CLASS2(AMarioState, APlayerState, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_AMarioState_NoRegister) \
	DECLARE_SERIALIZER(AMarioState)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h_41_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMarioState(AMarioState&&) = delete; \
	AMarioState(const AMarioState&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarioState); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarioState); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMarioState) \
	NO_API virtual ~AMarioState();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h_38_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h_41_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMarioState;

// ********** End Class AMarioState ****************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioState_h

// ********** Begin Enum EMarioState ***************************************************************
#define FOREACH_ENUM_EMARIOSTATE(op) \
	op(EMarioState::Idle) \
	op(EMarioState::Walking) \
	op(EMarioState::Jumping) \
	op(EMarioState::Falling) \
	op(EMarioState::Ducking) \
	op(EMarioState::Dead) 

enum class EMarioState : uint8;
template<> struct TIsUEnumClass<EMarioState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioState>();
// ********** End Enum EMarioState *****************************************************************

// ********** Begin Enum EMarioForm ****************************************************************
#define FOREACH_ENUM_EMARIOFORM(op) \
	op(EMarioForm::Small) \
	op(EMarioForm::Super) 

enum class EMarioForm : uint8;
template<> struct TIsUEnumClass<EMarioForm> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioForm>();
// ********** End Enum EMarioForm ******************************************************************

// ********** Begin Enum EMarioDirection ***********************************************************
#define FOREACH_ENUM_EMARIODIRECTION(op) \
	op(EMarioDirection::Right) \
	op(EMarioDirection::Left) 

enum class EMarioDirection : uint8;
template<> struct TIsUEnumClass<EMarioDirection> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EMarioDirection>();
// ********** End Enum EMarioDirection *************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
