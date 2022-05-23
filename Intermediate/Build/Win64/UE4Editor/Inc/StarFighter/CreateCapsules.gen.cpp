// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/CreateCapsules.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateCapsules() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_ACreateCapsules_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_ACreateCapsules();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void ACreateCapsules::StaticRegisterNativesACreateCapsules()
	{
	}
	UClass* Z_Construct_UClass_ACreateCapsules_NoRegister()
	{
		return ACreateCapsules::StaticClass();
	}
	struct Z_Construct_UClass_ACreateCapsules_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WhereToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WhereToSpawn;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SpawnCapsules_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnCapsules_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnCapsules;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACreateCapsules_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreateCapsules_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CreateCapsules.h" },
		{ "ModuleRelativePath", "CreateCapsules.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreateCapsules_Statics::NewProp_WhereToSpawn_MetaData[] = {
		{ "Category", "Spawing" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CreateCapsules.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACreateCapsules_Statics::NewProp_WhereToSpawn = { "WhereToSpawn", nullptr, (EPropertyFlags)0x00100000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreateCapsules, WhereToSpawn), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACreateCapsules_Statics::NewProp_WhereToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreateCapsules_Statics::NewProp_WhereToSpawn_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACreateCapsules_Statics::NewProp_SpawnCapsules_Inner = { "SpawnCapsules", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACreateCapsules_Statics::NewProp_SpawnCapsules_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "CreateCapsules.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACreateCapsules_Statics::NewProp_SpawnCapsules = { "SpawnCapsules", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACreateCapsules, SpawnCapsules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACreateCapsules_Statics::NewProp_SpawnCapsules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACreateCapsules_Statics::NewProp_SpawnCapsules_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACreateCapsules_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreateCapsules_Statics::NewProp_WhereToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreateCapsules_Statics::NewProp_SpawnCapsules_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACreateCapsules_Statics::NewProp_SpawnCapsules,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACreateCapsules_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACreateCapsules>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACreateCapsules_Statics::ClassParams = {
		&ACreateCapsules::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACreateCapsules_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACreateCapsules_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACreateCapsules_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACreateCapsules_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACreateCapsules()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACreateCapsules_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACreateCapsules, 3867541517);
	template<> STARFIGHTER_API UClass* StaticClass<ACreateCapsules>()
	{
		return ACreateCapsules::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACreateCapsules(Z_Construct_UClass_ACreateCapsules, &ACreateCapsules::StaticClass, TEXT("/Script/StarFighter"), TEXT("ACreateCapsules"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACreateCapsules);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
