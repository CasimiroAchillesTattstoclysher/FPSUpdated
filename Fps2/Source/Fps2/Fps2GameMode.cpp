// Copyright Epic Games, Inc. All Rights Reserved.

#include "Fps2GameMode.h"
#include "Fps2HUD.h"
#include "Fps2Character.h"
#include "UObject/ConstructorHelpers.h"

AFps2GameMode::AFps2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AFps2HUD::StaticClass();
}
