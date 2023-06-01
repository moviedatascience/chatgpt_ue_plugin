#pragma once

#include "CoreMinimal.h"
#include "BlueprintModifier.generated.h"

UCLASS()
class CHATGPT_UE_PLUGIN_API UBlueprintModifier : public UObject
{
    GENERATED_BODY()

public:
    // Function for receiving a Blueprint from the Unreal Engine plugin
    void ReceiveBlueprint(FString Blueprint);

    // Function for sending a modified Blueprint back to the Unreal Engine plugin
    FString SendModifiedBlueprint();

    // Functions for performing various modifications on a Blueprint
    void ModifyBlueprint(FString Modification);
};
