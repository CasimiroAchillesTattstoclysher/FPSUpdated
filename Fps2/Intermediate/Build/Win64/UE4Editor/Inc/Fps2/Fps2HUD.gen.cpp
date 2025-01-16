// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fps2/Fps2HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFps2HUD() {}
// Cross Module References
	FPS2_API UClass* Z_Construct_UClass_AFps2HUD_NoRegister();
	FPS2_API UClass* Z_Construct_UClass_AFps2HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Fps2();
// End Cross Module References
	void AFps2HUD::StaticRegisterNativesAFps2HUD()
	{
	}
	UClass* Z_Construct_UClass_AFps2HUD_NoRegister()
	{
		return AFps2HUD::StaticClass();
	}
	struct Z_Construct_UClass_AFps2HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFps2HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Fps2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFps2HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Fps2HUD.h" },
		{ "ModuleRelativePath", "Fps2HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFps2HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFps2HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFps2HUD_Statics::ClassParams = {
		&AFps2HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFps2HUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFps2HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFps2HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFps2HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFps2HUD, 1890515198);
	template<> FPS2_API UClass* StaticClass<AFps2HUD>()
	{
		return AFps2HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFps2HUD(Z_Construct_UClass_AFps2HUD, &AFps2HUD::StaticClass, TEXT("/Script/Fps2"), TEXT("AFps2HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFps2HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
