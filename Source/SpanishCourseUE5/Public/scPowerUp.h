// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "scPowerUp.generated.h"
#include "components/StaticMeshComponent.h"
#include "components/SphereComponent.h"



UCLASS()
class SPANISHCOURSEUE5_API AscPowerUp : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AscPowerUp();
	
    UPROPERTY(VisibleAnywhere);
	UStaticMeshComponent* PowerUpmesh;
	
	UPROPERTY(VisibleAnywhere)
	USphereComponent* CollisionSphere;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
};
