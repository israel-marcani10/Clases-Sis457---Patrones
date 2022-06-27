// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef STARFIGHTER_Pa_OSubscriber_generated_h
#error "Pa_OSubscriber.generated.h already included, missing '#pragma once' in Pa_OSubscriber.h"
#endif
#define STARFIGHTER_Pa_OSubscriber_generated_h

#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_SPARSE_DATA
#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_RPC_WRAPPERS
#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API UPa_OSubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPa_OSubscriber) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, UPa_OSubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPa_OSubscriber); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API UPa_OSubscriber(UPa_OSubscriber&&); \
	STARFIGHTER_API UPa_OSubscriber(const UPa_OSubscriber&); \
public:


#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	STARFIGHTER_API UPa_OSubscriber(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	STARFIGHTER_API UPa_OSubscriber(UPa_OSubscriber&&); \
	STARFIGHTER_API UPa_OSubscriber(const UPa_OSubscriber&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(STARFIGHTER_API, UPa_OSubscriber); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPa_OSubscriber); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPa_OSubscriber)


#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUPa_OSubscriber(); \
	friend struct Z_Construct_UClass_UPa_OSubscriber_Statics; \
public: \
	DECLARE_CLASS(UPa_OSubscriber, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/StarFighter"), STARFIGHTER_API) \
	DECLARE_SERIALIZER(UPa_OSubscriber)


#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_GENERATED_UINTERFACE_BODY() \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IPa_OSubscriber() {} \
public: \
	typedef UPa_OSubscriber UClassType; \
	typedef IPa_OSubscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IPa_OSubscriber() {} \
public: \
	typedef UPa_OSubscriber UClassType; \
	typedef IPa_OSubscriber ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_10_PROLOG
#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_RPC_WRAPPERS \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define StarFighter_Source_StarFighter_Pa_OSubscriber_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_SPARSE_DATA \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	StarFighter_Source_StarFighter_Pa_OSubscriber_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> STARFIGHTER_API UClass* StaticClass<class UPa_OSubscriber>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID StarFighter_Source_StarFighter_Pa_OSubscriber_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
