#pragma once

#include "CoreMinimal.h"
#include "HttpModule.h"

class FBlueprintReader : public IModuleInterface
{
public:
    virtual void StartupModule() override;
    virtual void ShutdownModule() override;
    void ReadBlueprint();

private:
    void RegisterMenus();
    void RegisterSettings();
    void UnregisterSettings();
    bool HandleSettingsSaved();
    TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs);
    TSharedPtr<class FUICommandList> PluginCommands;
};

