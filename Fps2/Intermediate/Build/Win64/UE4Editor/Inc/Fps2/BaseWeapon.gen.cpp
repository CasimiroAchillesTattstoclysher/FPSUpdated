// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fps2/BaseWeapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseWeapon() {}
// Cross Module References
	FPS2_API UClass* Z_Construct_UClass_ABaseWeapon_NoRegister();
	FPS2_API UClass* Z_Construct_UClass_ABaseWeapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Fps2();
// End Cross Module References
	void ABaseWeapon::StaticRegisterNativesABaseWeapon()
	{
	}
	UClass* Z_Construct_UClass_ABaseWeapon_NoRegister()
	{
		return ABaseWeapon::StaticClass();
	}
	struct Z_Construct_UClass_ABaseWeapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxTotalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxTotalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_totalAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_totalAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxClipAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_maxClipAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clipAmmo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_clipAmmo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reloadTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_reloadTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseWeapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Fps2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseWeapon.h" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo = { "maxTotalAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, maxTotalAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//TotalAmmo\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "TotalAmmo" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo = { "totalAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, totalAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//MaxClipAmmo\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "MaxClipAmmo" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo = { "maxClipAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, maxClipAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//clipAmmo\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "clipAmmo" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo = { "clipAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, clipAmmo), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "//reloadTime\n" },
		{ "ModuleRelativePath", "BaseWeapon.h" },
		{ "ToolTip", "reloadTime" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime = { "reloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseWeapon, reloadTime), METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxTotalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_totalAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_maxClipAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_clipAmmo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseWeapon_Statics::NewProp_reloadTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseWeapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseWeapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseWeapon_Statics::ClassParams = {
		&ABaseWeapon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseWeapon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseWeapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseWeapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseWeapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseWeapon, 2103748252);
	template<> FPS2_API UClass* StaticClass<ABaseWeapon>()
	{
		return ABaseWeapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseWeapon(Z_Construct_UClass_ABaseWeapon, &ABaseWeapon::StaticClass, TEXT("/Script/Fps2"), TEXT("ABaseWeapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseWeapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
