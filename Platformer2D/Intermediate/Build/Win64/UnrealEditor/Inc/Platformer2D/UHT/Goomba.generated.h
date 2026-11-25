// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Goomba.h"

#ifdef PLATFORMER2D_Goomba_generated_h
#error "Goomba.generated.h already included, missing '#pragma once' in Goomba.h"
#endif
#define PLATFORMER2D_Goomba_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AGoomba ******************************************************************
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnBackwardOverlap); \
	DECLARE_FUNCTION(execOnForwardOverlap);


PLATFORMER2D_API UClass* Z_Construct_UClass_AGoomba_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoomba(); \
	friend struct Z_Construct_UClass_AGoomba_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_AGoomba_NoRegister(); \
public: \
	DECLARE_CLASS2(AGoomba, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_AGoomba_NoRegister) \
	DECLARE_SERIALIZER(AGoomba)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h_32_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGoomba(AGoomba&&) = delete; \
	AGoomba(const AGoomba&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoomba); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoomba); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoomba) \
	NO_API virtual ~AGoomba();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h_29_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h_32_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGoomba;

// ********** End Class AGoomba ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Goomba_h

// ********** Begin Enum EGoombaState **************************************************************
#define FOREACH_ENUM_EGOOMBASTATE(op) \
	op(EGoombaState::Unknown) \
	op(EGoombaState::Walking) \
	op(EGoombaState::Squished) 

enum class EGoombaState : uint8;
template<> struct TIsUEnumClass<EGoombaState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EGoombaState>();
// ********** End Enum EGoombaState ****************************************************************

// ********** Begin Enum EGoombaInitialDirection ***************************************************
#define FOREACH_ENUM_EGOOMBAINITIALDIRECTION(op) \
	op(EGoombaInitialDirection::Random) \
	op(EGoombaInitialDirection::Left) \
	op(EGoombaInitialDirection::Right) 

enum class EGoombaInitialDirection : uint8;
template<> struct TIsUEnumClass<EGoombaInitialDirection> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EGoombaInitialDirection>();
// ********** End Enum EGoombaInitialDirection *****************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
