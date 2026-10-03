// Fill out your copyright notice in the Description page of Project Settings.


#include "Environment/OverlapZone.h"

#include "Components/BoxComponent.h"
#include "Engine/Engine.h"


// Sets default values
AOverlapZone::AOverlapZone()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	OverlapComp = CreateDefaultSubobject<UBoxComponent>(FName("OverlapComp"));
	RootComponent = OverlapComp;
}



// Called when the game starts or when spawned
void AOverlapZone::BeginPlay()
{
	Super::BeginPlay();
	
	OverlapComp->OnComponentBeginOverlap.AddDynamic(this, &AOverlapZone::OnOverlapBegin);
	OverlapComp->OnComponentEndOverlap.AddDynamic(this, &AOverlapZone::OnOverlapEnd);
	
}

void AOverlapZone::OnOverlapBegin_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	//overridden in child classes
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.00f, FColor::Green, TEXT("Overlap Begins"));
	}
}

void AOverlapZone::OnOverlapEnd_Implementation(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex)
{
	//overridden in child classes
}



