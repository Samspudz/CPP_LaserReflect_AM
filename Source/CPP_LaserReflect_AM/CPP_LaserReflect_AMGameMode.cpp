// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_LaserReflect_AMGameMode.h"
#include "CPP_LaserReflect_AMCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACPP_LaserReflect_AMGameMode::ACPP_LaserReflect_AMGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
