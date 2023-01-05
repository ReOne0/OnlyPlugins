// Copyright Epic Games, Inc. All Rights Reserved.

#include "BlueLibBPLibrary.h"
#include "BlueLib.h"
#include "AudioDevice.h"
#include "HAL/PlatformFilemanager.h"
#include "Misc/FileHelper.h"
#include "DataTableUtils.h"

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

bool UBlueLibBPLibrary::FillDataTableFromCSVString(UDataTable* DataTable, const FString& CSVString)
{
	if (!DataTable || (CSVString.Len() == 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("FillDataTableFromCSVString -> Can't fill DataTable with CSVString: %."), *CSVString);
		return false;
	}
	// Call bulit-in function
	TArray<FString> Errors = DataTable->CreateTableFromCSVString(CSVString);
	if (Errors.Num())
	{
		// It has some error message
		for (const FString& Error : Errors)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Error);
		}
		return false;
	}

	return true;
}

bool UBlueLibBPLibrary::FillDataTableFromCSVFile(UDataTable* DataTable, const FString& CSVFilePath)
{
	FString CSVString;
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*CSVFilePath))
	{
		// Supports all combination of ANSI/Unicode files and platforms.
		FFileHelper::LoadFileToString(CSVString, *CSVFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FillDataTableFromCSVFile -> Cannot find CSV file %s"), *CSVFilePath);
		return false;
	}
	return UBlueLibBPLibrary::FillDataTableFromCSVString(DataTable, CSVString);
}

bool UBlueLibBPLibrary::FillDataTableFromJSONString(UDataTable* DataTable, const FString& JSONString)
{
	if (!DataTable || (JSONString.Len() == 0))
	{
		UE_LOG(LogTemp, Warning, TEXT("FillDataTableFromJSONString -> Can't fill DataTable with JSONString: %."), *JSONString);
		return false;
	}
	// Call bulit-in function
	TArray<FString> Errors = DataTable->CreateTableFromJSONString(JSONString);

	if (Errors.Num())
	{
		// It has some error message
		for (const FString& Error : Errors)
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *Error);
		}
		return false;
	}

	return true;
}

bool UBlueLibBPLibrary::FillDataTableFromJSONFile(UDataTable* DataTable, const FString& JSONFilePath)
{
	FString JSONString;
	if (FPlatformFileManager::Get().GetPlatformFile().FileExists(*JSONFilePath))
	{
		// Supports all combination of ANSI/Unicode files and platforms.
		FFileHelper::LoadFileToString(JSONString, *JSONFilePath);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("FillDataTableFromJSONFile -> Cannot find CSV file %s"), *JSONFilePath);
		return false;
	}
	return UBlueLibBPLibrary::FillDataTableFromJSONString(DataTable, JSONString);
}

void UBlueLibBPLibrary::GetDataTableAsCSVString(UDataTable* DataTable, FString& CSVString)
{
	CSVString = FString();

	if (!DataTable || (DataTable->RowStruct == nullptr))
	{
		UE_LOG(LogTemp, Warning, TEXT("UBlueLibBPLibrary::GetTableAsCSV : Missing DataTable or RowStruct !"));
		return;
	}

	// First build array of properties
	TArray<FProperty*> StructProps;
	for (TFieldIterator<FProperty> It(DataTable->RowStruct); It; ++It)
	{
		FProperty* Prop = *It;
		check(Prop != nullptr);
		StructProps.Add(Prop);
	}

	// First row, column titles, taken from properties
	CSVString += TEXT("---");
	for (int32 PropIdx = 0; PropIdx < StructProps.Num(); PropIdx++)
	{
		CSVString += TEXT(",");
		CSVString += StructProps[PropIdx]->GetName();
	}
	CSVString += TEXT("\n");

	// Now iterate over rows
	for (auto RowIt = DataTable->GetRowMap().CreateConstIterator(); RowIt; ++RowIt)
	{
		FName RowName = RowIt.Key();
		CSVString += RowName.ToString();

		uint8* RowData = RowIt.Value();
		for (int32 PropIdx = 0; PropIdx < StructProps.Num(); PropIdx++)
		{
			CSVString += TEXT(",");
			CSVString += DataTableUtils::GetPropertyValueAsString(StructProps[PropIdx], RowData, EDataTableExportFlags::None);
		}
		CSVString += TEXT("\n");
	}
}



void UBlueLibBPLibrary::GetDataTableAsCSVFile(UDataTable* DataTable, const FString& CSVFilePath)
{
	FString CSVString;
	UBlueLibBPLibrary::GetDataTableAsCSVString(DataTable, CSVString);
	if (CSVString.Len() == 0)
	{
		return;
	}
	FFileHelper::SaveStringToFile(CSVString, *CSVFilePath, FFileHelper::EEncodingOptions::ForceUTF8);
}