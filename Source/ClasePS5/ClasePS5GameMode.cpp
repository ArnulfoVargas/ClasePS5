// Copyright Epic Games, Inc. All Rights Reserved.

#include "ClasePS5GameMode.h"
#include "ClasePS5Character.h"
#include "UObject/ConstructorHelpers.h"

AClasePS5GameMode::AClasePS5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
