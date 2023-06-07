# chatgpt_ue_plugin

NOTE: This is a test of taking ChatGPT and having it create an Unreal Engine plugin. If you come across this repo it's most likely un-usable trash. I'm just testing to see what I get from prompts to ChatGPT.

Project Structure:
```
ChatGPT_UE_Plugin
│
├── Source
│   │
│   └── ChatGPT_UE_Plugin
│       │
│       ├── Public
│       │   ├── ChatGPT_UE_Plugin.h
│       │   ├── BlueprintReader.h
│       │   ├── BlueprintModifier.h
│       │   ├── ChatGPT_UE_PluginCommands.h
│       │   ├── ChatGPT_UE_PluginSettings.h
│       │   └── Api.h
│       │
│       ├── Private
│       │   ├── ChatGPT_UE_Plugin.cpp
│       │   ├── BlueprintReader.cpp
│       │   ├── BlueprintModifier.cpp
│       │   ├── ChatGPT_UE_PluginCommands.cpp
│       │   ├── ChatGPT_UE_PluginSettings.cpp
│       │   ├── Api.cpp
│       │   └── Log.cpp
│       │
│       └── Tests
│           ├── BlueprintReaderTest.cpp
│           ├── BlueprintModifierTest.cpp
│           └── ApiTest.cpp
│
└── Resources
    └── ChatGPT_UE_PluginStyle.png
```
## For BlueprintUe.h 
Here's a brief explanation of what this code does:

class FBlueprintReader : public IModuleInterface: This declares a new class FBlueprintReader that inherits from IModuleInterface. The IModuleInterface class is a base class for Unreal Engine modules.

   void ReadBlueprint(): This declares a function that will be used to read Blueprints from the Unreal Engine project.

   void RegisterMenus(), void RegisterSettings(), void UnregisterSettings(), bool HandleSettingsSaved(): These functions are used to manage the plugin's settings and menus. They are similar to the corresponding functions in the BlueprintUe.h file.

   TSharedRef<class SDockTab> OnSpawnPluginTab(const class FSpawnTabArgs& SpawnTabArgs): This function is used to create a new tab in Unreal Engine's editor when the plugin is activated.

   TSharedPtr<class FUICommandList> PluginCommands: This data member is used to store the plugin's commands. These commands can be used to interact with the plugin in Unreal Engine's editor.

Please note that this is a basic design and might need to be adjusted based on your specific needs and the actual implementation of the BlueprintReader class.

## For BlueprintModifier.h

The BlueprintModifier.h file should declare a class BlueprintModifier that provides functions for modifying Blueprints. This class should have a function for receiving a Blueprint from the Unreal Engine plugin, a function for sending a modified Blueprint back to the Unreal Engine plugin, and functions for performing various modifications on a Blueprint.

This is a very basic starting point for your BlueprintModifier.h file. As you develop your plugin, you would likely need to add more code to this file to implement the specific modifications that you want to perform on Blueprints.

## For Commands.h
The Commands.h file is typically used to define commands that can be executed in the Unreal Editor, such as commands to open a plugin's UI or to perform a specific action. These commands are usually implemented using Unreal's TCommands class.

In this template:

    FChatGPT_UE_PluginCommands is the class that defines your plugin's commands. It inherits from TCommands<FChatGPT_UE_PluginCommands>, which is a template class for creating command sets in Unreal.

    RegisterCommands() is a function that you'll need to implement in your ChatGPT_UE_PluginCommands.cpp file. This function should register each command with the Unreal Editor.

    MyCommand1 and MyCommand2 are example commands. You should replace these with the actual commands for your plugin.
