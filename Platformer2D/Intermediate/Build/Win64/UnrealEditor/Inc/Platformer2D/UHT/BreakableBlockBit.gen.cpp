// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/BreakableBlockBit.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBreakableBlockBit() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlockBit();
PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlockBit_NoRegister();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBreakableBlockBitType ****************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBreakableBlockBitType;
static UEnum* EBreakableBlockBitType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBreakableBlockBitType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBreakableBlockBitType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EBreakableBlockBitType"));
	}
	return Z_Registration_Info_UEnum_EBreakableBlockBitType.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EBreakableBlockBitType>()
{
	return EBreakableBlockBitType_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Left.DisplayName", "Left" },
		{ "Left.Name", "EBreakableBlockBitType::Left" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
		{ "Right.DisplayName", "Right" },
		{ "Right.Name", "EBreakableBlockBitType::Right" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EBreakableBlockBitType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBreakableBlockBitType::Unknown", (int64)EBreakableBlockBitType::Unknown },
		{ "EBreakableBlockBitType::Left", (int64)EBreakableBlockBitType::Left },
		{ "EBreakableBlockBitType::Right", (int64)EBreakableBlockBitType::Right },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EBreakableBlockBitType",
	"EBreakableBlockBitType",
	Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType()
{
	if (!Z_Registration_Info_UEnum_EBreakableBlockBitType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBreakableBlockBitType.InnerSingleton, Z_Construct_UEnum_Platformer2D_EBreakableBlockBitType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBreakableBlockBitType.InnerSingleton;
}
// ********** End Enum EBreakableBlockBitType ******************************************************

// ********** Begin Class ABreakableBlockBit *******************************************************
void ABreakableBlockBit::StaticRegisterNativesABreakableBlockBit()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABreakableBlockBit;
UClass* ABreakableBlockBit::GetPrivateStaticClass()
{
	using TClass = ABreakableBlockBit;
	if (!Z_Registration_Info_UClass_ABreakableBlockBit.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BreakableBlockBit"),
			Z_Registration_Info_UClass_ABreakableBlockBit.InnerSingleton,
			StaticRegisterNativesABreakableBlockBit,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ABreakableBlockBit.InnerSingleton;
}
UClass* Z_Construct_UClass_ABreakableBlockBit_NoRegister()
{
	return ABreakableBlockBit::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABreakableBlockBit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableBlockBit.h" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LeftSprite_MetaData[] = {
		{ "Category", "Sprites" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSprite_MetaData[] = {
		{ "Category", "Sprites" },
		{ "ModuleRelativePath", "BreakableBlockBit.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftSprite;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RightSprite;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableBlockBit>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlockBit, Root), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlockBit, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_LeftSprite = { "LeftSprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlockBit, LeftSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LeftSprite_MetaData), NewProp_LeftSprite_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_RightSprite = { "RightSprite", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlockBit, RightSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSprite_MetaData), NewProp_RightSprite_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableBlockBit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_SpriteComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_LeftSprite,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlockBit_Statics::NewProp_RightSprite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABreakableBlockBit_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABreakableBlockBit_Statics::ClassParams = {
	&ABreakableBlockBit::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABreakableBlockBit_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlockBit_Statics::Class_MetaDataParams), Z_Construct_UClass_ABreakableBlockBit_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABreakableBlockBit()
{
	if (!Z_Registration_Info_UClass_ABreakableBlockBit.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABreakableBlockBit.OuterSingleton, Z_Construct_UClass_ABreakableBlockBit_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABreakableBlockBit.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableBlockBit);
ABreakableBlockBit::~ABreakableBlockBit() {}
// ********** End Class ABreakableBlockBit *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h__Script_Platformer2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBreakableBlockBitType_StaticEnum, TEXT("EBreakableBlockBitType"), &Z_Registration_Info_UEnum_EBreakableBlockBitType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 456992236U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABreakableBlockBit, ABreakableBlockBit::StaticClass, TEXT("ABreakableBlockBit"), &Z_Registration_Info_UClass_ABreakableBlockBit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABreakableBlockBit), 1850915923U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h__Script_Platformer2D_609961197(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h__Script_Platformer2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlockBit_h__Script_Platformer2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
