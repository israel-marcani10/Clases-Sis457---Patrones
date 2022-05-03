// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/AirEnemy1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAirEnemy1() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AAirEnemy1_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AAirEnemy1();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
// End Cross Module References
	void AAirEnemy1::StaticRegisterNativesAAirEnemy1()
	{
	}
	UClass* Z_Construct_UClass_AAirEnemy1_NoRegister()
	{
		return AAirEnemy1::StaticClass();
	}
	struct Z_Construct_UClass_AAirEnemy1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAirShip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveAirShip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_life_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_life;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAirEnemy1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AirEnemy1.h" },
		{ "ModuleRelativePath", "AirEnemy1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy1_Statics::NewProp_MoveAirShip_MetaData[] = {
		{ "Category", "AirEnemy1" },
		{ "Comment", "// propiedad para la nave aerea enemigo\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AirEnemy1.h" },
		{ "ToolTip", "propiedad para la nave aerea enemigo" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirEnemy1_Statics::NewProp_MoveAirShip = { "MoveAirShip", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirEnemy1, MoveAirShip), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAirEnemy1_Statics::NewProp_MoveAirShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy1_Statics::NewProp_MoveAirShip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy1_Statics::NewProp_life_MetaData[] = {
		{ "Category", "AirEnemy1" },
		{ "Comment", "// movimiento de la nave\n" },
		{ "ModuleRelativePath", "AirEnemy1.h" },
		{ "ToolTip", "movimiento de la nave" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAirEnemy1_Statics::NewProp_life = { "life", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirEnemy1, life), METADATA_PARAMS(Z_Construct_UClass_AAirEnemy1_Statics::NewProp_life_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy1_Statics::NewProp_life_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAirEnemy1_Statics::NewProp_ExplosionParticle_MetaData[] = {
		{ "Category", "Particle" },
		{ "Comment", "// vida de la nave\n" },
		{ "ModuleRelativePath", "AirEnemy1.h" },
		{ "ToolTip", "vida de la nave" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAirEnemy1_Statics::NewProp_ExplosionParticle = { "ExplosionParticle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAirEnemy1, ExplosionParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAirEnemy1_Statics::NewProp_ExplosionParticle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy1_Statics::NewProp_ExplosionParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAirEnemy1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirEnemy1_Statics::NewProp_MoveAirShip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirEnemy1_Statics::NewProp_life,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAirEnemy1_Statics::NewProp_ExplosionParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAirEnemy1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAirEnemy1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAirEnemy1_Statics::ClassParams = {
		&AAirEnemy1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAirEnemy1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAirEnemy1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAirEnemy1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAirEnemy1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAirEnemy1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAirEnemy1, 3135655786);
	template<> STARFIGHTER_API UClass* StaticClass<AAirEnemy1>()
	{
		return AAirEnemy1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAirEnemy1(Z_Construct_UClass_AAirEnemy1, &AAirEnemy1::StaticClass, TEXT("/Script/StarFighter"), TEXT("AAirEnemy1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAirEnemy1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
