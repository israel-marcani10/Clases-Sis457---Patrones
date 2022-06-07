// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/EnemyShipWithPatternBuilder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyShipWithPatternBuilder() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UEnemyShipWithPatternBuilder_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UEnemyShipWithPatternBuilder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UEnemyShipWithPatternBuilder::StaticRegisterNativesUEnemyShipWithPatternBuilder()
	{
	}
	UClass* Z_Construct_UClass_UEnemyShipWithPatternBuilder_NoRegister()
	{
		return UEnemyShipWithPatternBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyShipWithPatternBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyShipWithPatternBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyShipWithPatternBuilder_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "EnemyShipWithPatternBuilder.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyShipWithPatternBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEnemyShipWithPatternBuilder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEnemyShipWithPatternBuilder_Statics::ClassParams = {
		&UEnemyShipWithPatternBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyShipWithPatternBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyShipWithPatternBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyShipWithPatternBuilder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEnemyShipWithPatternBuilder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEnemyShipWithPatternBuilder, 4073037706);
	template<> STARFIGHTER_API UClass* StaticClass<UEnemyShipWithPatternBuilder>()
	{
		return UEnemyShipWithPatternBuilder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEnemyShipWithPatternBuilder(Z_Construct_UClass_UEnemyShipWithPatternBuilder, &UEnemyShipWithPatternBuilder::StaticClass, TEXT("/Script/StarFighter"), TEXT("UEnemyShipWithPatternBuilder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyShipWithPatternBuilder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
