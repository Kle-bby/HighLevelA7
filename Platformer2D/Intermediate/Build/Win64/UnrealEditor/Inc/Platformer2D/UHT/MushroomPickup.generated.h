// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MushroomPickup.h"

#ifdef PLATFORMER2D_MushroomPickup_generated_h
#error "MushroomPickup.generated.h already included, missing '#pragma once' in MushroomPickup.h"
#endif
#define PLATFORMER2D_MushroomPickup_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AMushroomPickup **********************************************************
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnBackwardOverlap); \
	DECLARE_FUNCTION(execOnForwardOverlap);


PLATFORMER2D_API UClass* Z_Construct_UClass_AMushroomPickup_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMushroomPickup(); \
	friend struct Z_Construct_UClass_AMushroomPickup_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_AMushroomPickup_NoRegister(); \
public: \
	DECLARE_CLASS2(AMushroomPickup, APickup, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_AMushroomPickup_NoRegister) \
	DECLARE_SERIALIZER(AMushroomPickup)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMushroomPickup(AMushroomPickup&&) = delete; \
	AMushroomPickup(const AMushroomPickup&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMushroomPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMushroomPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMushroomPickup) \
	NO_API virtual ~AMushroomPickup();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h_12_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMushroomPickup;

// ********** End Class AMushroomPickup ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
