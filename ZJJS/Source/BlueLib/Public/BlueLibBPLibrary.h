// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/LevelStreaming.h"
#include "Engine/Level.h"//获取关卡里所有actors
#include "Engine/DataTable.h"//表格
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
UCLASS()
class UBlueLibBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, meta = (DisplayName = "Execute Sample function", Keywords = "BlueLib sample test testing"), Category = "BlueLibTesting")
	static float BlueLibSampleFunction(float Param);

	UFUNCTION(BlueprintCallable/*, meta = (DisplayName = "TestHeHe", Keywords = "BlueLib sample test testing")*/, Category = "BlueLibTesting")
	static void TestBlueLib();

	//Sound|设置声音大小
	UFUNCTION(BlueprintCallable, Category = "ZJJSPlugin|Audio", meta = (WorldContext = "WorldContextObject"))
		static void SetAudioVolume(const UObject* WorldContextObject, float Volume);
	//Sound|关闭所有声音
	UFUNCTION(BlueprintCallable, Category = "ZJJSPlugin|Audio", meta = (WorldContext = "WorldContextObject"))
		static void StopMyAllSounds(const UObject* WorldContextObject, bool StopUISound = true);
	//Level|得到一个关卡里面所有的actors
	UFUNCTION(BlueprintCallable, Category = "ZJJSPlugin|Levels", meta = (WorldContext = "WorldContextObject"))
		static TArray<AActor*>GetAllActorOfLevel(const UObject* WorldContextObject, FName PackageName);
};
