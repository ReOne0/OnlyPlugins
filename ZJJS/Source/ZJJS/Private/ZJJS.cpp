// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZJJS.h"
#include "ZJJSStyle.h"
#include "ZJJSCommands.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetInternationalizationLibrary.h"
#include "Editor/Blutility/Classes/EditorUtilityWidget.h"
#include "Editor/Blutility/Classes/EditorUtilityWidgetBlueprint.h"

static const FName ZJJSTabName("ZJJS");

#define LOCTEXT_NAMESPACE "FZJJSModule"

void FZJJSModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FZJJSStyle::Initialize();
	FZJJSStyle::ReloadTextures();

	FZJJSCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FZJJSCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FZJJSModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FZJJSModule::RegisterMenus));
}

void FZJJSModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FZJJSStyle::Shutdown();

	FZJJSCommands::Unregister();
}

void FZJJSModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	/*FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FZJJSModule::PluginButtonClicked()")),
							FText::FromString(TEXT("ZJJS.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);*/


	TArray<FString> EditLanguages = UKismetSystemLibrary::GetPreferredLanguages();
	if (EditLanguages[0] == "zh-Hans")
	{
		UKismetInternationalizationLibrary::SetCurrentLanguage("en");
	}
	else
	{
		UKismetInternationalizationLibrary::SetCurrentLanguage("zh-Hans");
	}
	TSharedPtr<SWindow>MainWindow = SNew(SWindow)
		.ClientSize(FVector2D(800, 600))
		[
			SNullWidget::NullWidget
		];
		CreateMens();
	

}

void FZJJSModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FZJJSCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("Settings");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FZJJSCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}


TSharedRef<SWidget> FZJJSModule::CreateMens()
{
	
	TSharedPtr<FUICommandList> Commands = MakeShareable(new FUICommandList);
	FMenuBuilder MenuBuilder(true, Commands);

	UObject* Object = LoadObject<UObject>(nullptr, TEXT("'/Game/WBP_Test.WBP_Test'"));
	if (Object)
	{
		UEditorUtilityWidgetBlueprint* MainWidget = Cast<UEditorUtilityWidgetBlueprint>(Object);
		if (MainWidget)
		{
			UE_LOG(LogTemp, Warning, TEXT("TTTT"));
			MenuBuilder.AddWidget(MainWidget->CreateUtilityWidget(), FText::GetEmpty(), true);
			
		}
		UE_LOG(LogTemp, Warning, TEXT("TTTFF"));
	}
	return MenuBuilder.MakeWidget();
	//EditorUtilityWidgetBlueprint * MainWidget = Cast<EditorUtilityWidgetBlueprint>(LoadMainWidget);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FZJJSModule, ZJJS)