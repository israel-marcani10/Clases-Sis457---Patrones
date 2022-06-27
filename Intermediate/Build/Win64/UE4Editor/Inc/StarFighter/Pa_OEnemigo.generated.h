// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_Pa_OEnemigo_generated_h
#error "Pa_OEnemigo.generated.h already included, missing '#pragma once' in Pa_OEnemigo.h"
#endif
#define STARFIGHTER_Pa_OEnemigo_generated_h

#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_SPARSE_DATA
#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPa_OEnemigo(); \
	friend struct Z_Construct_UClass_APa_OEnemigo_Statics; \
public: \
	DECLARE_CLASS(APa_OEnemigo, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(APa_OEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<APa_OEnemigo*>(this); }


#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAPa_OEnemigo(); \
	friend struct Z_Construct_UClass_APa_OEnemigo_Statics; \
public: \
	DECLARE_CLASS(APa_OEnemigo, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(APa_OEnemigo) \
	virtual UObject* _getUObject() const override { return const_cast<APa_OEnemigo*>(this); }


#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APa_OEnemigo(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APa_OEnemigo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APa_OEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APa_OEnemigo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APa_OEnemigo(APa_OEnemigo&&); \
	NO_API APa_OEnemigo(const APa_OEnemigo&); \
public:


#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APa_OEnemigo(APa_OEnemigo&&); \
	NO_API APa_OEnemigo(const APa_OEnemigo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APa_OEnemigo); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APa_OEnemigo); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APa_OEnemigo)


#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TorreDeControl() { return STRUCT_OFFSET(APa_OEnemigo, TorreDeControl); }


#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_13_PROLOG
#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_SPARSE_DATA \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_INCLASS \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_SPARSE_DATA \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Pa_OEnemigo_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class APa_OEnemigo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_Pa_OEnemigo_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
