// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable/Lever.h"

#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"


// Sets default values
ALever::ALever()
{
	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;

}

void ALever::Flip()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Cyan, TEXT("FLIP"));
	}
}

void ALever::Interact(UPrimitiveComponent* HitComponent)
{
	Flip();
}



