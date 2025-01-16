// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef FPS2_Fps2Projectile_generated_h
#error "Fps2Projectile.generated.h already included, missing '#pragma once' in Fps2Projectile.h"
#endif
#define FPS2_Fps2Projectile_generated_h

#define Fps2_Source_Fps2_Fps2Projectile_h_15_SPARSE_DATA
#define Fps2_Source_Fps2_Fps2Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fps2_Source_Fps2_Fps2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Fps2_Source_Fps2_Fps2Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFps2Projectile(); \
	friend struct Z_Construct_UClass_AFps2Projectile_Statics; \
public: \
	DECLARE_CLASS(AFps2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps2"), NO_API) \
	DECLARE_SERIALIZER(AFps2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fps2_Source_Fps2_Fps2Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAFps2Projectile(); \
	friend struct Z_Construct_UClass_AFps2Projectile_Statics; \
public: \
	DECLARE_CLASS(AFps2Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps2"), NO_API) \
	DECLARE_SERIALIZER(AFps2Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Fps2_Source_Fps2_Fps2Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFps2Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFps2Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFps2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFps2Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFps2Projectile(AFps2Projectile&&); \
	NO_API AFps2Projectile(const AFps2Projectile&); \
public:


#define Fps2_Source_Fps2_Fps2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFps2Projectile(AFps2Projectile&&); \
	NO_API AFps2Projectile(const AFps2Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFps2Projectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFps2Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFps2Projectile)


#define Fps2_Source_Fps2_Fps2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AFps2Projectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AFps2Projectile, ProjectileMovement); }


#define Fps2_Source_Fps2_Fps2Projectile_h_12_PROLOG
#define Fps2_Source_Fps2_Fps2Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps2_Source_Fps2_Fps2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Fps2_Source_Fps2_Fps2Projectile_h_15_SPARSE_DATA \
	Fps2_Source_Fps2_Fps2Projectile_h_15_RPC_WRAPPERS \
	Fps2_Source_Fps2_Fps2Projectile_h_15_INCLASS \
	Fps2_Source_Fps2_Fps2Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fps2_Source_Fps2_Fps2Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps2_Source_Fps2_Fps2Projectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Fps2_Source_Fps2_Fps2Projectile_h_15_SPARSE_DATA \
	Fps2_Source_Fps2_Fps2Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Fps2_Source_Fps2_Fps2Projectile_h_15_INCLASS_NO_PURE_DECLS \
	Fps2_Source_Fps2_Fps2Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS2_API UClass* StaticClass<class AFps2Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fps2_Source_Fps2_Fps2Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
