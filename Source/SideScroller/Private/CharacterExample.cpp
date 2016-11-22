// Fill out your copyright notice in the Description page of Project Settings.

#include "SideScroller.h"
#include "CharacterExample.h"


// Sets default values
ACharacterExample::ACharacterExample()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACharacterExample::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACharacterExample::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

// Called to bind functionality to input
void ACharacterExample::SetupPlayerInputComponent(class UInputComponent* InputComponent)
{
	Super::SetupPlayerInputComponent(InputComponent);

}

