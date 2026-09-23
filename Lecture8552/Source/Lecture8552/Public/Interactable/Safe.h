// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "GameFramework/Actor.h"
#include "Safe.generated.h"

UCLASS()
class LECTURE8552_API ASafe : public AActor, public IInteractable
{
private:
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASafe();
	void Open();
	void CollectLoot();
	virtual void Interact(UPrimitiveComponent* HitComponent) override;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> LootMesh;
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USkeletalMeshComponent> BaseMesh;
	
	
};
