// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/PaAda_FoodAdapter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaAda_FoodAdapter() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APaAda_FoodAdapter_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaAda_FoodAdapter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	STARFIGHTER_API UClass* Z_Construct_UClass_APaAdaGeneradorFood_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPaAda_CreateFood_NoRegister();
// End Cross Module References
	void APaAda_FoodAdapter::StaticRegisterNativesAPaAda_FoodAdapter()
	{
	}
	UClass* Z_Construct_UClass_APaAda_FoodAdapter_NoRegister()
	{
		return APaAda_FoodAdapter::StaticClass();
	}
	struct Z_Construct_UClass_APaAda_FoodAdapter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoodView_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoodView;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APaAda_FoodAdapter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaAda_FoodAdapter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PaAda_FoodAdapter.h" },
		{ "ModuleRelativePath", "PaAda_FoodAdapter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APaAda_FoodAdapter_Statics::NewProp_FoodView_MetaData[] = {
		{ "Comment", "// el actor de la clase food\n" },
		{ "ModuleRelativePath", "PaAda_FoodAdapter.h" },
		{ "ToolTip", "el actor de la clase food" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APaAda_FoodAdapter_Statics::NewProp_FoodView = { "FoodView", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APaAda_FoodAdapter, FoodView), Z_Construct_UClass_APaAdaGeneradorFood_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APaAda_FoodAdapter_Statics::NewProp_FoodView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APaAda_FoodAdapter_Statics::NewProp_FoodView_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APaAda_FoodAdapter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APaAda_FoodAdapter_Statics::NewProp_FoodView,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APaAda_FoodAdapter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPaAda_CreateFood_NoRegister, (int32)VTABLE_OFFSET(APaAda_FoodAdapter, IPaAda_CreateFood), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APaAda_FoodAdapter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APaAda_FoodAdapter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APaAda_FoodAdapter_Statics::ClassParams = {
		&APaAda_FoodAdapter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APaAda_FoodAdapter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APaAda_FoodAdapter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APaAda_FoodAdapter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APaAda_FoodAdapter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APaAda_FoodAdapter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APaAda_FoodAdapter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APaAda_FoodAdapter, 101981563);
	template<> STARFIGHTER_API UClass* StaticClass<APaAda_FoodAdapter>()
	{
		return APaAda_FoodAdapter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APaAda_FoodAdapter(Z_Construct_UClass_APaAda_FoodAdapter, &APaAda_FoodAdapter::StaticClass, TEXT("/Script/StarFighter"), TEXT("APaAda_FoodAdapter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APaAda_FoodAdapter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
