// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PlayerEffect.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.generated.h"


UCLASS()
class BRINGEROFAETHER_API APlayerCharacter : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float health = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		float magic = 100;
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
        int level = 1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Player Stats")
		TArray<TSubclassOf<UPlayerEffect>> playerOptions;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
