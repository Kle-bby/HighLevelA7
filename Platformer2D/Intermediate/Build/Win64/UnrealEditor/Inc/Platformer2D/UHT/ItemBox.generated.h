// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemBox.h"

#ifdef PLATFORMER2D_ItemBox_generated_h
#error "ItemBox.generated.h already included, missing '#pragma once' in ItemBox.h"
#endif
#define PLATFORMER2D_ItemBox_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AItemBox *****************************************************************
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBox_NoRegister();

#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h_34_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAItemBox(); \
	friend struct Z_Construct_UClass_AItemBox_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PLATFORMER2D_API UClass* Z_Construct_UClass_AItemBox_NoRegister(); \
public: \
	DECLARE_CLASS2(AItemBox, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Platformer2D"), Z_Construct_UClass_AItemBox_NoRegister) \
	DECLARE_SERIALIZER(AItemBox)


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h_34_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AItemBox(AItemBox&&) = delete; \
	AItemBox(const AItemBox&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AItemBox); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AItemBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AItemBox) \
	NO_API virtual ~AItemBox();


#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h_31_PROLOG
#define FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h_34_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h_34_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h_34_INCLASS_NO_PURE_DECLS \
	FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h_34_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AItemBox;

// ********** End Class AItemBox *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_ItemBox_h

// ********** Begin Enum EItemBoxState *************************************************************
#define FOREACH_ENUM_EITEMBOXSTATE(op) \
	op(EItemBoxState::Unknown) \
	op(EItemBoxState::Active) \
	op(EItemBoxState::AnimUp) \
	op(EItemBoxState::AnimDown) \
	op(EItemBoxState::Spawning) \
	op(EItemBoxState::Inactive) 

enum class EItemBoxState : uint8;
template<> struct TIsUEnumClass<EItemBoxState> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EItemBoxState>();
// ********** End Enum EItemBoxState ***************************************************************

// ********** Begin Enum EItemBoxContents **********************************************************
#define FOREACH_ENUM_EITEMBOXCONTENTS(op) \
	op(EItemBoxContents::Mushroom) \
	op(EItemBoxContents::Coin1) \
	op(EItemBoxContents::Coin5) \
	op(EItemBoxContents::Coin10) 

enum class EItemBoxContents : uint8;
template<> struct TIsUEnumClass<EItemBoxContents> { enum { Value = true }; };
template<> PLATFORMER2D_API UEnum* StaticEnum<EItemBoxContents>();
// ********** End Enum EItemBoxContents ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
