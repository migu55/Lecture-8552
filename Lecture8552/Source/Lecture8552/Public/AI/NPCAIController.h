// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseAIController.h"
#include "NPCAIController.generated.h"

struct FAIStimulus;

UCLASS()
class LECTURE8552_API ANPCAIController : public ABaseAIController
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ANPCAIController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UFUNCTION(BlueprintCallable, Category = "AI")
	void HandleSightSense(AActor* Actor, FAIStimulus Stimulus);
	

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
