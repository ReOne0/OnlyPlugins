// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
class UObject;
class AActor;
#ifdef BLUELIB_BlueLibBPLibrary_generated_h
#error "BlueLibBPLibrary.generated.h already included, missing '#pragma once' in BlueLibBPLibrary.h"
#endif
#define BLUELIB_BlueLibBPLibrary_generated_h

#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSDataTable_Statics; \
	BLUELIB_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> BLUELIB_API UScriptStruct* StaticStruct<struct FSDataTable>();

#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_SPARSE_DATA
#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetDataTableAsCSVFile); \
	DECLARE_FUNCTION(execGetDataTableAsCSVString); \
	DECLARE_FUNCTION(execFillDataTableFromJSONFile); \
	DECLARE_FUNCTION(execFillDataTableFromJSONString); \
	DECLARE_FUNCTION(execFillDataTableFromCSVFile); \
	DECLARE_FUNCTION(execFillDataTableFromCSVString); \
	DECLARE_FUNCTION(execGetAllActorOfLevel); \
	DECLARE_FUNCTION(execStopMyAllSounds); \
	DECLARE_FUNCTION(execSetAudioVolume); \
	DECLARE_FUNCTION(execTestBlueLib); \
	DECLARE_FUNCTION(execBlueLibSampleFunction);


#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetDataTableAsCSVFile); \
	DECLARE_FUNCTION(execGetDataTableAsCSVString); \
	DECLARE_FUNCTION(execFillDataTableFromJSONFile); \
	DECLARE_FUNCTION(execFillDataTableFromJSONString); \
	DECLARE_FUNCTION(execFillDataTableFromCSVFile); \
	DECLARE_FUNCTION(execFillDataTableFromCSVString); \
	DECLARE_FUNCTION(execGetAllActorOfLevel); \
	DECLARE_FUNCTION(execStopMyAllSounds); \
	DECLARE_FUNCTION(execSetAudioVolume); \
	DECLARE_FUNCTION(execTestBlueLib); \
	DECLARE_FUNCTION(execBlueLibSampleFunction);


#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlueLibBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueLibBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueLibBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueLib"), NO_API) \
	DECLARE_SERIALIZER(UBlueLibBPLibrary)


#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_INCLASS \
private: \
	static void StaticRegisterNativesUBlueLibBPLibrary(); \
	friend struct Z_Construct_UClass_UBlueLibBPLibrary_Statics; \
public: \
	DECLARE_CLASS(UBlueLibBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/BlueLib"), NO_API) \
	DECLARE_SERIALIZER(UBlueLibBPLibrary)


#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueLibBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueLibBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueLibBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueLibBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueLibBPLibrary(UBlueLibBPLibrary&&); \
	NO_API UBlueLibBPLibrary(const UBlueLibBPLibrary&); \
public:


#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlueLibBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlueLibBPLibrary(UBlueLibBPLibrary&&); \
	NO_API UBlueLibBPLibrary(const UBlueLibBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlueLibBPLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlueLibBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlueLibBPLibrary)


#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_PRIVATE_PROPERTY_OFFSET
#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_59_PROLOG
#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_PRIVATE_PROPERTY_OFFSET \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_SPARSE_DATA \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_RPC_WRAPPERS \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_INCLASS \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_PRIVATE_PROPERTY_OFFSET \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_SPARSE_DATA \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_RPC_WRAPPERS_NO_PURE_DECLS \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_INCLASS_NO_PURE_DECLS \
	CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h_62_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class BlueLibBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BLUELIB_API UClass* StaticClass<class UBlueLibBPLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CorePlugins_Plugins_ZJJS_Source_BlueLib_Public_BlueLibBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
