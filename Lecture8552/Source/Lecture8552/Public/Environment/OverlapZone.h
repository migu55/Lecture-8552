// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OverlapZone.generated.h"

class UBoxComponent;

UCLASS()
class LECTURE8552_API AOverlapZone : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AOverlapZone();
	
	UFUNCTION(BlueprintNativeEvent, Category = "OverlapZone")
	void OnOverlapBegin(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult);

	UFUNCTION(BlueprintNativeEvent, Category = "OverlapZone")
	void OnOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex);
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	TObjectPtr<UBoxComponent> OverlapComp;
	
};
