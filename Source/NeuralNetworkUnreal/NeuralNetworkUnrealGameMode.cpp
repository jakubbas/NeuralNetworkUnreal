// Copyright Epic Games, Inc. All Rights Reserved.

#include "NeuralNetworkUnrealGameMode.h"
#include "NeuralNetworkUnrealCharacter.h"
#include "UObject/ConstructorHelpers.h"

ANeuralNetworkUnrealGameMode::ANeuralNetworkUnrealGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
