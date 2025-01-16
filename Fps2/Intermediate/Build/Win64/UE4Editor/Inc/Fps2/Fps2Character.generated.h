// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPS2_Fps2Character_generated_h
#error "Fps2Character.generated.h already included, missing '#pragma once' in Fps2Character.h"
#endif
#define FPS2_Fps2Character_generated_h

#define Fps2_Source_Fps2_Fps2Character_h_21_SPARSE_DATA
#define Fps2_Source_Fps2_Fps2Character_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execRespawn); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage);


#define Fps2_Source_Fps2_Fps2Character_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execRespawn); \
	DECLARE_FUNCTION(execDie); \
	DECLARE_FUNCTION(execTakeDamage);


#define Fps2_Source_Fps2_Fps2Character_h_21_EVENT_PARMS
#define Fps2_Source_Fps2_Fps2Character_h_21_CALLBACK_WRAPPERS
#define Fps2_Source_Fps2_Fps2Character_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFps2Character(); \
	friend struct Z_Construct_UClass_AFps2Character_Statics; \
public: \
	DECLARE_CLASS(AFps2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps2"), NO_API) \
	DECLARE_SERIALIZER(AFps2Character)


#define Fps2_Source_Fps2_Fps2Character_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAFps2Character(); \
	friend struct Z_Construct_UClass_AFps2Character_Statics; \
public: \
	DECLARE_CLASS(AFps2Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Fps2"), NO_API) \
	DECLARE_SERIALIZER(AFps2Character)


#define Fps2_Source_Fps2_Fps2Character_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFps2Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFps2Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFps2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFps2Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFps2Character(AFps2Character&&); \
	NO_API AFps2Character(const AFps2Character&); \
public:


#define Fps2_Source_Fps2_Fps2Character_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFps2Character(AFps2Character&&); \
	NO_API AFps2Character(const AFps2Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFps2Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFps2Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFps2Character)


#define Fps2_Source_Fps2_Fps2Character_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AFps2Character, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AFps2Character, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AFps2Character, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AFps2Character, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AFps2Character, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AFps2Character, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AFps2Character, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AFps2Character, L_MotionController); }


#define Fps2_Source_Fps2_Fps2Character_h_18_PROLOG \
	Fps2_Source_Fps2_Fps2Character_h_21_EVENT_PARMS


#define Fps2_Source_Fps2_Fps2Character_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps2_Source_Fps2_Fps2Character_h_21_PRIVATE_PROPERTY_OFFSET \
	Fps2_Source_Fps2_Fps2Character_h_21_SPARSE_DATA \
	Fps2_Source_Fps2_Fps2Character_h_21_RPC_WRAPPERS \
	Fps2_Source_Fps2_Fps2Character_h_21_CALLBACK_WRAPPERS \
	Fps2_Source_Fps2_Fps2Character_h_21_INCLASS \
	Fps2_Source_Fps2_Fps2Character_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Fps2_Source_Fps2_Fps2Character_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Fps2_Source_Fps2_Fps2Character_h_21_PRIVATE_PROPERTY_OFFSET \
	Fps2_Source_Fps2_Fps2Character_h_21_SPARSE_DATA \
	Fps2_Source_Fps2_Fps2Character_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Fps2_Source_Fps2_Fps2Character_h_21_CALLBACK_WRAPPERS \
	Fps2_Source_Fps2_Fps2Character_h_21_INCLASS_NO_PURE_DECLS \
	Fps2_Source_Fps2_Fps2Character_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPS2_API UClass* StaticClass<class AFps2Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Fps2_Source_Fps2_Fps2Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
