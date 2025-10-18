// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorRoyale/HorrorRoyaleGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHorrorRoyaleGameModeBase() {}
// Cross Module References
	HORRORROYALE_API UClass* Z_Construct_UClass_AHorrorRoyaleGameModeBase_NoRegister();
	HORRORROYALE_API UClass* Z_Construct_UClass_AHorrorRoyaleGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_HorrorRoyale();
// End Cross Module References
	void AHorrorRoyaleGameModeBase::StaticRegisterNativesAHorrorRoyaleGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AHorrorRoyaleGameModeBase_NoRegister()
	{
		return AHorrorRoyaleGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AHorrorRoyaleGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHorrorRoyaleGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_HorrorRoyale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHorrorRoyaleGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "HorrorRoyaleGameModeBase.h" },
		{ "ModuleRelativePath", "HorrorRoyaleGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHorrorRoyaleGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorRoyaleGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHorrorRoyaleGameModeBase_Statics::ClassParams = {
		&AHorrorRoyaleGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHorrorRoyaleGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorRoyaleGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHorrorRoyaleGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHorrorRoyaleGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHorrorRoyaleGameModeBase, 2464552029);
	template<> HORRORROYALE_API UClass* StaticClass<AHorrorRoyaleGameModeBase>()
	{
		return AHorrorRoyaleGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHorrorRoyaleGameModeBase(Z_Construct_UClass_AHorrorRoyaleGameModeBase, &AHorrorRoyaleGameModeBase::StaticClass, TEXT("/Script/HorrorRoyale"), TEXT("AHorrorRoyaleGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHorrorRoyaleGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
