// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MushroomPickup.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMushroomPickup() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMushroomPickup();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMushroomPickup_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_APickup();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMushroomPickup Function OnBackwardOverlap *******************************
struct Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics
{
	struct MushroomPickup_eventOnBackwardOverlap_Parms
	{
		UPrimitiveComponent* OverlapComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MushroomPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnBackwardOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapComponent_MetaData), NewProp_OverlapComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnBackwardOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnBackwardOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnBackwardOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MushroomPickup_eventOnBackwardOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MushroomPickup_eventOnBackwardOverlap_Parms), &Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnBackwardOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_OverlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMushroomPickup, nullptr, "OnBackwardOverlap", Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::MushroomPickup_eventOnBackwardOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::MushroomPickup_eventOnBackwardOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMushroomPickup::execOnBackwardOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBackwardOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AMushroomPickup Function OnBackwardOverlap *********************************

// ********** Begin Class AMushroomPickup Function OnForwardOverlap ********************************
struct Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics
{
	struct MushroomPickup_eventOnForwardOverlap_Parms
	{
		UPrimitiveComponent* OverlapComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MushroomPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnForwardOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapComponent_MetaData), NewProp_OverlapComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnForwardOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnForwardOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnForwardOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MushroomPickup_eventOnForwardOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MushroomPickup_eventOnForwardOverlap_Parms), &Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MushroomPickup_eventOnForwardOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_OverlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMushroomPickup, nullptr, "OnForwardOverlap", Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::MushroomPickup_eventOnForwardOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::MushroomPickup_eventOnForwardOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMushroomPickup::execOnForwardOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnForwardOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AMushroomPickup Function OnForwardOverlap **********************************

// ********** Begin Class AMushroomPickup **********************************************************
void AMushroomPickup::StaticRegisterNativesAMushroomPickup()
{
	UClass* Class = AMushroomPickup::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnBackwardOverlap", &AMushroomPickup::execOnBackwardOverlap },
		{ "OnForwardOverlap", &AMushroomPickup::execOnForwardOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMushroomPickup;
UClass* AMushroomPickup::GetPrivateStaticClass()
{
	using TClass = AMushroomPickup;
	if (!Z_Registration_Info_UClass_AMushroomPickup.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MushroomPickup"),
			Z_Registration_Info_UClass_AMushroomPickup.InnerSingleton,
			StaticRegisterNativesAMushroomPickup,
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
	return Z_Registration_Info_UClass_AMushroomPickup.InnerSingleton;
}
UClass* Z_Construct_UClass_AMushroomPickup_NoRegister()
{
	return AMushroomPickup::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMushroomPickup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MushroomPickup.h" },
		{ "ModuleRelativePath", "MushroomPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MushroomPickup.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackOverlap_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MushroomPickup.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontOverlap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackOverlap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMushroomPickup_OnBackwardOverlap, "OnBackwardOverlap" }, // 2645680769
		{ &Z_Construct_UFunction_AMushroomPickup_OnForwardOverlap, "OnForwardOverlap" }, // 2101356123
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMushroomPickup>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMushroomPickup_Statics::NewProp_FrontOverlap = { "FrontOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMushroomPickup, FrontOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontOverlap_MetaData), NewProp_FrontOverlap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMushroomPickup_Statics::NewProp_BackOverlap = { "BackOverlap", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMushroomPickup, BackOverlap), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackOverlap_MetaData), NewProp_BackOverlap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMushroomPickup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMushroomPickup_Statics::NewProp_FrontOverlap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMushroomPickup_Statics::NewProp_BackOverlap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMushroomPickup_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMushroomPickup_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APickup,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMushroomPickup_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMushroomPickup_Statics::ClassParams = {
	&AMushroomPickup::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMushroomPickup_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMushroomPickup_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMushroomPickup_Statics::Class_MetaDataParams), Z_Construct_UClass_AMushroomPickup_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMushroomPickup()
{
	if (!Z_Registration_Info_UClass_AMushroomPickup.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMushroomPickup.OuterSingleton, Z_Construct_UClass_AMushroomPickup_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMushroomPickup.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMushroomPickup);
AMushroomPickup::~AMushroomPickup() {}
// ********** End Class AMushroomPickup ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMushroomPickup, AMushroomPickup::StaticClass, TEXT("AMushroomPickup"), &Z_Registration_Info_UClass_AMushroomPickup, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMushroomPickup), 622170439U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h__Script_Platformer2D_253270797(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MushroomPickup_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
