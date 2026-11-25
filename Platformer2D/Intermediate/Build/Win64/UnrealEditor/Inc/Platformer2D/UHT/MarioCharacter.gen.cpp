// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer2D/MarioCharacter.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMarioCharacter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
PAPER2D_API UClass* Z_Construct_UClass_APaperCharacter();
PAPER2D_API UClass* Z_Construct_UClass_UPaperFlipbook_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCharacter();
PLATFORMER2D_API UClass* Z_Construct_UClass_AMarioCharacter_NoRegister();
PLATFORMER2D_API UClass* Z_Construct_UClass_UMarioDataAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_Platformer2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AMarioCharacter Function OnHit *******************************************
struct Z_Construct_UFunction_AMarioCharacter_OnHit_Statics
{
	struct MarioCharacter_eventOnHit_Parms
	{
		UPrimitiveComponent* HitComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MarioCharacter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComponent_MetaData), NewProp_HitComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_HitComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMarioCharacter, nullptr, "OnHit", Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::MarioCharacter_eventOnHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::MarioCharacter_eventOnHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMarioCharacter_OnHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioCharacter_OnHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMarioCharacter::execOnHit)
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
// ********** End Class AMarioCharacter Function OnHit *********************************************

// ********** Begin Class AMarioCharacter Function OnOverlapBegan **********************************
struct Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics
{
	struct MarioCharacter_eventOnOverlapBegan_Parms
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
		{ "ModuleRelativePath", "MarioCharacter.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlapComponent_MetaData), NewProp_OverlapComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((MarioCharacter_eventOnOverlapBegan_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MarioCharacter_eventOnOverlapBegan_Parms), &Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MarioCharacter_eventOnOverlapBegan_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OverlapComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AMarioCharacter, nullptr, "OnOverlapBegan", Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::MarioCharacter_eventOnOverlapBegan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::MarioCharacter_eventOnOverlapBegan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMarioCharacter::execOnOverlapBegan)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegan(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class AMarioCharacter Function OnOverlapBegan ************************************

// ********** Begin Class AMarioCharacter **********************************************************
void AMarioCharacter::StaticRegisterNativesAMarioCharacter()
{
	UClass* Class = AMarioCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnHit", &AMarioCharacter::execOnHit },
		{ "OnOverlapBegan", &AMarioCharacter::execOnOverlapBegan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AMarioCharacter;
UClass* AMarioCharacter::GetPrivateStaticClass()
{
	using TClass = AMarioCharacter;
	if (!Z_Registration_Info_UClass_AMarioCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MarioCharacter"),
			Z_Registration_Info_UClass_AMarioCharacter.InnerSingleton,
			StaticRegisterNativesAMarioCharacter,
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
	return Z_Registration_Info_UClass_AMarioCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AMarioCharacter_NoRegister()
{
	return AMarioCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AMarioCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MarioCharacter.h" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataAsset_MetaData[] = {
		{ "Category", "Data Asset" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallIdleFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallWalkFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallRunFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallJumpFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallRunJumpFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SmallTurnFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperIdleFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperWalkFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperRunFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperJumpFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperFallingFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperRunJumpFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperTurnFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SuperDuckFlipbook_MetaData[] = {
		{ "Category", "Flipbooks" },
		{ "ModuleRelativePath", "MarioCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataAsset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallIdleFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallWalkFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallRunFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallJumpFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallRunJumpFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SmallTurnFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperIdleFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperWalkFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperRunFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperJumpFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperFallingFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperRunJumpFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperTurnFlipbook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SuperDuckFlipbook;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMarioCharacter_OnHit, "OnHit" }, // 3931576741
		{ &Z_Construct_UFunction_AMarioCharacter_OnOverlapBegan, "OnOverlapBegan" }, // 1141861220
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarioCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_DataAsset = { "DataAsset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, DataAsset), Z_Construct_UClass_UMarioDataAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataAsset_MetaData), NewProp_DataAsset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallIdleFlipbook = { "SmallIdleFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallIdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallIdleFlipbook_MetaData), NewProp_SmallIdleFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallWalkFlipbook = { "SmallWalkFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallWalkFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallWalkFlipbook_MetaData), NewProp_SmallWalkFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunFlipbook = { "SmallRunFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallRunFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallRunFlipbook_MetaData), NewProp_SmallRunFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallJumpFlipbook = { "SmallJumpFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallJumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallJumpFlipbook_MetaData), NewProp_SmallJumpFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunJumpFlipbook = { "SmallRunJumpFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallRunJumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallRunJumpFlipbook_MetaData), NewProp_SmallRunJumpFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallTurnFlipbook = { "SmallTurnFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SmallTurnFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SmallTurnFlipbook_MetaData), NewProp_SmallTurnFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperIdleFlipbook = { "SuperIdleFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperIdleFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperIdleFlipbook_MetaData), NewProp_SuperIdleFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperWalkFlipbook = { "SuperWalkFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperWalkFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperWalkFlipbook_MetaData), NewProp_SuperWalkFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunFlipbook = { "SuperRunFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperRunFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperRunFlipbook_MetaData), NewProp_SuperRunFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperJumpFlipbook = { "SuperJumpFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperJumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperJumpFlipbook_MetaData), NewProp_SuperJumpFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperFallingFlipbook = { "SuperFallingFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperFallingFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperFallingFlipbook_MetaData), NewProp_SuperFallingFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunJumpFlipbook = { "SuperRunJumpFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperRunJumpFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperRunJumpFlipbook_MetaData), NewProp_SuperRunJumpFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperTurnFlipbook = { "SuperTurnFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperTurnFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperTurnFlipbook_MetaData), NewProp_SuperTurnFlipbook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperDuckFlipbook = { "SuperDuckFlipbook", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMarioCharacter, SuperDuckFlipbook), Z_Construct_UClass_UPaperFlipbook_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SuperDuckFlipbook_MetaData), NewProp_SuperDuckFlipbook_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMarioCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_DataAsset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallIdleFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallWalkFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallJumpFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallRunJumpFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SmallTurnFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperIdleFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperWalkFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperJumpFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperFallingFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperRunJumpFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperTurnFlipbook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMarioCharacter_Statics::NewProp_SuperDuckFlipbook,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMarioCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APaperCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Platformer2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMarioCharacter_Statics::ClassParams = {
	&AMarioCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMarioCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMarioCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AMarioCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMarioCharacter()
{
	if (!Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton, Z_Construct_UClass_AMarioCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMarioCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMarioCharacter);
AMarioCharacter::~AMarioCharacter() {}
// ********** End Class AMarioCharacter ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h__Script_Platformer2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMarioCharacter, AMarioCharacter::StaticClass, TEXT("AMarioCharacter"), &Z_Registration_Info_UClass_AMarioCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMarioCharacter), 152140722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h__Script_Platformer2D_2768652300(TEXT("/Script/Platformer2D"),
	Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h__Script_Platformer2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Kaleb_Documents_GitHub_HighLevelA7_Platformer2D_Source_Platformer2D_MarioCharacter_h__Script_Platformer2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
