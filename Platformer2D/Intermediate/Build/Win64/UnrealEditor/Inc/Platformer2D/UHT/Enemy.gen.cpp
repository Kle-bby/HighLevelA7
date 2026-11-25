// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/Enemy.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeEnemy() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy();
PLATFORMER2D_API UClass* Z_Construct_UClass_AEnemy_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UEnemyDataAsset_NoRegister();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EEnemyType();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EEnemyType ****************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnemyType;
static UEnum* EEnemyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EEnemyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EEnemyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EEnemyType, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EEnemyType"));
	}
	return Z_Registration_Info_UEnum_EEnemyType.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EEnemyType>()
{
	return EEnemyType_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EEnemyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Goomba.DisplayName", "Goomba" },
		{ "Goomba.Name", "EEnemyType::Goomba" },
		{ "ModuleRelativePath", "Enemy.h" },
		{ "PiranhaPlant.DisplayName", "PiranhaPlant" },
		{ "PiranhaPlant.Name", "EEnemyType::PiranhaPlant" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EEnemyType::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EEnemyType::Unknown", (int64)EEnemyType::Unknown },
		{ "EEnemyType::PiranhaPlant", (int64)EEnemyType::PiranhaPlant },
		{ "EEnemyType::Goomba", (int64)EEnemyType::Goomba },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EEnemyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EEnemyType",
	"EEnemyType",
	Z_Construct_UEnum_Platformer2D_EEnemyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EEnemyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EEnemyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EEnemyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EEnemyType()
{
	if (!Z_Registration_Info_UEnum_EEnemyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnemyType.InnerSingleton, Z_Construct_UEnum_Platformer2D_EEnemyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EEnemyType.InnerSingleton;
}
// ********** End Enum EEnemyType ******************************************************************

// ********** Begin Class AEnemy *******************************************************************
void AEnemy::StaticRegisterNativesAEnemy()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AEnemy;
UClass* AEnemy::GetPrivateStaticClass()
{
	using TClass = AEnemy;
	if (!Z_Registration_Info_UClass_AEnemy.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Enemy"),
			Z_Registration_Info_UClass_AEnemy.InnerSingleton,
			StaticRegisterNativesAEnemy,
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
	return Z_Registration_Info_UClass_AEnemy.InnerSingleton;
}
UClass* Z_Construct_UClass_AEnemy_NoRegister()
{
	return AEnemy::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AEnemy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy.h" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "Enemy.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AEnemy, DataAsset), Z_Construct_UClass_UEnemyDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Statics::NewProp_DataAsset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AEnemy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Statics::ClassParams = {
	&AEnemy::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AEnemy_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams), Z_Construct_UClass_AEnemy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AEnemy()
{
	if (!Z_Registration_Info_UClass_AEnemy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemy.OuterSingleton, Z_Construct_UClass_AEnemy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AEnemy.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy);
AEnemy::~AEnemy() {}
// ********** End Class AEnemy *********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h__Script_Platformer2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EEnemyType_StaticEnum, TEXT("EEnemyType"), &Z_Registration_Info_UEnum_EEnemyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1434087438U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AEnemy, AEnemy::StaticClass, TEXT("AEnemy"), &Z_Registration_Info_UClass_AEnemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemy), 2729898744U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h__Script_Platformer2D_946392458(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h__Script_Platformer2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_Enemy_h__Script_Platformer2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
