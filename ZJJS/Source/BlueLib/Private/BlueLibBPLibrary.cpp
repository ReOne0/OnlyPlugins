// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueLibBPLibrary.h"
#include "BlueLib.h"
#include "AudioDevice.h"

UBlueLibBPLibrary::UBlueLibBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

float UBlueLibBPLibrary::BlueLibSampleFunction(float Param)
{
	return -1;
}

void UBlueLibBPLibrary::TestBlueLib()
{
	UE_LOG(LogTemp, Warning, TEXT("BlueLib"));
}


void UBlueLibBPLibrary::SetAudioVolume(const UObject* WorldContextObject, float Volume)
{
	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (ThisWorld)
	{
		if (FAudioDeviceHandle AudioDevice = ThisWorld->GetAudioDevice())
		{
			AudioDevice->SetTransientMasterVolume(Volume);
		}
	}
}

void UBlueLibBPLibrary::StopMyAllSounds(const UObject* WorldContextObject, bool StopUISound/*=true*/)
{
	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	if (ThisWorld)
	{
		if (FAudioDeviceHandle AudioDevice = ThisWorld->GetAudioDevice())
		{
			AudioDevice->StopAllSounds(StopUISound);
		}
	}
}

TArray<AActor*> UBlueLibBPLibrary::GetAllActorOfLevel(const UObject* WorldContextObject, FName PackageName)
{
	UWorld* ThisWorld = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull);
	TArray<AActor*>TargetActorArr;
	//UCoreFuncLib::Test01();
	if (ThisWorld)
	{
		ULevelStreaming* StrLevel = UGameplayStatics::GetStreamingLevel(WorldContextObject, PackageName);
		ULevel* OnlyLevel = StrLevel->GetLoadedLevel();
		if (OnlyLevel)
		{
			return OnlyLevel->Actors;
		}
	}

	return TargetActorArr;

}