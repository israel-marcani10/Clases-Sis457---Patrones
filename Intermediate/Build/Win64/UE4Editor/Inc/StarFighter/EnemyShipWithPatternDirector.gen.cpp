// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EnemyShipWithPatternDirector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShipWithPatternDirector() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShipWithPatternDirector_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShipWithPatternDirector();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_AEnemyShipWithPattern_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UEnemyShipWithPatternBuilder_NoRegister();
// End Cross Module References
	void AEnemyShipWithPatternDirector::StaticRegisterNativesAEnemyShipWithPatternDirector()
	{
	}
	UClass* Z_Construct_UClass_AEnemyShipWithPatternDirector_NoRegister()
	{
		return AEnemyShipWithPatternDirector::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyShipPattern_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EnemyShipPattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "EnemyShipWithPatternDirector.h" },
		{ "ModuleRelativePath", "EnemyShipWithPatternDirector.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::NewProp_EnemyShipPattern_MetaData[] = {
		{ "Category", "Nave Enemiga con patron" },
		{ "ModuleRelativePath", "EnemyShipWithPatternDirector.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::NewProp_EnemyShipPattern = { "EnemyShipPattern", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemyShipWithPatternDirector, EnemyShipPattern), Z_Construct_UClass_AEnemyShipWithPattern_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::NewProp_EnemyShipPattern_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::NewProp_EnemyShipPattern_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::NewProp_EnemyShipPattern,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UEnemyShipWithPatternBuilder_NoRegister, (int32)VTABLE_OFFSET(AEnemyShipWithPatternDirector, IEnemyShipWithPatternBuilder), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyShipWithPatternDirector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::ClassParams = {
		&AEnemyShipWithPatternDirector::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyShipWithPatternDirector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemyShipWithPatternDirector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemyShipWithPatternDirector, 205983978);
	template<> STARFIGHTER_API UClass* StaticClass<AEnemyShipWithPatternDirector>()
	{
		return AEnemyShipWithPatternDirector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemyShipWithPatternDirector(Z_Construct_UClass_AEnemyShipWithPatternDirector, &AEnemyShipWithPatternDirector::StaticClass, TEXT("/Script/StarFighter"), TEXT("AEnemyShipWithPatternDirector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyShipWithPatternDirector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
