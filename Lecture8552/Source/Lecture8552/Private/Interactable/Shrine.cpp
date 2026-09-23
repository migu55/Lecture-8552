// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable/Shrine.h"

#include "Components/PointLightComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"


// Sets default values
AShrine::AShrine()
{
	
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;
	
	ShrineLight = CreateDefaultSubobject<UPointLightComponent>(TEXT("ShrineLight"));
	ShrineLight->SetupAttachment(RootComponent);
	
	ShrineLight->SetVisibility(false);
	bIsActive = false;
}

void AShrine::Activate()
{
	bIsActive = !bIsActive;
	
	ShrineLight->SetVisibility(bIsActive);
	
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.00f, FColor::Green, TEXT("Shrine Activated"));
	}
}

void AShrine::Interact(UPrimitiveComponent* HitComponent)
{
	Activate();
}


