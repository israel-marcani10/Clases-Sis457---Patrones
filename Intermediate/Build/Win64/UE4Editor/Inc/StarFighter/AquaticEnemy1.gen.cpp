// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/AquaticEnemy1.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAquaticEnemy1() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AAquaticEnemy1_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AAquaticEnemy1();
	STARFIGHTER_API UClass* Z_Construct_UClass_ANave();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void AAquaticEnemy1::StaticRegisterNativesAAquaticEnemy1()
	{
	}
	UClass* Z_Construct_UClass_AAquaticEnemy1_NoRegister()
	{
		return AAquaticEnemy1::StaticClass();
	}
	struct Z_Construct_UClass_AAquaticEnemy1_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveAquaticShip_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveAquaticShip;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Torpedo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Torpedo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bala_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bala;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_life_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_life;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAquaticEnemy1_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANave,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAquaticEnemy1_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AquaticEnemy1.h" },
		{ "ModuleRelativePath", "AquaticEnemy1.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_MoveAquaticShip_MetaData[] = {
		{ "Category", "AquaticEnemy1" },
		{ "Comment", "// propiedad para hacer mover la nave acuatica enemiga\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AquaticEnemy1.h" },
		{ "ToolTip", "propiedad para hacer mover la nave acuatica enemiga" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_MoveAquaticShip = { "MoveAquaticShip", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAquaticEnemy1, MoveAquaticShip), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_MoveAquaticShip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_MoveAquaticShip_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Torpedo_MetaData[] = {
		{ "Category", "AquaticEnemy1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AquaticEnemy1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Torpedo = { "Torpedo", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAquaticEnemy1, Torpedo), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Torpedo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Torpedo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Bala_MetaData[] = {
		{ "Category", "AquaticEnemy1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AquaticEnemy1.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Bala = { "Bala", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAquaticEnemy1, Bala), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Bala_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Bala_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_life_MetaData[] = {
		{ "Category", "AquaticEnemy1" },
		{ "ModuleRelativePath", "AquaticEnemy1.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_life = { "life", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAquaticEnemy1, life), METADATA_PARAMS(Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_life_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_life_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAquaticEnemy1_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_MoveAquaticShip,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Torpedo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_Bala,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAquaticEnemy1_Statics::NewProp_life,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAquaticEnemy1_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAquaticEnemy1>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAquaticEnemy1_Statics::ClassParams = {
		&AAquaticEnemy1::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAquaticEnemy1_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAquaticEnemy1_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAquaticEnemy1_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAquaticEnemy1_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAquaticEnemy1()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAquaticEnemy1_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAquaticEnemy1, 2583434765);
	template<> STARFIGHTER_API UClass* StaticClass<AAquaticEnemy1>()
	{
		return AAquaticEnemy1::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAquaticEnemy1(Z_Construct_UClass_AAquaticEnemy1, &AAquaticEnemy1::StaticClass, TEXT("/Script/StarFighter"), TEXT("AAquaticEnemy1"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAquaticEnemy1);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
