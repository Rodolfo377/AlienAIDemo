// Copyright Epic Games, Inc. All Rights Reserved.

#include "AlienAIDemoGameMode.h"
#include "AlienAIDemoHUD.h"
#include "AlienAIDemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAlienAIDemoGameMode::AAlienAIDemoGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AAlienAIDemoHUD::StaticClass();
}
