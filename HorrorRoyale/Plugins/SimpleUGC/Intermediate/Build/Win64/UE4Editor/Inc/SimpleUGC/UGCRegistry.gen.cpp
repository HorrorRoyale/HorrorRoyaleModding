// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SimpleUGC/Public/UGCRegistry.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUGCRegistry() {}
// Cross Module References
	SIMPLEUGC_API UScriptStruct* Z_Construct_UScriptStruct_FUGCPackage();
	UPackage* Z_Construct_UPackage__Script_SimpleUGC();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry_NoRegister();
	SIMPLEUGC_API UClass* Z_Construct_UClass_UUGCRegistry();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FUGCPackage::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SIMPLEUGC_API uint32 Get_Z_Construct_UScriptStruct_FUGCPackage_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FUGCPackage, Z_Construct_UPackage__Script_SimpleUGC(), TEXT("UGCPackage"), sizeof(FUGCPackage), Get_Z_Construct_UScriptStruct_FUGCPackage_Hash());
	}
	return Singleton;
}
template<> SIMPLEUGC_API UScriptStruct* StaticStruct<FUGCPackage>()
{
	return FUGCPackage::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FUGCPackage(FUGCPackage::StaticStruct, TEXT("/Script/SimpleUGC"), TEXT("UGCPackage"), false, nullptr, nullptr);
static struct FScriptStruct_SimpleUGC_StaticRegisterNativesFUGCPackage
{
	FScriptStruct_SimpleUGC_StaticRegisterNativesFUGCPackage()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("UGCPackage")),new UScriptStruct::TCppStructOps<FUGCPackage>);
	}
} ScriptStruct_SimpleUGC_StaticRegisterNativesFUGCPackage;
	struct Z_Construct_UScriptStruct_FUGCPackage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PackagePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PackagePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EngineVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EngineVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Author_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Author;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Description;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUGCPackage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUGCPackage>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath = { "PackagePath", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUGCPackage, PackagePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion = { "EngineVersion", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUGCPackage, EngineVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author = { "Author", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUGCPackage, Author), METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FUGCPackage, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_PackagePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_EngineVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Author,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUGCPackage_Statics::NewProp_Description,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUGCPackage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
		nullptr,
		&NewStructOps,
		"UGCPackage",
		sizeof(FUGCPackage),
		alignof(FUGCPackage),
		Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUGCPackage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUGCPackage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUGCPackage()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FUGCPackage_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SimpleUGC();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("UGCPackage"), sizeof(FUGCPackage), Get_Z_Construct_UScriptStruct_FUGCPackage_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FUGCPackage_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FUGCPackage_Hash() { return 2127683872U; }
	DEFINE_FUNCTION(UUGCRegistry::execGetOverrideForActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<AActor> *)Z_Param__Result=P_THIS->GetOverrideForActorClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execClearOverrideForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearOverrideForClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execRegisterOverrideForClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ClassToOverride);
		P_GET_OBJECT(UClass,Z_Param_OverrideClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterOverrideForClass(Z_Param_ClassToOverride,Z_Param_OverrideClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execApplyOverridesForActorClass)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyOverridesForActorClass(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execApplyAllOverridesInPackage)
	{
		P_GET_STRUCT(FUGCPackage,Z_Param_Package);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyAllOverridesInPackage(Z_Param_Package);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetActorClassesWithReplacementActorComponentsInPackage)
	{
		P_GET_STRUCT(FUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(TSubclassOf<AActor> ,Z_Param_Out_ActorClasses);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetActorClassesWithReplacementActorComponentsInPackage(Z_Param_Package,Z_Param_Out_ActorClasses);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetMapsInPackage)
	{
		P_GET_STRUCT(FUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(FName,Z_Param_Out_Maps);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetMapsInPackage(Z_Param_Package,Z_Param_Out_Maps);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execGetAllClassesInPackage)
	{
		P_GET_STRUCT(FUGCPackage,Z_Param_Package);
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_Classes);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetAllClassesInPackage(Z_Param_Package,Z_Param_Out_Classes);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUGCRegistry::execFindUGCPackages)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FindUGCPackages();
		P_NATIVE_END;
	}
	void UUGCRegistry::StaticRegisterNativesUUGCRegistry()
	{
		UClass* Class = UUGCRegistry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyAllOverridesInPackage", &UUGCRegistry::execApplyAllOverridesInPackage },
			{ "ApplyOverridesForActorClass", &UUGCRegistry::execApplyOverridesForActorClass },
			{ "ClearOverrideForClass", &UUGCRegistry::execClearOverrideForClass },
			{ "FindUGCPackages", &UUGCRegistry::execFindUGCPackages },
			{ "GetActorClassesWithReplacementActorComponentsInPackage", &UUGCRegistry::execGetActorClassesWithReplacementActorComponentsInPackage },
			{ "GetAllClassesInPackage", &UUGCRegistry::execGetAllClassesInPackage },
			{ "GetMapsInPackage", &UUGCRegistry::execGetMapsInPackage },
			{ "GetOverrideForActorClass", &UUGCRegistry::execGetOverrideForActorClass },
			{ "RegisterOverrideForClass", &UUGCRegistry::execRegisterOverrideForClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics
	{
		struct UGCRegistry_eventApplyAllOverridesInPackage_Parms
		{
			FUGCPackage Package;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Package;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventApplyAllOverridesInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventApplyAllOverridesInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventApplyAllOverridesInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_Package,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Applies entire package of Actor Replacements. This is common for applying an entire class-based \"Mod.\"\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Applies entire package of Actor Replacements. This is common for applying an entire class-based \"Mod.\"" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ApplyAllOverridesInPackage", nullptr, nullptr, sizeof(UGCRegistry_eventApplyAllOverridesInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics
	{
		struct UGCRegistry_eventApplyOverridesForActorClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventApplyOverridesForActorClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventApplyOverridesForActorClass_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventApplyOverridesForActorClass_Parms), &Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Applies an override for a specific Class. Find valid classes to use here by calling GetActorClassesWithReplacementActorComponentsInPackage\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Applies an override for a specific Class. Find valid classes to use here by calling GetActorClassesWithReplacementActorComponentsInPackage" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ApplyOverridesForActorClass", nullptr, nullptr, sizeof(UGCRegistry_eventApplyOverridesForActorClass_Parms), Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics
	{
		struct UGCRegistry_eventClearOverrideForClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventClearOverrideForClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::NewProp_ActorClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Used to clear the override from the registry. To clear all, loop through RegisterredOverrides, break the struct and run the Origin into this function.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Used to clear the override from the registry. To clear all, loop through RegisterredOverrides, break the struct and run the Origin into this function." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "ClearOverrideForClass", nullptr, nullptr, sizeof(UGCRegistry_eventClearOverrideForClass_Parms), Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics
	{
		struct UGCRegistry_eventFindUGCPackages_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventFindUGCPackages_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventFindUGCPackages_Parms), &Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// This populates UGCPackages based on what is found in UGC plugin files. If you're mounting new /Plugin paks at runtime. Expose this to Blueprints.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "This populates UGCPackages based on what is found in UGC plugin files. If you're mounting new /Plugin paks at runtime. Expose this to Blueprints." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "FindUGCPackages", nullptr, nullptr, sizeof(UGCRegistry_eventFindUGCPackages_Parms), Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_FindUGCPackages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_FindUGCPackages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics
	{
		struct UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms
		{
			FUGCPackage Package;
			TArray<TSubclassOf<AActor> > ActorClasses;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClasses_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorClasses;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses_Inner = { "ActorClasses", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses = { "ActorClasses", nullptr, (EPropertyFlags)0x0014000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms, ActorClasses), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_Package,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ActorClasses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Returns All Actor Classes In Package that have the ability to replace a a base class. Use this when you want to register only specific class overrides from a UGC package.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Returns All Actor Classes In Package that have the ability to replace a a base class. Use this when you want to register only specific class overrides from a UGC package." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetActorClassesWithReplacementActorComponentsInPackage", nullptr, nullptr, sizeof(UGCRegistry_eventGetActorClassesWithReplacementActorComponentsInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics
	{
		struct UGCRegistry_eventGetAllClassesInPackage_Parms
		{
			FUGCPackage Package;
			TArray<UClass*> Classes;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Classes;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetAllClassesInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetAllClassesInPackage_Parms, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetAllClassesInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventGetAllClassesInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Package,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_Classes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// Returns All Classes in a UGC package.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Returns All Classes in a UGC package." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetAllClassesInPackage", nullptr, nullptr, sizeof(UGCRegistry_eventGetAllClassesInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics
	{
		struct UGCRegistry_eventGetMapsInPackage_Parms
		{
			FUGCPackage Package;
			TArray<FName> Maps;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Package;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Maps_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Maps;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Package = { "Package", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetMapsInPackage_Parms, Package), Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps_Inner = { "Maps", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps = { "Maps", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetMapsInPackage_Parms, Maps), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UGCRegistry_eventGetMapsInPackage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGCRegistry_eventGetMapsInPackage_Parms), &Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Package,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_Maps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// Returns All Maps in a UGC package.\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Returns All Maps in a UGC package." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetMapsInPackage", nullptr, nullptr, sizeof(UGCRegistry_eventGetMapsInPackage_Parms), Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics
	{
		struct UGCRegistry_eventGetOverrideForActorClass_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			TSubclassOf<AActor>  ReturnValue;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetOverrideForActorClass_Parms, ActorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventGetOverrideForActorClass_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// Used in gameplay to look up what class is actually supposed to be spawned\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Used in gameplay to look up what class is actually supposed to be spawned" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "GetOverrideForActorClass", nullptr, nullptr, sizeof(UGCRegistry_eventGetOverrideForActorClass_Parms), Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics
	{
		struct UGCRegistry_eventRegisterOverrideForClass_Parms
		{
			TSubclassOf<AActor>  ClassToOverride;
			TSubclassOf<AActor>  OverrideClass;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ClassToOverride;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_OverrideClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_ClassToOverride = { "ClassToOverride", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventRegisterOverrideForClass_Parms, ClassToOverride), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_OverrideClass = { "OverrideClass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGCRegistry_eventRegisterOverrideForClass_Parms, OverrideClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_ClassToOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::NewProp_OverrideClass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "// A manual override assignment. Not reccommended for mod packages, but useful for big UGC drops (100 UGuns pack, etc)\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "A manual override assignment. Not reccommended for mod packages, but useful for big UGC drops (100 UGuns pack, etc)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUGCRegistry, nullptr, "RegisterOverrideForClass", nullptr, nullptr, sizeof(UGCRegistry_eventRegisterOverrideForClass_Parms), Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUGCRegistry_NoRegister()
	{
		return UUGCRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UUGCRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UGCPackages_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UGCPackages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UGCPackages;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisteredOverrides_ValueProp;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RegisteredOverrides_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RegisteredOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_RegisteredOverrides;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUGCRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SimpleUGC,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUGCRegistry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUGCRegistry_ApplyAllOverridesInPackage, "ApplyAllOverridesInPackage" }, // 1219448838
		{ &Z_Construct_UFunction_UUGCRegistry_ApplyOverridesForActorClass, "ApplyOverridesForActorClass" }, // 3738794234
		{ &Z_Construct_UFunction_UUGCRegistry_ClearOverrideForClass, "ClearOverrideForClass" }, // 3074570371
		{ &Z_Construct_UFunction_UUGCRegistry_FindUGCPackages, "FindUGCPackages" }, // 1613637627
		{ &Z_Construct_UFunction_UUGCRegistry_GetActorClassesWithReplacementActorComponentsInPackage, "GetActorClassesWithReplacementActorComponentsInPackage" }, // 1678553810
		{ &Z_Construct_UFunction_UUGCRegistry_GetAllClassesInPackage, "GetAllClassesInPackage" }, // 2968500171
		{ &Z_Construct_UFunction_UUGCRegistry_GetMapsInPackage, "GetMapsInPackage" }, // 3450363122
		{ &Z_Construct_UFunction_UUGCRegistry_GetOverrideForActorClass, "GetOverrideForActorClass" }, // 4147343999
		{ &Z_Construct_UFunction_UUGCRegistry_RegisterOverrideForClass, "RegisterOverrideForClass" }, // 3637992296
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UGCRegistry.h" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_Inner = { "UGCPackages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FUGCPackage, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData[] = {
		{ "Category", "SimpleUGC" },
		{ "Comment", "// This is our list of UGC packages. Populated by FindUGCPackages()\n" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "This is our list of UGC packages. Populated by FindUGCPackages()" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages = { "UGCPackages", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCRegistry, UGCPackages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_ValueProp = { "RegisteredOverrides", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_Key_KeyProp = { "RegisteredOverrides_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData[] = {
		{ "Category", "SimpleUGC|Actor Replacement" },
		{ "Comment", "/*Override*/" },
		{ "ModuleRelativePath", "Public/UGCRegistry.h" },
		{ "ToolTip", "Override" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides = { "RegisteredOverrides", nullptr, (EPropertyFlags)0x0014000000000014, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUGCRegistry, RegisteredOverrides), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUGCRegistry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_UGCPackages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUGCRegistry_Statics::NewProp_RegisteredOverrides,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUGCRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUGCRegistry>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUGCRegistry_Statics::ClassParams = {
		&UUGCRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUGCRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUGCRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUGCRegistry()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUGCRegistry_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUGCRegistry, 3868178958);
	template<> SIMPLEUGC_API UClass* StaticClass<UUGCRegistry>()
	{
		return UUGCRegistry::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUGCRegistry(Z_Construct_UClass_UUGCRegistry, &UUGCRegistry::StaticClass, TEXT("/Script/SimpleUGC"), TEXT("UUGCRegistry"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUGCRegistry);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
