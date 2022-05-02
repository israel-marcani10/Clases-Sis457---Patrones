// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/LandEnemy2.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandEnemy2() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ALandEnemy2_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ALandEnemy2();
	STARFIGHTER_API UClass* Z_Construct_UClass_ALandEnemy1();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent_NoRegister();
// End Cross Module References
	void ALandEnemy2::StaticRegisterNativesALandEnemy2()
	{
	}
	UClass* Z_Construct_UClass_ALandEnemy2_NoRegister()
	{
		return ALandEnemy2::StaticClass();
	}
	struct Z_Construct_UClass_ALandEnemy2_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bala_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bala;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bomba_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bomba;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALandEnemy2_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ALandEnemy1,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandEnemy2_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "LandEnemy2.h" },
		{ "ModuleRelativePath", "LandEnemy2.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bala_MetaData[] = {
		{ "Category", "LandEnemy2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LandEnemy2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bala = { "Bala", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandEnemy2, Bala), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bala_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bala_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bomba_MetaData[] = {
		{ "Category", "LandEnemy2" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "LandEnemy2.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bomba = { "Bomba", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALandEnemy2, Bomba), Z_Construct_UClass_UProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bomba_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bomba_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALandEnemy2_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bala,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALandEnemy2_Statics::NewProp_Bomba,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALandEnemy2_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALandEnemy2>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALandEnemy2_Statics::ClassParams = {
		&ALandEnemy2::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALandEnemy2_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALandEnemy2_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALandEnemy2_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALandEnemy2_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALandEnemy2()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALandEnemy2_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALandEnemy2, 2389926278);
	template<> STARFIGHTER_API UClass* StaticClass<ALandEnemy2>()
	{
		return ALandEnemy2::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALandEnemy2(Z_Construct_UClass_ALandEnemy2, &ALandEnemy2::StaticClass, TEXT("/Script/StarFighter"), TEXT("ALandEnemy2"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALandEnemy2);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
