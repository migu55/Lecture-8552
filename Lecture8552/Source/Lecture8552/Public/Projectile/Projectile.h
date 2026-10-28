// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Projectile.generated.h"

class USphereComponent;
class UProjectileMovementComponent;

UCLASS()
class LECTURE8552_API AProjectile : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AProjectile();
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Components")
	TObjectPtr<UProjectileMovementComponent> ProjectileMovement;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Collision")
	TObjectPtr<USphereComponent> SphereCollider;
	
	UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
	
	UPROPERTY(EditDefaultsOnly, Category = "Damage")
	bool bApplyRadialDamage;
	
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UPROPERTY(EditDefaultsOnly, Category = "Projectile Physics")
	float LaunchGravityScale = 0.0f;
};
