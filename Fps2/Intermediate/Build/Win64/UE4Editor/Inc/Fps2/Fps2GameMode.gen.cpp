// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Fps2/Fps2GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFps2GameMode() {}
// Cross Module References
	FPS2_API UClass* Z_Construct_UClass_AFps2GameMode_NoRegister();
	FPS2_API UClass* Z_Construct_UClass_AFps2GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Fps2();
// End Cross Module References
	void AFps2GameMode::StaticRegisterNativesAFps2GameMode()
	{
	}
	UClass* Z_Construct_UClass_AFps2GameMode_NoRegister()
	{
		return AFps2GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AFps2GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFps2GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Fps2,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFps2GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Fps2GameMode.h" },
		{ "ModuleRelativePath", "Fps2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFps2GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFps2GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFps2GameMode_Statics::ClassParams = {
		&AFps2GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFps2GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFps2GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFps2GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFps2GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFps2GameMode, 2932880838);
	template<> FPS2_API UClass* StaticClass<AFps2GameMode>()
	{
		return AFps2GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFps2GameMode(Z_Construct_UClass_AFps2GameMode, &AFps2GameMode::StaticClass, TEXT("/Script/Fps2"), TEXT("AFps2GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFps2GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
