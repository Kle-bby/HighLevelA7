// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MarioCharacter.h"

#ifdef PLATFORMER2D_MarioCharacter_generated_h
#error "MarioCharacter.generated.h already included, missing '#pragma once' in MarioCharacter.h"
#endif
#define PLATFORMER2D_MarioCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AMarioCharacter **********************************************************
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegan); \
	DECLARE_FUNCTION(execOnHit);


PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCharacter_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMarioCharacter(); \
	friend struct Z_Construct_UClass_AMarioCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AMarioCharacter, APaperCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_AMarioCharacter_NoRegister) \
	DECLARE_SERIALIZER(AMarioCharacter)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AMarioCharacter(AMarioCharacter&&) = delete; \
	AMarioCharacter(const AMarioCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMarioCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMarioCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMarioCharacter) \
	NO_API virtual ~AMarioCharacter();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h_16_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AMarioCharacter;

// ********** End Class AMarioCharacter ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
