// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable/Safe.h"

#include "Components/InventoryComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"


// Sets default values
ASafe::ASafe()
{
	BaseMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;
	
	LootMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Loot"));
	LootMesh->SetupAttachment(RootComponent);
}

void ASafe::Open()
{
	if (BaseMesh)
	{
		BaseMesh->Play(false);
	}
	
	BaseMesh->SetCollisionResponseToChannel(ECC_Visibility, ECR_Ignore);
}



void ASafe::Interact(AActor* Interactor, UPrimitiveComponent* HitComponent)
{
	if (HitComponent == LootMesh)
	{
		CollectLoot();
		
		if (UInventoryComponent* PlayerInv = Interactor->FindComponentByClass<UInventoryComponent>())
		{
			UE_LOG(LogTemp, Warning, TEXT("Add item from safe"));
			PlayerInv->AddItem(LootItem);
			
		}
	} else
	{
		Open();
	}
}

void ASafe::CollectLoot()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("Collected Loot"));
	}
	
	LootMesh->DestroyComponent();
	LootMesh = nullptr;
}


