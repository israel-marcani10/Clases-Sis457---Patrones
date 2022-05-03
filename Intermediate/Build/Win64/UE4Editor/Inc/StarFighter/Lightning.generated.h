// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_Lightning_generated_h
#error "Lightning.generated.h already included, missing '#pragma once' in Lightning.h"
#endif
#define STARFIGHTER_Lightning_generated_h

#define StarFighter_Source_StarFighter_Lightning_h_15_SPARSE_DATA
#define StarFighter_Source_StarFighter_Lightning_h_15_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_Lightning_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_Lightning_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALightning(); \
	friend struct Z_Construct_UClass_ALightning_Statics; \
public: \
	DECLARE_CLASS(ALightning, AProyectil, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ALightning)


#define StarFighter_Source_StarFighter_Lightning_h_15_INCLASS \
private: \
	static void StaticRegisterNativesALightning(); \
	friend struct Z_Construct_UClass_ALightning_Statics; \
public: \
	DECLARE_CLASS(ALightning, AProyectil, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(ALightning)


#define StarFighter_Source_StarFighter_Lightning_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALightning(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALightning) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightning); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightning); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightning(ALightning&&); \
	NO_API ALightning(const ALightning&); \
public:


#define StarFighter_Source_StarFighter_Lightning_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALightning(ALightning&&); \
	NO_API ALightning(const ALightning&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALightning); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALightning); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALightning)


#define StarFighter_Source_StarFighter_Lightning_h_15_PRIVATE_PROPERTY_OFFSET
#define StarFighter_Source_StarFighter_Lightning_h_12_PROLOG
#define StarFighter_Source_StarFighter_Lightning_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Lightning_h_15_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Lightning_h_15_SPARSE_DATA \
	StarFighter_Source_StarFighter_Lightning_h_15_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_Lightning_h_15_INCLASS \
	StarFighter_Source_StarFighter_Lightning_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Lightning_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Lightning_h_15_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Lightning_h_15_SPARSE_DATA \
	StarFighter_Source_StarFighter_Lightning_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Lightning_h_15_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Lightning_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class ALightning>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_Lightning_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
