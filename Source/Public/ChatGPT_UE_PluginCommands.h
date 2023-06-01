#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "ChatGPT_UE_PluginStyle.h"

class FChatGPT_UE_PluginCommands : public TCommands<FChatGPT_UE_PluginCommands>
{
public:

    FChatGPT_UE_PluginCommands()
        : TCommands<FChatGPT_UE_PluginCommands>(TEXT("ChatGPT_UE_Plugin"), NSLOCTEXT("Contexts", "ChatGPT_UE_Plugin", "ChatGPT_UE_Plugin Plugin"), NAME_None, FChatGPT_UE_PluginStyle::GetStyleSetName())
    {
    }

    // TCommands<> interface
    virtual void RegisterCommands() override;

public:
    TSharedPtr< FUICommandInfo > MyCommand1;
    TSharedPtr< FUICommandInfo > MyCommand2;
    // Add more commands as needed
};

