// Copyright Epic Games, Inc. All Rights Reserved.

#include "Free_Fall_Demp2GameMode.h"
#include "Free_Fall_Demp2Character.h"
#include "UObject/ConstructorHelpers.h"

AFree_Fall_Demp2GameMode::AFree_Fall_Demp2GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
