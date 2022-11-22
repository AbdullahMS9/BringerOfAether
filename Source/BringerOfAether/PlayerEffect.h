// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PlayerEffect.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, meta = (ShowWorldContextPin))
class BRINGEROFAETHER_API UPlayerEffect : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Option")
		FString effectName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Option")
		float effectAmount;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Option")
		float effectCost;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "Player Option")
		void OnActivated(UActorStatsComponent* playerStats, UActorStatsComponent* opponentStats);
	
};
