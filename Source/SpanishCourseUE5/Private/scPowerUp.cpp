// Fill out your copyright notice in the Description page of Project Settings.


#include "SpanishCourseUE5/Public/scPowerUp.h"

#include "DDSFile.h"

// Sets default values
AscPowerUp::AscPowerUp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	 PowerUpmesh = CreateDefaultSubobject<UStaticMeshComponent>("PowerUpmesh");
	 PowerUpmesh ->SetupAttachment(GetRootComponent());

	CollisionSphere = CreateDefaultSubobject<USphereComponent>("CollisionSphere");
	CollisionSphere ->SetupAttachment(PowerUpmesh);
	CollisionSphere ->SetSphereRadius(50.f);
	CollisionSphere ->SetCollisionEnabled(ECollisionEnabled::Type::QueryAndPhysics);
	CollisionSphere ->SetCollisionProfileName(TEXT("overlapDynamic"));

}

// Called when the game starts or when spawned
void AscPowerUp::BeginPlay()
{
	Super::BeginPlay();
}

