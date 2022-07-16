// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StarFighter/Pa_OEnemigo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePa_OEnemigo() {}
// Cross Module References
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_OEnemigo_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APa_OEnemigo();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_StarFighter();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_APlayerShip_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPa_OSubscriber_NoRegister();
	STARFIGHTER_API UClass* Z_Construct_UClass_UPa_OAcciones_NoRegister();
// End Cross Module References
	void APa_OEnemigo::StaticRegisterNativesAPa_OEnemigo()
	{
	}
	UClass* Z_Construct_UClass_APa_OEnemigo_NoRegister()
	{
		return APa_OEnemigo::StaticClass();
	}
	struct Z_Construct_UClass_APa_OEnemigo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShipMeshEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShipMeshEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TorreDeControl_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TorreDeControl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APa_OEnemigo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_StarFighter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OEnemigo_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Pa_OEnemigo.h" },
		{ "ModuleRelativePath", "Pa_OEnemigo.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_ShipMeshEnemy_MetaData[] = {
		{ "Category", "Nave Enemiga" },
		{ "Comment", "// mesh de la nave enemiga\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Pa_OEnemigo.h" },
		{ "ToolTip", "mesh de la nave enemiga" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_ShipMeshEnemy = { "ShipMeshEnemy", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APa_OEnemigo, ShipMeshEnemy), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_ShipMeshEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_ShipMeshEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_TorreDeControl_MetaData[] = {
		{ "Comment", "//La Torre del Reloj de este Suscriptor\n" },
		{ "ModuleRelativePath", "Pa_OEnemigo.h" },
		{ "ToolTip", "La Torre del Reloj de este Suscriptor" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_TorreDeControl = { "TorreDeControl", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APa_OEnemigo, TorreDeControl), Z_Construct_UClass_APlayerShip_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_TorreDeControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_TorreDeControl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APa_OEnemigo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_ShipMeshEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APa_OEnemigo_Statics::NewProp_TorreDeControl,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_APa_OEnemigo_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPa_OSubscriber_NoRegister, (int32)VTABLE_OFFSET(APa_OEnemigo, IPa_OSubscriber), false },
			{ Z_Construct_UClass_UPa_OAcciones_NoRegister, (int32)VTABLE_OFFSET(APa_OEnemigo, IPa_OAcciones), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APa_OEnemigo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APa_OEnemigo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APa_OEnemigo_Statics::ClassParams = {
		&APa_OEnemigo::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APa_OEnemigo_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APa_OEnemigo_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APa_OEnemigo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APa_OEnemigo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APa_OEnemigo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APa_OEnemigo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APa_OEnemigo, 4047653059);
	template<> STARFIGHTER_API UClass* StaticClass<APa_OEnemigo>()
	{
		return APa_OEnemigo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APa_OEnemigo(Z_Construct_UClass_APa_OEnemigo, &APa_OEnemigo::StaticClass, TEXT("/Script/StarFighter"), TEXT("APa_OEnemigo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APa_OEnemigo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
