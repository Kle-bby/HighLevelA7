// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy.h"

#ifdef PLATFORMER2D_Enemy_generated_h
#error "Enemy.generated.h already included, missing '#pragma once' in Enemy.h"
#endif
#define PLATFORMER2D_Enemy_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AEnemy *******************************************************************
PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy(); \
	friend struct Z_Construct_UClass_AEnemy_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy_NoRegister(); \
public: \
	DECLARE_CLASS2(AEnemy, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_AEnemy_NoRegister) \
	DECLARE_SERIALIZER(AEnemy)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AEnemy(AEnemy&&) = delete; \
	AEnemy(const AEnemy&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy) \
	NO_API virtual ~AEnemy();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h_20_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AEnemy;

// ********** End Class AEnemy *********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h

// ********** Begin Enum EEnemyType ****************************************************************
#define FOREACH_ENUM_EENEMYTYPE(op) \
	op(EEnemyType::Unknown) \
	op(EEnemyType::PiranhaPlant) \
	op(EEnemyType::Goomba) 

enum class EEnemyType : uint8;
template<> struct TIsUEnumClass<EEnemyType> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EEnemyType>();
// ********** End Enum EEnemyType ******************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
