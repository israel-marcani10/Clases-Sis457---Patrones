// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/LandEnemy1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandEnemy1() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ALandEnemy1_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ALandEnemy1();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void ALandEnemy1::StaticRegisterNativesALandEnemy1()
	{
	}
	UClass* Z_Construct_UClass_ALandEnemy1_NoRegister()
	{
		return ALandEnemy1::StaticClass();
	}
	struct Z_Construct_UClass_ALandEnemy1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveLandShip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveLandShip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_life_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_life;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandEnemy1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandEnemy1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LandEnemy1.h" },
		{ "ModuleRelativePath", "LandEnemy1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandEnemy1_Statics::NewProp_MoveLandShip_MetaData[] = {
		{ "Category", "LandEnemy1" },
		{ "Comment", "// propiedad para hacer mover la nave terrestre enemiga\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LandEnemy1.h" },
		{ "ToolTip", "propiedad para hacer mover la nave terrestre enemiga" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandEnemy1_Statics::NewProp_MoveLandShip = { "MoveLandShip", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandEnemy1, MoveLandShip), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandEnemy1_Statics::NewProp_MoveLandShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandEnemy1_Statics::NewProp_MoveLandShip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandEnemy1_Statics::NewProp_life_MetaData[] = {
		{ "Category", "LandEnemy1" },
		{ "ModuleRelativePath", "LandEnemy1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALandEnemy1_Statics::NewProp_life = { "life", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandEnemy1, life), METADATA_PARAMS(Z_Construct_UClass_ALandEnemy1_Statics::NewProp_life_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandEnemy1_Statics::NewProp_life_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandEnemy1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandEnemy1_Statics::NewProp_MoveLandShip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandEnemy1_Statics::NewProp_life,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandEnemy1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandEnemy1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandEnemy1_Statics::ClassParams = {
		&ALandEnemy1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandEnemy1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandEnemy1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandEnemy1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandEnemy1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandEnemy1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandEnemy1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandEnemy1, 1256656098);
	template<> STARFIGHTER_API UClass* StaticClass<ALandEnemy1>()
	{
		return ALandEnemy1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandEnemy1(Z_Construct_UClass_ALandEnemy1, &ALandEnemy1::StaticClass, TEXT("/Script/StarFighter"), TEXT("ALandEnemy1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandEnemy1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
