// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/DeadMario.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeDeadMario() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_ADeadMario();
PLATFORMER2D_API UClass* Z_Construct_UClass_ADeadMario_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UMarioDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ADeadMario ***************************************************************
void ADeadMario::StaticRegisterNativesADeadMario()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ADeadMario;
UClass* ADeadMario::GetPrivateStaticClass()
{
	using TClass = ADeadMario;
	if (!Z_Registration_Info_UClass_ADeadMario.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("DeadMario"),
			Z_Registration_Info_UClass_ADeadMario.InnerSingleton,
			StaticRegisterNativesADeadMario,
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
	return Z_Registration_Info_UClass_ADeadMario.InnerSingleton;
}
UClass* Z_Construct_UClass_ADeadMario_NoRegister()
{
	return ADeadMario::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ADeadMario_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "DeadMario.h" },
		{ "ModuleRelativePath", "DeadMario.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "DeadMario.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeadMario.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "DeadMario.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpriteComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeadMario>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeadMario_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeadMario, DataAsset), Z_Construct_UClass_UMarioDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeadMario_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeadMario, Root), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeadMario_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeadMario, SpriteComponent), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpriteComponent_MetaData), NewProp_SpriteComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeadMario_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeadMario_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeadMario_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeadMario_Statics::NewProp_SpriteComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeadMario_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADeadMario_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeadMario_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeadMario_Statics::ClassParams = {
	&ADeadMario::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ADeadMario_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ADeadMario_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADeadMario_Statics::Class_MetaDataParams), Z_Construct_UClass_ADeadMario_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADeadMario()
{
	if (!Z_Registration_Info_UClass_ADeadMario.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeadMario.OuterSingleton, Z_Construct_UClass_ADeadMario_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADeadMario.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeadMario);
ADeadMario::~ADeadMario() {}
// ********** End Class ADeadMario *****************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_DeadMario_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeadMario, ADeadMario::StaticClass, TEXT("ADeadMario"), &Z_Registration_Info_UClass_ADeadMario, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeadMario), 3755117371U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_DeadMario_h__Script_Platformer2D_3258189320(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_DeadMario_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_DeadMario_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
