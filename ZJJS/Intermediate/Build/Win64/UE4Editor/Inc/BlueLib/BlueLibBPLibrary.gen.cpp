// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueLib/Public/BlueLibBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueLibBPLibrary() {}
// Cross Module References
	BLUELIB_API UScriptStruct* Z_Construct_UScriptStruct_FSDataTable();
	UPackage* Z_Construct_UPackage__Script_BlueLib();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	BLUELIB_API UClass* Z_Construct_UClass_UBlueLibBPLibrary_NoRegister();
	BLUELIB_API UClass* Z_Construct_UClass_UBlueLibBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FSDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FSDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

class UScriptStruct* FSDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BLUELIB_API uint32 Get_Z_Construct_UScriptStruct_FSDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSDataTable, Z_Construct_UPackage__Script_BlueLib(), TEXT("SDataTable"), sizeof(FSDataTable), Get_Z_Construct_UScriptStruct_FSDataTable_Hash());
	}
	return Singleton;
}
template<> BLUELIB_API UScriptStruct* StaticStruct<FSDataTable>()
{
	return FSDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSDataTable(FSDataTable::StaticStruct, TEXT("/Script/BlueLib"), TEXT("SDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_BlueLib_StaticRegisterNativesFSDataTable
{
	FScriptStruct_BlueLib_StaticRegisterNativesFSDataTable()
	{
		UScriptStruct::DeferCppStructOps<FSDataTable>(FName(TEXT("SDataTable")));
	}
} ScriptStruct_BlueLib_StaticRegisterNativesFSDataTable;
	struct Z_Construct_UScriptStruct_FSDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IntegerValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IntegerValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FloatValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StingValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_StingValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TransformValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TransformValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ArrayValue_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayValue;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SetValue_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SetValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_SetValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapValue_ValueProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MapValue_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MapValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_IntegerValue_MetaData[] = {
		{ "Category", "SDataTable" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_IntegerValue = { "IntegerValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDataTable, IntegerValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_IntegerValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_IntegerValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_FloatValue_MetaData[] = {
		{ "Category", "SDataTable" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDataTable, FloatValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_FloatValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_FloatValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_StingValue_MetaData[] = {
		{ "Category", "SDataTable" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_StingValue = { "StingValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDataTable, StingValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_StingValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_StingValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_TransformValue_MetaData[] = {
		{ "Category", "SDataTable" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_TransformValue = { "TransformValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDataTable, TransformValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_TransformValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_TransformValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_ArrayValue_Inner = { "ArrayValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_ArrayValue_MetaData[] = {
		{ "Category", "SDataTable" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_ArrayValue = { "ArrayValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDataTable, ArrayValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_ArrayValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_ArrayValue_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_SetValue_ElementProp = { "SetValue", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_SetValue_MetaData[] = {
		{ "Category", "SDataTable" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_SetValue = { "SetValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDataTable, SetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_SetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_SetValue_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue_ValueProp = { "MapValue", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue_Key_KeyProp = { "MapValue_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue_MetaData[] = {
		{ "Category", "SDataTable" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue = { "MapValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSDataTable, MapValue), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_IntegerValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_FloatValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_StingValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_TransformValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_ArrayValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_ArrayValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_SetValue_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_SetValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSDataTable_Statics::NewProp_MapValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_BlueLib,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"SDataTable",
		sizeof(FSDataTable),
		alignof(FSDataTable),
		Z_Construct_UScriptStruct_FSDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_BlueLib();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SDataTable"), sizeof(FSDataTable), Get_Z_Construct_UScriptStruct_FSDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSDataTable_Hash() { return 1724870532U; }
	DEFINE_FUNCTION(UBlueLibBPLibrary::execGetDataTableAsCSVFile)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param_CSVFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueLibBPLibrary::GetDataTableAsCSVFile(Z_Param_DataTable,Z_Param_CSVFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execGetDataTableAsCSVString)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_CSVString);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueLibBPLibrary::GetDataTableAsCSVString(Z_Param_DataTable,Z_Param_Out_CSVString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execFillDataTableFromJSONFile)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueLibBPLibrary::FillDataTableFromJSONFile(Z_Param_DataTable,Z_Param_JSONFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execFillDataTableFromJSONString)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param_JSONString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueLibBPLibrary::FillDataTableFromJSONString(Z_Param_DataTable,Z_Param_JSONString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execFillDataTableFromCSVFile)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param_CSVFilePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueLibBPLibrary::FillDataTableFromCSVFile(Z_Param_DataTable,Z_Param_CSVFilePath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execFillDataTableFromCSVString)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FStrProperty,Z_Param_CSVString);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBlueLibBPLibrary::FillDataTableFromCSVString(Z_Param_DataTable,Z_Param_CSVString);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execGetAllActorOfLevel)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<AActor*>*)Z_Param__Result=UBlueLibBPLibrary::GetAllActorOfLevel(Z_Param_WorldContextObject,Z_Param_PackageName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execStopMyAllSounds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_StopUISound);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueLibBPLibrary::StopMyAllSounds(Z_Param_WorldContextObject,Z_Param_StopUISound);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execSetAudioVolume)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Volume);
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueLibBPLibrary::SetAudioVolume(Z_Param_WorldContextObject,Z_Param_Volume);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execTestBlueLib)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBlueLibBPLibrary::TestBlueLib();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBlueLibBPLibrary::execBlueLibSampleFunction)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UBlueLibBPLibrary::BlueLibSampleFunction(Z_Param_Param);
		P_NATIVE_END;
	}
	void UBlueLibBPLibrary::StaticRegisterNativesUBlueLibBPLibrary()
	{
		UClass* Class = UBlueLibBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BlueLibSampleFunction", &UBlueLibBPLibrary::execBlueLibSampleFunction },
			{ "FillDataTableFromCSVFile", &UBlueLibBPLibrary::execFillDataTableFromCSVFile },
			{ "FillDataTableFromCSVString", &UBlueLibBPLibrary::execFillDataTableFromCSVString },
			{ "FillDataTableFromJSONFile", &UBlueLibBPLibrary::execFillDataTableFromJSONFile },
			{ "FillDataTableFromJSONString", &UBlueLibBPLibrary::execFillDataTableFromJSONString },
			{ "GetAllActorOfLevel", &UBlueLibBPLibrary::execGetAllActorOfLevel },
			{ "GetDataTableAsCSVFile", &UBlueLibBPLibrary::execGetDataTableAsCSVFile },
			{ "GetDataTableAsCSVString", &UBlueLibBPLibrary::execGetDataTableAsCSVString },
			{ "SetAudioVolume", &UBlueLibBPLibrary::execSetAudioVolume },
			{ "StopMyAllSounds", &UBlueLibBPLibrary::execStopMyAllSounds },
			{ "TestBlueLib", &UBlueLibBPLibrary::execTestBlueLib },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics
	{
		struct BlueLibBPLibrary_eventBlueLibSampleFunction_Parms
		{
			float Param;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventBlueLibSampleFunction_Parms, Param), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventBlueLibSampleFunction_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::NewProp_Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueLibTesting" },
		{ "DisplayName", "Execute Sample function" },
		{ "Keywords", "BlueLib sample test testing" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "BlueLibSampleFunction", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventBlueLibSampleFunction_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics
	{
		struct BlueLibBPLibrary_eventFillDataTableFromCSVFile_Parms
		{
			UDataTable* DataTable;
			FString CSVFilePath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CSVFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventFillDataTableFromCSVFile_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_CSVFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_CSVFilePath = { "CSVFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventFillDataTableFromCSVFile_Parms, CSVFilePath), METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_CSVFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_CSVFilePath_MetaData)) };
	void Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueLibBPLibrary_eventFillDataTableFromCSVFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueLibBPLibrary_eventFillDataTableFromCSVFile_Parms), &Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_CSVFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/**\n\x09* Empty and fill a Data Table from CSV file.\n\x09* @param\x09""CSVFilePath\x09The file path of the CSV file.\n\x09* @return\x09True if the operation succeeds, check the log for errors if it didn't succeed.\n\x09*/" },
		{ "DisplayName", "Fill Data Table from CSV File" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Empty and fill a Data Table from CSV file.\n@param        CSVFilePath     The file path of the CSV file.\n@return       True if the operation succeeds, check the log for errors if it didn't succeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "FillDataTableFromCSVFile", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventFillDataTableFromCSVFile_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics
	{
		struct BlueLibBPLibrary_eventFillDataTableFromCSVString_Parms
		{
			UDataTable* DataTable;
			FString CSVString;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CSVString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventFillDataTableFromCSVString_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_CSVString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_CSVString = { "CSVString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventFillDataTableFromCSVString_Parms, CSVString), METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_CSVString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_CSVString_MetaData)) };
	void Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueLibBPLibrary_eventFillDataTableFromCSVString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueLibBPLibrary_eventFillDataTableFromCSVString_Parms), &Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_CSVString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/**\n\x09* Empty and fill a Data Table from CSV string.\n\x09* @param\x09""CSVString\x09The Data that representing the contents of a CSV file.\n\x09* @return\x09True if the operation succeeds, check the log for errors if it didn't succeed.\n\x09*/" },
		{ "DisplayName", "Fill Data Table from CSV String" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Empty and fill a Data Table from CSV string.\n@param        CSVString       The Data that representing the contents of a CSV file.\n@return       True if the operation succeeds, check the log for errors if it didn't succeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "FillDataTableFromCSVString", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventFillDataTableFromCSVString_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics
	{
		struct BlueLibBPLibrary_eventFillDataTableFromJSONFile_Parms
		{
			UDataTable* DataTable;
			FString JSONFilePath;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JSONFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSONFilePath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventFillDataTableFromJSONFile_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_JSONFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_JSONFilePath = { "JSONFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventFillDataTableFromJSONFile_Parms, JSONFilePath), METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_JSONFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_JSONFilePath_MetaData)) };
	void Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueLibBPLibrary_eventFillDataTableFromJSONFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueLibBPLibrary_eventFillDataTableFromJSONFile_Parms), &Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_JSONFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/**\n\x09* Empty and fill a Data Table from JSON file.\n\x09* @param\x09JSONFilePath\x09The file path of the JSON file.\n\x09* @return\x09True if the operation succeeds, check the log for errors if it didn't succeed.\n\x09*/" },
		{ "DisplayName", "Fill Data Table from JSON File" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Empty and fill a Data Table from JSON file.\n@param        JSONFilePath    The file path of the JSON file.\n@return       True if the operation succeeds, check the log for errors if it didn't succeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "FillDataTableFromJSONFile", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventFillDataTableFromJSONFile_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics
	{
		struct BlueLibBPLibrary_eventFillDataTableFromJSONString_Parms
		{
			UDataTable* DataTable;
			FString JSONString;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JSONString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_JSONString;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventFillDataTableFromJSONString_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_JSONString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_JSONString = { "JSONString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventFillDataTableFromJSONString_Parms, JSONString), METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_JSONString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_JSONString_MetaData)) };
	void Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BlueLibBPLibrary_eventFillDataTableFromJSONString_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueLibBPLibrary_eventFillDataTableFromJSONString_Parms), &Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_JSONString,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/**\n\x09* Empty and fill a Data Table from JSON string.\n\x09* @param\x09JSONString\x09The Data that representing the contents of a JSON file.\n\x09* @return\x09True if the operation succeeds, check the log for errors if it didn't succeed.\n\x09*/" },
		{ "DisplayName", "Fill Data Table from JSON String" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Empty and fill a Data Table from JSON string.\n@param        JSONString      The Data that representing the contents of a JSON file.\n@return       True if the operation succeeds, check the log for errors if it didn't succeed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "FillDataTableFromJSONString", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventFillDataTableFromJSONString_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics
	{
		struct BlueLibBPLibrary_eventGetAllActorOfLevel_Parms
		{
			const UObject* WorldContextObject;
			FName PackageName;
			TArray<AActor*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventGetAllActorOfLevel_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventGetAllActorOfLevel_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventGetAllActorOfLevel_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_PackageName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZJJSPlugin|Levels" },
		{ "Comment", "//Level|GetAllActorOfLevel\n" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Level|GetAllActorOfLevel" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "GetAllActorOfLevel", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventGetAllActorOfLevel_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics
	{
		struct BlueLibBPLibrary_eventGetDataTableAsCSVFile_Parms
		{
			UDataTable* DataTable;
			FString CSVFilePath;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CSVFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVFilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventGetDataTableAsCSVFile_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::NewProp_CSVFilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::NewProp_CSVFilePath = { "CSVFilePath", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventGetDataTableAsCSVFile_Parms, CSVFilePath), METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::NewProp_CSVFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::NewProp_CSVFilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::NewProp_CSVFilePath,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/** Output entire contents of table as CSV File */" },
		{ "DisplayName", "Get Table As CSV File" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Output entire contents of table as CSV File" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "GetDataTableAsCSVFile", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventGetDataTableAsCSVFile_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics
	{
		struct BlueLibBPLibrary_eventGetDataTableAsCSVString_Parms
		{
			UDataTable* DataTable;
			FString CSVString;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CSVString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventGetDataTableAsCSVString_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::NewProp_CSVString = { "CSVString", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventGetDataTableAsCSVString_Parms, CSVString), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::NewProp_DataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::NewProp_CSVString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTable" },
		{ "Comment", "/** Output entire contents of table as CSV string */" },
		{ "DisplayName", "Get Table As CSV String" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Output entire contents of table as CSV string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "GetDataTableAsCSVString", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventGetDataTableAsCSVString_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics
	{
		struct BlueLibBPLibrary_eventSetAudioVolume_Parms
		{
			const UObject* WorldContextObject;
			float Volume;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Volume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventSetAudioVolume_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventSetAudioVolume_Parms, Volume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::NewProp_Volume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZJJSPlugin|Audio" },
		{ "Comment", "//Sound|\n" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Sound|" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "SetAudioVolume", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventSetAudioVolume_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics
	{
		struct BlueLibBPLibrary_eventStopMyAllSounds_Parms
		{
			const UObject* WorldContextObject;
			bool StopUISound;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_StopUISound_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopUISound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BlueLibBPLibrary_eventStopMyAllSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_WorldContextObject_MetaData)) };
	void Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_StopUISound_SetBit(void* Obj)
	{
		((BlueLibBPLibrary_eventStopMyAllSounds_Parms*)Obj)->StopUISound = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_StopUISound = { "StopUISound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BlueLibBPLibrary_eventStopMyAllSounds_Parms), &Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_StopUISound_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::NewProp_StopUISound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "ZJJSPlugin|Audio" },
		{ "Comment", "//Sound|\n" },
		{ "CPP_Default_StopUISound", "true" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Sound|" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "StopMyAllSounds", nullptr, nullptr, sizeof(BlueLibBPLibrary_eventStopMyAllSounds_Parms), Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib_Statics::Function_MetaDataParams[] = {
		{ "Category", "BlueLibTesting" },
		{ "Comment", "/*, meta = (DisplayName = \"TestHeHe\", Keywords = \"BlueLib sample test testing\")*/" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", ", meta = (DisplayName = \"TestHeHe\", Keywords = \"BlueLib sample test testing\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlueLibBPLibrary, nullptr, "TestBlueLib", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBlueLibBPLibrary_NoRegister()
	{
		return UBlueLibBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueLibBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueLibBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueLib,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBlueLibBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_BlueLibSampleFunction, "BlueLibSampleFunction" }, // 305475511
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVFile, "FillDataTableFromCSVFile" }, // 228782750
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromCSVString, "FillDataTableFromCSVString" }, // 3628257226
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONFile, "FillDataTableFromJSONFile" }, // 282976230
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_FillDataTableFromJSONString, "FillDataTableFromJSONString" }, // 1202001110
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel, "GetAllActorOfLevel" }, // 1308126983
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVFile, "GetDataTableAsCSVFile" }, // 3837525076
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_GetDataTableAsCSVString, "GetDataTableAsCSVString" }, // 2442714986
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume, "SetAudioVolume" }, // 541165655
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds, "StopMyAllSounds" }, // 867859194
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib, "TestBlueLib" }, // 1169218077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueLibBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlueLibBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueLibBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueLibBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlueLibBPLibrary_Statics::ClassParams = {
		&UBlueLibBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueLibBPLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueLibBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueLibBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlueLibBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlueLibBPLibrary, 2817973022);
	template<> BLUELIB_API UClass* StaticClass<UBlueLibBPLibrary>()
	{
		return UBlueLibBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlueLibBPLibrary(Z_Construct_UClass_UBlueLibBPLibrary, &UBlueLibBPLibrary::StaticClass, TEXT("/Script/BlueLib"), TEXT("UBlueLibBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueLibBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
