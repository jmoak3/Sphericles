// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Sphericles.h"
#include "SphericlesGameMode.h"
#include "SphericlesPawn.h"

ASphericlesGameMode::ASphericlesGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = ASphericlesPawn::StaticClass();
}
