// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BreakableBlock.h"

#ifdef PLATFORMER2D_BreakableBlock_generated_h
#error "BreakableBlock.generated.h already included, missing '#pragma once' in BreakableBlock.h"
#endif
#define PLATFORMER2D_BreakableBlock_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class ABreakableBlock **********************************************************
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlock_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableBlock(); \
	friend struct Z_Construct_UClass_ABreakableBlock_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlock_NoRegister(); \
public: \
	DECLARE_CLASS2(ABreakableBlock, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_ABreakableBlock_NoRegister) \
	DECLARE_SERIALIZER(ABreakableBlock)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABreakableBlock(ABreakableBlock&&) = delete; \
	ABreakableBlock(const ABreakableBlock&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableBlock); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableBlock); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableBlock) \
	NO_API virtual ~ABreakableBlock();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h_23_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h_26_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABreakableBlock;

// ********** End Class ABreakableBlock ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h

// ********** Begin Enum EBreakableBlockState ******************************************************
#define FOREACH_ENUM_EBREAKABLEBLOCKSTATE(op) \
	op(EBreakableBlockState::Unknown) \
	op(EBreakableBlockState::Active) \
	op(EBreakableBlockState::AnimUp) \
	op(EBreakableBlockState::AnimDown) \
	op(EBreakableBlockState::Breaking) 

enum class EBreakableBlockState : uint8;
template<> struct TIsUEnumClass<EBreakableBlockState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EBreakableBlockState>();
// ********** End Enum EBreakableBlockState ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
