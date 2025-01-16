// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fps2/MyEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyEnemy() {}
// Cross Module References
	FPS2_API UClass* Z_Construct_UClass_AMyEnemy_NoRegister();
	FPS2_API UClass* Z_Construct_UClass_AMyEnemy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Fps2();
// End Cross Module References
	DEFINE_FUNCTION(AMyEnemy::execTakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param__damage);
		P_NATIVE_END;
	}
	void AMyEnemy::StaticRegisterNativesAMyEnemy()
	{
		UClass* Class = AMyEnemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeDamage", &AMyEnemy::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics
	{
		struct MyEnemy_eventTakeDamage_Parms
		{
			float _damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyEnemy_eventTakeDamage_Parms, _damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::NewProp__damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyEnemy, nullptr, "TakeDamage", nullptr, nullptr, sizeof(MyEnemy_eventTakeDamage_Parms), Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMyEnemy_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMyEnemy_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMyEnemy_NoRegister()
	{
		return AMyEnemy::StaticClass();
	}
	struct Z_Construct_UClass_AMyEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasTakenDamage_MetaData[];
#endif
		static void NewProp_hasTakenDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasTakenDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Fps2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMyEnemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyEnemy_TakeDamage, "TakeDamage" }, // 2764908763
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyEnemy.h" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemy_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMyEnemy_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyEnemy, health), METADATA_PARAMS(Z_Construct_UClass_AMyEnemy_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemy_Statics::NewProp_hasTakenDamage_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AMyEnemy_Statics::NewProp_hasTakenDamage_SetBit(void* Obj)
	{
		((AMyEnemy*)Obj)->hasTakenDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyEnemy_Statics::NewProp_hasTakenDamage = { "hasTakenDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyEnemy), &Z_Construct_UClass_AMyEnemy_Statics::NewProp_hasTakenDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyEnemy_Statics::NewProp_hasTakenDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::NewProp_hasTakenDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "Enemy" },
		{ "ModuleRelativePath", "MyEnemy.h" },
	};
#endif
	void Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((AMyEnemy*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMyEnemy), &Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDead_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemy_Statics::NewProp_health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemy_Statics::NewProp_hasTakenDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyEnemy_Statics::NewProp_isDead,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyEnemy_Statics::ClassParams = {
		&AMyEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMyEnemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyEnemy, 3042793865);
	template<> FPS2_API UClass* StaticClass<AMyEnemy>()
	{
		return AMyEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyEnemy(Z_Construct_UClass_AMyEnemy, &AMyEnemy::StaticClass, TEXT("/Script/Fps2"), TEXT("AMyEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
