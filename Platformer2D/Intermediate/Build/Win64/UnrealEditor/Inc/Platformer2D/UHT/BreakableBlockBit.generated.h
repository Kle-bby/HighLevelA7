// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BreakableBlockBit.h"

#ifdef PLATFORMER2D_BreakableBlockBit_generated_h
#error "BreakableBlockBit.generated.h already included, missing '#pragma once' in BreakableBlockBit.h"
#endif
#define PLATFORMER2D_BreakableBlockBit_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ABreakableBlockBit *******************************************************
PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlockBit_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABreakableBlockBit(); \
	friend struct Z_Construct_UClass_ABreakableBlockBit_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlockBit_NoRegister(); \
public: \
	DECLARE_CLASS2(ABreakableBlockBit, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_ABreakableBlockBit_NoRegister) \
	DECLARE_SERIALIZER(ABreakableBlockBit)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ABreakableBlockBit(ABreakableBlockBit&&) = delete; \
	ABreakableBlockBit(const ABreakableBlockBit&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABreakableBlockBit); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABreakableBlockBit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABreakableBlockBit) \
	NO_API virtual ~ABreakableBlockBit();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_18_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ABreakableBlockBit;

// ********** End Class ABreakableBlockBit *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h

// ********** Begin Enum EBreakableBlockBitType ****************************************************
#define FOREACH_ENUM_EBREAKABLEBLOCKBITTYPE(op) \
	op(EBreakableBlockBitType::Unknown) \
	op(EBreakableBlockBitType::Left) \
	op(EBreakableBlockBitType::Right) 

enum class EBreakableBlockBitType : uint8;
template<> struct TIsUEnumClass<EBreakableBlockBitType> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EBreakableBlockBitType>();
// ********** End Enum EBreakableBlockBitType ******************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
