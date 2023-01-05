// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZJJSCommands.h"

#define LOCTEXT_NAMESPACE "FZJJSModule"

void FZJJSCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "ZJJS", "Execute ZJJS action", EUserInterfaceActionType::Button, FInputGesture());
}

#undef LOCTEXT_NAMESPACE
