// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PiranhaPlant.h"

#ifdef PLATFORMER2D_PiranhaPlant_generated_h
#error "PiranhaPlant.generated.h already included, missing '#pragma once' in PiranhaPlant.h"
#endif
#define PLATFORMER2D_PiranhaPlant_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APiranhaPlant ************************************************************
PLATFORMER2D_API UClass* Z_Construct_UClass_APiranhaPlant_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPiranhaPlant(); \
	friend struct Z_Construct_UClass_APiranhaPlant_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_APiranhaPlant_NoRegister(); \
public: \
	DECLARE_CLASS2(APiranhaPlant, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_APiranhaPlant_NoRegister) \
	DECLARE_SERIALIZER(APiranhaPlant)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APiranhaPlant(APiranhaPlant&&) = delete; \
	APiranhaPlant(const APiranhaPlant&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APiranhaPlant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APiranhaPlant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APiranhaPlant) \
	NO_API virtual ~APiranhaPlant();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h_23_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APiranhaPlant;

// ********** End Class APiranhaPlant **************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PiranhaPlant_h

// ********** Begin Enum EPiranhaPlantState ********************************************************
#define FOREACH_ENUM_EPIRANHAPLANTSTATE(op) \
	op(EPiranhaPlantState::Unknown) \
	op(EPiranhaPlantState::Hiding) \
	op(EPiranhaPlantState::AnimatingUp) \
	op(EPiranhaPlantState::Active) \
	op(EPiranhaPlantState::AnimatingDown) 

enum class EPiranhaPlantState : uint8;
template<> struct TIsUEnumClass<EPiranhaPlantState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EPiranhaPlantState>();
// ********** End Enum EPiranhaPlantState **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
