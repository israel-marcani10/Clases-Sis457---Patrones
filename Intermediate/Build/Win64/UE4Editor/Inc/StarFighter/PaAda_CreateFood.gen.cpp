// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaAda_CreateFood.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaAda_CreateFood() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaAda_CreateFood_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaAda_CreateFood();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void UPaAda_CreateFood::StaticRegisterNativesUPaAda_CreateFood()
	{
	}
	UClass* Z_Construct_UClass_UPaAda_CreateFood_NoRegister()
	{
		return UPaAda_CreateFood::StaticClass();
	}
	struct Z_Construct_UClass_UPaAda_CreateFood_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaAda_CreateFood_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaAda_CreateFood_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "PaAda_CreateFood.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaAda_CreateFood_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPaAda_CreateFood>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPaAda_CreateFood_Statics::ClassParams = {
		&UPaAda_CreateFood::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPaAda_CreateFood_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaAda_CreateFood_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaAda_CreateFood()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPaAda_CreateFood_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPaAda_CreateFood, 3989403305);
	template<> STARFIGHTER_API UClass* StaticClass<UPaAda_CreateFood>()
	{
		return UPaAda_CreateFood::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPaAda_CreateFood(Z_Construct_UClass_UPaAda_CreateFood, &UPaAda_CreateFood::StaticClass, TEXT("/Script/StarFighter"), TEXT("UPaAda_CreateFood"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaAda_CreateFood);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
