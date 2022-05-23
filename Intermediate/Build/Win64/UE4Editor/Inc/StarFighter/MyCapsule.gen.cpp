// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/MyCapsule.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyCapsule() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_AMyCapsule();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AMyCapsule::StaticRegisterNativesAMyCapsule()
	{
	}
	UClass* Z_Construct_UClass_AMyCapsule_NoRegister()
	{
		return AMyCapsule::StaticClass();
	}
	struct Z_Construct_UClass_AMyCapsule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NameCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NameCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyCapsule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCapsule_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyCapsule.h" },
		{ "ModuleRelativePath", "MyCapsule.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCapsule_Statics::NewProp_NameCapsule_MetaData[] = {
		{ "Category", "MyCapsule" },
		{ "ModuleRelativePath", "MyCapsule.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMyCapsule_Statics::NewProp_NameCapsule = { "NameCapsule", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCapsule, NameCapsule), METADATA_PARAMS(Z_Construct_UClass_AMyCapsule_Statics::NewProp_NameCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCapsule_Statics::NewProp_NameCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyCapsule_Statics::NewProp_CapsuleMesh_MetaData[] = {
		{ "Category", "MyCapsule" },
		{ "Comment", "// Malla de la clase Mi capsula\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MyCapsule.h" },
		{ "ToolTip", "Malla de la clase Mi capsula" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyCapsule_Statics::NewProp_CapsuleMesh = { "CapsuleMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMyCapsule, CapsuleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMyCapsule_Statics::NewProp_CapsuleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCapsule_Statics::NewProp_CapsuleMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyCapsule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCapsule_Statics::NewProp_NameCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyCapsule_Statics::NewProp_CapsuleMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyCapsule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyCapsule>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyCapsule_Statics::ClassParams = {
		&AMyCapsule::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMyCapsule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMyCapsule_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMyCapsule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyCapsule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyCapsule()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyCapsule_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyCapsule, 4006373154);
	template<> STARFIGHTER_API UClass* StaticClass<AMyCapsule>()
	{
		return AMyCapsule::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyCapsule(Z_Construct_UClass_AMyCapsule, &AMyCapsule::StaticClass, TEXT("/Script/StarFighter"), TEXT("AMyCapsule"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyCapsule);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
