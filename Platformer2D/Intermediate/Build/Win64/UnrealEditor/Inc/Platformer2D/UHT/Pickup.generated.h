// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Pickup.h"

#ifdef PLATFORMER2D_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define PLATFORMER2D_Pickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class APickup ******************************************************************
PLATFORMER2D_API UClass* Z_Construct_UClass_APickup_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend struct Z_Construct_UClass_APickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_APickup_NoRegister(); \
public: \
	DECLARE_CLASS2(APickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_APickup_NoRegister) \
	DECLARE_SERIALIZER(APickup)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h_30_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	APickup(APickup&&) = delete; \
	APickup(const APickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup) \
	NO_API virtual ~APickup();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h_27_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h_30_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class APickup;

// ********** End Class APickup ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Pickup_h

// ********** Begin Enum EPickupType ***************************************************************
#define FOREACH_ENUM_EPICKUPTYPE(op) \
	op(EPickupType::Unknown) \
	op(EPickupType::Mushroom) \
	op(EPickupType::Coin) 

enum class EPickupType : uint8;
template<> struct TIsUEnumClass<EPickupType> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EPickupType>();
// ********** End Enum EPickupType *****************************************************************

// ********** Begin Enum EPickupState **************************************************************
#define FOREACH_ENUM_EPICKUPSTATE(op) \
	op(EPickupState::Unknown) \
	op(EPickupState::Spawning) \
	op(EPickupState::Active) 

enum class EPickupState : uint8;
template<> struct TIsUEnumClass<EPickupState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EPickupState>();
// ********** End Enum EPickupState ****************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
