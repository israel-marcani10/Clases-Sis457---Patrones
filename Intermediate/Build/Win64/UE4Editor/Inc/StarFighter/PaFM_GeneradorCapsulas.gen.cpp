// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaFM_GeneradorCapsulas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_GeneradorCapsulas() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_GeneradorCapsulas_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_GeneradorCapsulas();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APaFM_GeneradorCapsulas::StaticRegisterNativesAPaFM_GeneradorCapsulas()
	{
	}
	UClass* Z_Construct_UClass_APaFM_GeneradorCapsulas_NoRegister()
	{
		return APaFM_GeneradorCapsulas::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_GeneradorCapsulas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_GeneradorCapsulas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_GeneradorCapsulas_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaFM_GeneradorCapsulas.h" },
		{ "ModuleRelativePath", "PaFM_GeneradorCapsulas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_GeneradorCapsulas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_GeneradorCapsulas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_GeneradorCapsulas_Statics::ClassParams = {
		&APaFM_GeneradorCapsulas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_GeneradorCapsulas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_GeneradorCapsulas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_GeneradorCapsulas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_GeneradorCapsulas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_GeneradorCapsulas, 1228530768);
	template<> STARFIGHTER_API UClass* StaticClass<APaFM_GeneradorCapsulas>()
	{
		return APaFM_GeneradorCapsulas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_GeneradorCapsulas(Z_Construct_UClass_APaFM_GeneradorCapsulas, &APaFM_GeneradorCapsulas::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaFM_GeneradorCapsulas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_GeneradorCapsulas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
