// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LevelStreaming.h"
#include "Engine/Level.h"//
#include "Engine/DataTable.h"//
#include "BlueLibBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/

USTRUCT(BlueprintType)
struct FSDataTable : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDataTable")
		int32 IntegerValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDataTable")
		float FloatValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDataTable")
		FString StingValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDataTable")
		FTransform TransformValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDataTable")
		TArray<int32> ArrayValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDataTable")
		TSet<int32> SetValue;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "SDataTable")
		TMap<int32, FString> MapValue;
};


UCLASS()
class UBlueLibBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "BlueLib sample test testing"), Category = "BlueLibTesting")
	static float BlueLibSampleFunction(float Param);

	UFUNCTION(BlueprintCallable/*, meta = (DisplayName = "TestHeHe", Keywords = "BlueLib sample test testing")*/, Category = "BlueLibTesting")
	static void TestBlueLib();

	//Sound|
	UFUNCTION(BlueprintCallable, Category = "ZJJSPlugin|Audio", meta = (WorldContext = "WorldContextObject"))
		static void SetAudioVolume(const UObject* WorldContextObject, float Volume);
	//Sound|
	UFUNCTION(BlueprintCallable, Category = "ZJJSPlugin|Audio", meta = (WorldContext = "WorldContextObject"))
		static void StopMyAllSounds(const UObject* WorldContextObject, bool StopUISound = true);
	//Level|GetAllActorOfLevel
	UFUNCTION(BlueprintCallable, Category = "ZJJSPlugin|Levels", meta = (WorldContext = "WorldContextObject"))
		static TArray<AActor*>GetAllActorOfLevel(const UObject* WorldContextObject, FName PackageName);

	/**
	* Empty and fill a Data Table from CSV string.
	* @param	CSVString	The Data that representing the contents of a CSV file.
	* @return	True if the operation succeeds, check the log for errors if it didn't succeed.
	*/
	UFUNCTION(BlueprintCallable, DisplayName = "Fill Data Table from CSV String", Category = "DataTable")
	static bool FillDataTableFromCSVString(UDataTable* DataTable, const FString& CSVString);

/**
	* Empty and fill a Data Table from CSV file.
	* @param	CSVFilePath	The file path of the CSV file.
	* @return	True if the operation succeeds, check the log for errors if it didn't succeed.
	*/
	UFUNCTION(BlueprintCallable, DisplayName = "Fill Data Table from CSV File", Category = "DataTable")
	static bool FillDataTableFromCSVFile(UDataTable* DataTable, const FString& CSVFilePath);

/**
	* Empty and fill a Data Table from JSON string.
	* @param	JSONString	The Data that representing the contents of a JSON file.
	* @return	True if the operation succeeds, check the log for errors if it didn't succeed.
	*/
	UFUNCTION(BlueprintCallable, DisplayName = "Fill Data Table from JSON String", Category = "DataTable")
	static bool FillDataTableFromJSONString(UDataTable* DataTable, const FString& JSONString);

/**
	* Empty and fill a Data Table from JSON file.
	* @param	JSONFilePath	The file path of the JSON file.
	* @return	True if the operation succeeds, check the log for errors if it didn't succeed.
	*/
	UFUNCTION(BlueprintCallable, DisplayName = "Fill Data Table from JSON File", Category = "DataTable")
	static bool FillDataTableFromJSONFile(UDataTable* DataTable, const FString& JSONFilePath);

/** Output entire contents of table as CSV string */
	UFUNCTION(BlueprintCallable, DisplayName = "Get Table As CSV String", Category = "DataTable")
	static void GetDataTableAsCSVString(UDataTable* DataTable, FString& CSVString);

/** Output entire contents of table as CSV File */
	UFUNCTION(BlueprintCallable, DisplayName = "Get Table As CSV File", Category = "DataTable")
	static void GetDataTableAsCSVFile(UDataTable* DataTable, const FString& CSVFilePath);


};
