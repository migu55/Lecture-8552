// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable.h"
#include "GameFramework/Actor.h"
#include "Crate.generated.h"

UCLASS()
class LECTURE8552_API ACrate : public AActor, public IInteractable
{
private:
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ACrate();
	void Open();
	virtual void Interact(UPrimitiveComponent* HitComponent) override;
	
protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UStaticMeshComponent> BaseMesh;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<USkeletalMeshComponent> Lid;
};
