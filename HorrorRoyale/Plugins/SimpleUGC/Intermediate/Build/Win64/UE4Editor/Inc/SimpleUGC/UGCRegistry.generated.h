// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FUGCPackage;
class UObject;
#ifdef SIMPLEUGC_UGCRegistry_generated_h
#error "UGCRegistry.generated.h already included, missing '#pragma once' in UGCRegistry.h"
#endif
#define SIMPLEUGC_UGCRegistry_generated_h

#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUGCPackage_Statics; \
	SIMPLEUGC_API static class UScriptStruct* StaticStruct();


template<> SIMPLEUGC_API UScriptStruct* StaticStruct<struct FUGCPackage>();

#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_SPARSE_DATA
#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOverrideForActorClass); \
	DECLARE_FUNCTION(execClearOverrideForClass); \
	DECLARE_FUNCTION(execRegisterOverrideForClass); \
	DECLARE_FUNCTION(execApplyOverridesForActorClass); \
	DECLARE_FUNCTION(execApplyAllOverridesInPackage); \
	DECLARE_FUNCTION(execGetActorClassesWithReplacementActorComponentsInPackage); \
	DECLARE_FUNCTION(execGetMapsInPackage); \
	DECLARE_FUNCTION(execGetAllClassesInPackage); \
	DECLARE_FUNCTION(execFindUGCPackages);


#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOverrideForActorClass); \
	DECLARE_FUNCTION(execClearOverrideForClass); \
	DECLARE_FUNCTION(execRegisterOverrideForClass); \
	DECLARE_FUNCTION(execApplyOverridesForActorClass); \
	DECLARE_FUNCTION(execApplyAllOverridesInPackage); \
	DECLARE_FUNCTION(execGetActorClassesWithReplacementActorComponentsInPackage); \
	DECLARE_FUNCTION(execGetMapsInPackage); \
	DECLARE_FUNCTION(execGetAllClassesInPackage); \
	DECLARE_FUNCTION(execFindUGCPackages);


#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUUGCRegistry(); \
	friend struct Z_Construct_UClass_UUGCRegistry_Statics; \
public: \
	DECLARE_CLASS(UUGCRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), NO_API) \
	DECLARE_SERIALIZER(UUGCRegistry)


#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS \
private: \
	static void StaticRegisterNativesUUGCRegistry(); \
	friend struct Z_Construct_UClass_UUGCRegistry_Statics; \
public: \
	DECLARE_CLASS(UUGCRegistry, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SimpleUGC"), NO_API) \
	DECLARE_SERIALIZER(UUGCRegistry)


#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCRegistry) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCRegistry); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGCRegistry(UUGCRegistry&&); \
	NO_API UUGCRegistry(const UUGCRegistry&); \
public:


#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UUGCRegistry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UUGCRegistry(UUGCRegistry&&); \
	NO_API UUGCRegistry(const UUGCRegistry&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UUGCRegistry); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UUGCRegistry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UUGCRegistry)


#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_PRIVATE_PROPERTY_OFFSET
#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_39_PROLOG
#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_PRIVATE_PROPERTY_OFFSET \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_SPARSE_DATA \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_PRIVATE_PROPERTY_OFFSET \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_SPARSE_DATA \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_INCLASS_NO_PURE_DECLS \
	Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SIMPLEUGC_API UClass* StaticClass<class UUGCRegistry>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Projects_HorrorRoyale_Plugins_SimpleUGC_Source_SimpleUGC_Public_UGCRegistry_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
