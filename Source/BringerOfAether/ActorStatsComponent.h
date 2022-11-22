// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerEffect.h"
#include "Components/ActorComponent.h"
#include "ActorStatsComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BRINGEROFAETHER_API UActorStatsComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UActorStatsComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float health = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float magic = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		int level = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		TArray<TSubclassOf<UPlayerEffect>> playerEffects;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
