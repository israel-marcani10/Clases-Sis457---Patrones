// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_StarFighterGameModeBase_generated_h
#error "StarFighterGameModeBase.generated.h already included, missing '#pragma once' in StarFighterGameModeBase.h"
#endif
#define STARFIGHTER_StarFighterGameModeBase_generated_h

#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_SPARSE_DATA
#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStarFighterGameModeBase(); \
	friend struct Z_Construct_UClass_AStarFighterGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AStarFighterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AStarFighterGameModeBase) \
	virtual UObject* _getUObject() const override { return const_cast<AStarFighterGameModeBase*>(this); }


#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAStarFighterGameModeBase(); \
	friend struct Z_Construct_UClass_AStarFighterGameModeBase_Statics; \
public: \
	DECLARE_CLASS(AStarFighterGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/StarFighter"), NO_API) \
	DECLARE_SERIALIZER(AStarFighterGameModeBase) \
	virtual UObject* _getUObject() const override { return const_cast<AStarFighterGameModeBase*>(this); }


#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStarFighterGameModeBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStarFighterGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStarFighterGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStarFighterGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStarFighterGameModeBase(AStarFighterGameModeBase&&); \
	NO_API AStarFighterGameModeBase(const AStarFighterGameModeBase&); \
public:


#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStarFighterGameModeBase(AStarFighterGameModeBase&&); \
	NO_API AStarFighterGameModeBase(const AStarFighterGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStarFighterGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStarFighterGameModeBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStarFighterGameModeBase)


#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PatternEnemyShipDirector() { return STRUCT_OFFSET(AStarFighterGameModeBase, PatternEnemyShipDirector); } \
	FORCEINLINE static uint32 __PPO__PatternEnemyShip1() { return STRUCT_OFFSET(AStarFighterGameModeBase, PatternEnemyShip1); } \
	FORCEINLINE static uint32 __PPO__EnemyShip1() { return STRUCT_OFFSET(AStarFighterGameModeBase, EnemyShip1); }


#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_13_PROLOG
#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_SPARSE_DATA \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_INCLASS \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_PRIVATE_PROPERTY_OFFSET \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_SPARSE_DATA \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_INCLASS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_StarFighterGameModeBase_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class AStarFighterGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_StarFighterGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
