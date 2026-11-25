// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/BreakableBlock.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBreakableBlock() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbookComponent_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlock();
PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlock_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_ABreakableBlockBit_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UPickupDataAsset_NoRegister();
PLATFORMER2D_API UEnum* Z_Construct_UEnum_Platformer2D_EBreakableBlockState();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EBreakableBlockState ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBreakableBlockState;
static UEnum* EBreakableBlockState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBreakableBlockState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBreakableBlockState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Platformer2D_EBreakableBlockState, (UObject*)Z_Construct_UPackage__Script_Platformer2D(), TEXT("EBreakableBlockState"));
	}
	return Z_Registration_Info_UEnum_EBreakableBlockState.OuterSingleton;
}
template<> PLATFORMER2D_API UEnum* StaticEnum<EBreakableBlockState>()
{
	return EBreakableBlockState_StaticEnum();
}
struct Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Active.DisplayName", "Active" },
		{ "Active.Name", "EBreakableBlockState::Active" },
		{ "AnimDown.DisplayName", "AnimDown" },
		{ "AnimDown.Name", "EBreakableBlockState::AnimDown" },
		{ "AnimUp.DisplayName", "AnimUp" },
		{ "AnimUp.Name", "EBreakableBlockState::AnimUp" },
		{ "BlueprintType", "true" },
		{ "Breaking.DisplayName", "Breaking" },
		{ "Breaking.Name", "EBreakableBlockState::Breaking" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
		{ "Unknown.DisplayName", "Unknown" },
		{ "Unknown.Name", "EBreakableBlockState::Unknown" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBreakableBlockState::Unknown", (int64)EBreakableBlockState::Unknown },
		{ "EBreakableBlockState::Active", (int64)EBreakableBlockState::Active },
		{ "EBreakableBlockState::AnimUp", (int64)EBreakableBlockState::AnimUp },
		{ "EBreakableBlockState::AnimDown", (int64)EBreakableBlockState::AnimDown },
		{ "EBreakableBlockState::Breaking", (int64)EBreakableBlockState::Breaking },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Platformer2D,
	nullptr,
	"EBreakableBlockState",
	"EBreakableBlockState",
	Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Platformer2D_EBreakableBlockState()
{
	if (!Z_Registration_Info_UEnum_EBreakableBlockState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBreakableBlockState.InnerSingleton, Z_Construct_UEnum_Platformer2D_EBreakableBlockState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBreakableBlockState.InnerSingleton;
}
// ********** End Enum EBreakableBlockState ********************************************************

// ********** Begin Class ABreakableBlock Function OnHit *******************************************
struct Z_Construct_UFunction_ABreakableBlock_OnHit_Statics
{
	struct BreakableBlock_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BreakableBlock_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ABreakableBlock, nullptr, "OnHit", Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::BreakableBlock_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::BreakableBlock_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABreakableBlock_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABreakableBlock_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABreakableBlock::execOnHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class ABreakableBlock Function OnHit *********************************************

// ********** Begin Class ABreakableBlock **********************************************************
void ABreakableBlock::StaticRegisterNativesABreakableBlock()
{
	UClass* Class = ABreakableBlock::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &ABreakableBlock::execOnHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ABreakableBlock;
UClass* ABreakableBlock::GetPrivateStaticClass()
{
	using TClass = ABreakableBlock;
	if (!Z_Registration_Info_UClass_ABreakableBlock.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BreakableBlock"),
			Z_Registration_Info_UClass_ABreakableBlock.InnerSingleton,
			StaticRegisterNativesABreakableBlock,
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
	return Z_Registration_Info_UClass_ABreakableBlock.InnerSingleton;
}
UClass* Z_Construct_UClass_ABreakableBlock_NoRegister()
{
	return ABreakableBlock::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ABreakableBlock_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableBlock.h" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BoxComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FlipbookComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BreakableBlockBitTemplate_MetaData[] = {
		{ "Category", "Templates" },
		{ "ModuleRelativePath", "BreakableBlock.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FlipbookComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BreakableBlockBitTemplate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABreakableBlock_OnHit, "OnHit" }, // 3445094713
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableBlock>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BoxComponent = { "BoxComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlock, BoxComponent), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BoxComponent_MetaData), NewProp_BoxComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlock_Statics::NewProp_FlipbookComponent = { "FlipbookComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlock, FlipbookComponent), Z_Construct_UClass_UPaperFlipbookComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FlipbookComponent_MetaData), NewProp_FlipbookComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableBlock_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlock, DataAsset), Z_Construct_UClass_UPickupDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BreakableBlockBitTemplate = { "BreakableBlockBitTemplate", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABreakableBlock, BreakableBlockBitTemplate), Z_Construct_UClass_UClass, Z_Construct_UClass_ABreakableBlockBit_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BreakableBlockBitTemplate_MetaData), NewProp_BreakableBlockBitTemplate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableBlock_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BoxComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlock_Statics::NewProp_FlipbookComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlock_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableBlock_Statics::NewProp_BreakableBlockBitTemplate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABreakableBlock_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABreakableBlock_Statics::ClassParams = {
	&ABreakableBlock::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABreakableBlock_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableBlock_Statics::Class_MetaDataParams), Z_Construct_UClass_ABreakableBlock_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABreakableBlock()
{
	if (!Z_Registration_Info_UClass_ABreakableBlock.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABreakableBlock.OuterSingleton, Z_Construct_UClass_ABreakableBlock_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABreakableBlock.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableBlock);
ABreakableBlock::~ABreakableBlock() {}
// ********** End Class ABreakableBlock ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h__Script_Platformer2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBreakableBlockState_StaticEnum, TEXT("EBreakableBlockState"), &Z_Registration_Info_UEnum_EBreakableBlockState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 13361933U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABreakableBlock, ABreakableBlock::StaticClass, TEXT("ABreakableBlock"), &Z_Registration_Info_UClass_ABreakableBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABreakableBlock), 2113210293U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h__Script_Platformer2D_786299251(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h__Script_Platformer2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_BreakableBlock_h__Script_Platformer2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
