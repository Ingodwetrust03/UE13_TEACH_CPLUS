// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE13_TEACH_CPLUS : ModuleRules
{
	public UE13_TEACH_CPLUS(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"UE13_TEACH_CPLUS",
			"UE13_TEACH_CPLUS/Variant_Platforming",
			"UE13_TEACH_CPLUS/Variant_Platforming/Animation",
			"UE13_TEACH_CPLUS/Variant_Combat",
			"UE13_TEACH_CPLUS/Variant_Combat/AI",
			"UE13_TEACH_CPLUS/Variant_Combat/Animation",
			"UE13_TEACH_CPLUS/Variant_Combat/Gameplay",
			"UE13_TEACH_CPLUS/Variant_Combat/Interfaces",
			"UE13_TEACH_CPLUS/Variant_Combat/UI",
			"UE13_TEACH_CPLUS/Variant_SideScrolling",
			"UE13_TEACH_CPLUS/Variant_SideScrolling/AI",
			"UE13_TEACH_CPLUS/Variant_SideScrolling/Gameplay",
			"UE13_TEACH_CPLUS/Variant_SideScrolling/Interfaces",
			"UE13_TEACH_CPLUS/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
