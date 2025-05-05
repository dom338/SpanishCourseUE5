// Copyright Epic Games, Inc. All Rights Reserved.

#include "SpanishCourseUE5GameMode.h"
#include "SpanishCourseUE5Character.h"
#include "UObject/ConstructorHelpers.h"

ASpanishCourseUE5GameMode::ASpanishCourseUE5GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
