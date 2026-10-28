// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BaseCharacter.generated.h"


class AProjectile;

UCLASS()
class LECTURE8552_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();
	
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void SpawnProjectile(FName SocketName, TSubclassOf<AProjectile> ProjectileClass);
	
	UFUNCTION(BlueprintCallable, Category = "Combat")
	void LaunchProjectile();
	
	

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
private:
	UPROPERTY();
	AProjectile* ActiveSpawnedProjectile;
	
};
