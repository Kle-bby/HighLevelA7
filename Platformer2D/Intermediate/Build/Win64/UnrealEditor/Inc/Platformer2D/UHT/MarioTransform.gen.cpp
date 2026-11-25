// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioTransform.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMarioTransform() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioTransform();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioTransform_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMarioTransform Function OnFinishedPlaying *******************************
struct Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMarioTransform, nullptr, "OnFinishedPlaying", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMarioTransform::execOnFinishedPlaying)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnFinishedPlaying();
	P_NATIVE_END;
}
// ********** End Class AMarioTransform Function OnFinishedPlaying *********************************

// ********** Begin Class AMarioTransform **********************************************************
void AMarioTransform::StaticRegisterNativesAMarioTransform()
{
	UClass* Class = AMarioTransform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnFinishedPlaying", &AMarioTransform::execOnFinishedPlaying },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMarioTransform;
UClass* AMarioTransform::GetPrivateStaticClass()
{
	using TClass = AMarioTransform;
	if (!Z_Registration_Info_UClass_AMarioTransform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MarioTransform"),
			Z_Registration_Info_UClass_AMarioTransform.InnerSingleton,
			StaticRegisterNativesAMarioTransform,
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
	return Z_Registration_Info_UClass_AMarioTransform.InnerSingleton;
}
UClass* Z_Construct_UClass_AMarioTransform_NoRegister()
{
	return AMarioTransform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMarioTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "MarioTransform.h" },
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransformFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioTransform.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TransformFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageFlipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarioTransform_OnFinishedPlaying, "OnFinishedPlaying" }, // 739466267
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioTransform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioTransform_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioTransform, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioTransform_Statics::NewProp_TransformFlipbook = { "TransformFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioTransform, TransformFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransformFlipbook_MetaData), NewProp_TransformFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioTransform_Statics::NewProp_DamageFlipbook = { "DamageFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioTransform, DamageFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageFlipbook_MetaData), NewProp_DamageFlipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioTransform_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioTransform_Statics::NewProp_TransformFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioTransform_Statics::NewProp_DamageFlipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMarioTransform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioTransform_Statics::ClassParams = {
	&AMarioTransform::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMarioTransform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioTransform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMarioTransform()
{
	if (!Z_Registration_Info_UClass_AMarioTransform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioTransform.OuterSingleton, Z_Construct_UClass_AMarioTransform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMarioTransform.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioTransform);
AMarioTransform::~AMarioTransform() {}
// ********** End Class AMarioTransform ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioTransform_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMarioTransform, AMarioTransform::StaticClass, TEXT("AMarioTransform"), &Z_Registration_Info_UClass_AMarioTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioTransform), 176654432U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioTransform_h__Script_Platformer2D_3043535552(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioTransform_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioTransform_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
