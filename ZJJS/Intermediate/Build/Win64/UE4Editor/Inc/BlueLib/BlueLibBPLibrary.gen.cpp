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
	BLUELIB_API UClass* Z_Construct_UClass_UBlueLibBPLibrary_NoRegister();
	BLUELIB_API UClass* Z_Construct_UClass_UBlueLibBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BlueLib();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
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
			{ "GetAllActorOfLevel", &UBlueLibBPLibrary::execGetAllActorOfLevel },
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
		{ "Comment", "//Level|?\xc3\xb5?\xd2\xbb???\xd8\xbf????????\xd0\xb5?actors\n" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Level|?\xc3\xb5?\xd2\xbb???\xd8\xbf????????\xd0\xb5?actors" },
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
		{ "Comment", "//Sound|??????????\xd0\xa1\n" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Sound|??????????\xd0\xa1" },
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
		{ "Comment", "//Sound|?\xd8\xb1?????????\n" },
		{ "CPP_Default_StopUISound", "true" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "Sound|?\xd8\xb1?????????" },
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
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_GetAllActorOfLevel, "GetAllActorOfLevel" }, // 1518357538
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_SetAudioVolume, "SetAudioVolume" }, // 2265724435
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_StopMyAllSounds, "StopMyAllSounds" }, // 527162486
		{ &Z_Construct_UFunction_UBlueLibBPLibrary_TestBlueLib, "TestBlueLib" }, // 1169218077
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueLibBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* \n*\x09""Function library class.\n*\x09""Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*\x09When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*\x09""BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*\x09""BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*\x09""DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*\x09\x09\x09\x09Its lets you name the node using characters not allowed in C++ function names.\n*\x09""CompactNodeTitle - the word(s) that appear on the node.\n*\x09Keywords -\x09the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. \n*\x09\x09\x09\x09Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*\x09""Category -\x09the category your node will be under in the Blueprint drop-down menu.\n*\n*\x09""For more info on custom blueprint nodes visit documentation:\n*\x09https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation\n*/" },
		{ "IncludePath", "BlueLibBPLibrary.h" },
		{ "ModuleRelativePath", "Public/BlueLibBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
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
	IMPLEMENT_CLASS(UBlueLibBPLibrary, 1611741213);
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
