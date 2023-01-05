// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ZJJSStyle.h"

class FZJJSCommands : public TCommands<FZJJSCommands>
{
public:

	FZJJSCommands()
		: TCommands<FZJJSCommands>(TEXT("ZJJS"), NSLOCTEXT("Contexts", "ZJJS", "ZJJS Plugin"), NAME_None, FZJJSStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
