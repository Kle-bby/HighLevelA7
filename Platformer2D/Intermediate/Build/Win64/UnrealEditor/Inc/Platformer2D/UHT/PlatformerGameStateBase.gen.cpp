// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/PlatformerGameStateBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlatformerGameStateBase() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameStateBase();
PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformerGameStateBase();
PLATFORMER2D_API UClass* Z_Construct_UClass_APlatformerGameStateBase_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UGameDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlatformerGameStateBase *************************************************
void APlatformerGameStateBase::StaticRegisterNativesAPlatformerGameStateBase()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlatformerGameStateBase;
UClass* APlatformerGameStateBase::GetPrivateStaticClass()
{
	using TClass = APlatformerGameStateBase;
	if (!Z_Registration_Info_UClass_APlatformerGameStateBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlatformerGameStateBase"),
			Z_Registration_Info_UClass_APlatformerGameStateBase.InnerSingleton,
			StaticRegisterNativesAPlatformerGameStateBase,
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
	return Z_Registration_Info_UClass_APlatformerGameStateBase.InnerSingleton;
}
UClass* Z_Construct_UClass_APlatformerGameStateBase_NoRegister()
{
	return APlatformerGameStateBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlatformerGameStateBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "PlatformerGameStateBase.h" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeRemaining_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsGameOver_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "PlatformerGameStateBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeRemaining;
	static void NewProp_IsGameOver_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsGameOver;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlatformerGameStateBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameStateBase, DataAsset), Z_Construct_UClass_UGameDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_TimeRemaining = { "TimeRemaining", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlatformerGameStateBase, TimeRemaining), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeRemaining_MetaData), NewProp_TimeRemaining_MetaData) };
void Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver_SetBit(void* Obj)
{
	((APlatformerGameStateBase*)Obj)->IsGameOver = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver = { "IsGameOver", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlatformerGameStateBase), &Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsGameOver_MetaData), NewProp_IsGameOver_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlatformerGameStateBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_TimeRemaining,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlatformerGameStateBase_Statics::NewProp_IsGameOver,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlatformerGameStateBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameStateBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlatformerGameStateBase_Statics::ClassParams = {
	&APlatformerGameStateBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlatformerGameStateBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::PropPointers),
	0,
	0x009003A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlatformerGameStateBase_Statics::Class_MetaDataParams), Z_Construct_UClass_APlatformerGameStateBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlatformerGameStateBase()
{
	if (!Z_Registration_Info_UClass_APlatformerGameStateBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlatformerGameStateBase.OuterSingleton, Z_Construct_UClass_APlatformerGameStateBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlatformerGameStateBase.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlatformerGameStateBase);
APlatformerGameStateBase::~APlatformerGameStateBase() {}
// ********** End Class APlatformerGameStateBase ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlatformerGameStateBase, APlatformerGameStateBase::StaticClass, TEXT("APlatformerGameStateBase"), &Z_Registration_Info_UClass_APlatformerGameStateBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlatformerGameStateBase), 266522738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h__Script_Platformer2D_3381271716(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_PlatformerGameStateBase_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
