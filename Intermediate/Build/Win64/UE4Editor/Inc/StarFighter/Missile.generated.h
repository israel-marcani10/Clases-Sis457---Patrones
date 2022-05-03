// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_Missile_generated_h
#error "Missile.generated.h already included, missing '#pragma once' in Missile.h"
#endif
#define STARFIGHTER_Missile_generated_h

#define StarFighter_Source_StarFighter_Missile_h_15_SPARSE_DATA
#define StarFighter_Source_StarFighter_Missile_h_15_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_Missile_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_Missile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMissile(); \
	friend struct Z_Construct_UClass_AMissile_Statics; \
public: \
	DECLARE_CLASS(AMissile, AProyectil, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AMissile)


#define StarFighter_Source_StarFighter_Missile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMissile(); \
	friend struct Z_Construct_UClass_AMissile_Statics; \
public: \
	DECLARE_CLASS(AMissile, AProyectil, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AMissile)


#define StarFighter_Source_StarFighter_Missile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMissile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMissile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissile(AMissile&&); \
	NO_API AMissile(const AMissile&); \
public:


#define StarFighter_Source_StarFighter_Missile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMissile(AMissile&&); \
	NO_API AMissile(const AMissile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMissile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMissile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMissile)


#define StarFighter_Source_StarFighter_Missile_h_15_PRIVATE_PROPERTY_OFFSET
#define StarFighter_Source_StarFighter_Missile_h_12_PROLOG
#define StarFighter_Source_StarFighter_Missile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Missile_h_15_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Missile_h_15_SPARSE_DATA \
	StarFighter_Source_StarFighter_Missile_h_15_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_Missile_h_15_INCLASS \
	StarFighter_Source_StarFighter_Missile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Missile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Missile_h_15_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_Missile_h_15_SPARSE_DATA \
	StarFighter_Source_StarFighter_Missile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Missile_h_15_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Missile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class AMissile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_Missile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
