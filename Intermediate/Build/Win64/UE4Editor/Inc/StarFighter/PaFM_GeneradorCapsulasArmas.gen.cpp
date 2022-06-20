// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaFM_GeneradorCapsulasArmas.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaFM_GeneradorCapsulasArmas() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_GeneradorCapsulasArmas();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaFM_GeneradorCapsulas();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
// End Cross Module References
	void APaFM_GeneradorCapsulasArmas::StaticRegisterNativesAPaFM_GeneradorCapsulasArmas()
	{
	}
	UClass* Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_NoRegister()
	{
		return APaFM_GeneradorCapsulasArmas::StaticClass();
	}
	struct Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APaFM_GeneradorCapsulas,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PaFM_GeneradorCapsulasArmas.h" },
		{ "ModuleRelativePath", "PaFM_GeneradorCapsulasArmas.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaFM_GeneradorCapsulasArmas>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_Statics::ClassParams = {
		&APaFM_GeneradorCapsulasArmas::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaFM_GeneradorCapsulasArmas()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaFM_GeneradorCapsulasArmas_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaFM_GeneradorCapsulasArmas, 1523243479);
	template<> STARFIGHTER_API UClass* StaticClass<APaFM_GeneradorCapsulasArmas>()
	{
		return APaFM_GeneradorCapsulasArmas::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaFM_GeneradorCapsulasArmas(Z_Construct_UClass_APaFM_GeneradorCapsulasArmas, &APaFM_GeneradorCapsulasArmas::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaFM_GeneradorCapsulasArmas"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaFM_GeneradorCapsulasArmas);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
