// Copyright Epic Games, Inc. All Rights Reserved.

#include "S001_TestingGroundsGameMode.h"
#include "S001_TestingGroundsHUD.h"
#include "S001_TestingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS001_TestingGroundsGameMode::AS001_TestingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS001_TestingGroundsHUD::StaticClass();
}
