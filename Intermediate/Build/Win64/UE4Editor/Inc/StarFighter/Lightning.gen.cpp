// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Lightning.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLightning() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ALightning_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ALightning();
	STARFIGHTER_API UClass* Z_Construct_UClass_AProyectil();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void ALightning::StaticRegisterNativesALightning()
	{
	}
	UClass* Z_Construct_UClass_ALightning_NoRegister()
	{
		return ALightning::StaticClass();
	}
	struct Z_Construct_UClass_ALightning_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALightning_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AProyectil,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALightning_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Lightning.h" },
		{ "ModuleRelativePath", "Lightning.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALightning_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALightning>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALightning_Statics::ClassParams = {
		&ALightning::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALightning_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALightning_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALightning()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALightning_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALightning, 2263593608);
	template<> STARFIGHTER_API UClass* StaticClass<ALightning>()
	{
		return ALightning::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALightning(Z_Construct_UClass_ALightning, &ALightning::StaticClass, TEXT("/Script/StarFighter"), TEXT("ALightning"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALightning);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
