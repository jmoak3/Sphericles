// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "Sphericles.h"
#include "SphericlesPawn.h"

ASphericlesPawn::ASphericlesPawn(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{
	// Create camera component 
	Camera = ObjectInitializer.CreateDefaultSubobject<UCameraComponent>(this, TEXT("Camera0"));
	Camera->bUsePawnControlRotation = false;
	Camera->bUseControllerViewRotation = false;
	RootComponent = Camera;
	TurnSpeed = 50.0f;
	Speed = 1000.0f;
}

void ASphericlesPawn::Tick(float DeltaSeconds)
{
	// Call any parent class Tick implementation
	Super::Tick(DeltaSeconds);
}

void ASphericlesPawn::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit)
{
	Super::ReceiveHit(MyComp, Other, OtherComp, bSelfMoved, HitLocation, HitNormal, NormalImpulse, Hit);
}


void ASphericlesPawn::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	check(InputComponent);

	// Bind our control axis' to callback functions
	InputComponent->BindAxis("MoveUp", this, &ASphericlesPawn::MoveUpInput);
	InputComponent->BindAxis("MoveForward", this, &ASphericlesPawn::MoveForwardInput);
	InputComponent->BindAxis("MoveRight", this, &ASphericlesPawn::MoveRightInput);
	InputComponent->BindAxis("LookRight", this, &ASphericlesPawn::RotateYaw);
	InputComponent->BindAxis("LookUp", this, &ASphericlesPawn::RotatePitch);
}

void ASphericlesPawn::MoveUpInput(float Val)
{
	AddActorLocalOffset(FVector(0.f, 0.f, GetWorld()->GetDeltaSeconds()*Speed*Val), true);
}

void ASphericlesPawn::MoveRightInput(float Val)
{
	AddActorLocalOffset(FVector(0.f, GetWorld()->GetDeltaSeconds()*Speed*Val, 0.f), true);
}

void ASphericlesPawn::MoveForwardInput(float Val)
{
	AddActorLocalOffset(FVector(GetWorld()->GetDeltaSeconds()*Speed*Val, 0.f, 0.f), true);
}

void ASphericlesPawn::RotateYaw(float Val)
{
	UE_LOG(LogActor, Warning, TEXT("Val: %f"), Val);
	AddActorWorldRotation(FRotator(0.f, GetWorld()->GetDeltaSeconds()*Val*TurnSpeed, 0.f), true);
}


void ASphericlesPawn::RotatePitch(float Val)
{
	UE_LOG(LogActor, Warning, TEXT("Val: %f"), Val);
	AddActorLocalRotation(FRotator(GetWorld()->GetDeltaSeconds()*Val*TurnSpeed, 0.f, 0.f), true);
}
