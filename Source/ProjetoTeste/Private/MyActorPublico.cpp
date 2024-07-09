// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActorPublico.h"


// Sets default values
AMyActorPublico::AMyActorPublico()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void AMyActorPublico::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Display, TEXT("OQUEE"));
	
}

// Called every frame
void AMyActorPublico::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

