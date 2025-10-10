// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCBaseGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCBaseGameInstance() {}
// Cross Module References
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBaseGameInstance_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCBaseGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
// End Cross Module References
	void UUGCBaseGameInstance::StaticRegisterNativesUUGCBaseGameInstance()
	{
	}
	UClass* Z_Construct_UClass_UUGCBaseGameInstance_NoRegister()
	{
		return UUGCBaseGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UUGCBaseGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCRegistry_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UGCRegistry;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCBaseGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCBaseGameInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UGCBaseGameInstance.h" },
		{ "ModuleRelativePath", "Public/UGCBaseGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// The Registry that holds information about UGC and assigned class overrides\n" },
		{ "ModuleRelativePath", "Public/UGCBaseGameInstance.h" },
		{ "ToolTip", "The Registry that holds information about UGC and assigned class overrides" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry = { "UGCRegistry", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCBaseGameInstance, UGCRegistry), Z_Construct_UClass_UUGCRegistry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCBaseGameInstance_Statics::NewProp_UGCRegistry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCBaseGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCBaseGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUGCBaseGameInstance_Statics::ClassParams = {
		&UUGCBaseGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCBaseGameInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCBaseGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCBaseGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUGCBaseGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUGCBaseGameInstance, 2769864151);
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCBaseGameInstance>()
	{
		return UUGCBaseGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUGCBaseGameInstance(Z_Construct_UClass_UUGCBaseGameInstance, &UUGCBaseGameInstance::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UUGCBaseGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCBaseGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
