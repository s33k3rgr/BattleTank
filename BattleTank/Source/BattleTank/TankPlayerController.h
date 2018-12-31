// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"


class ATank;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

    UPROPERTY(EditDefaultsOnly)
    float CrosshairXLocation = 0.5f;

    UPROPERTY(EditDefaultsOnly)
    float CrosshairYLocation = 0.3333f;

    UPROPERTY(EditDefaultsOnly)
    float LineTraceRange = 1000000.0f;

	ATank* GetControlledTank() const;

	void BeginPlay() override;

	void Tick(float DeltaTime) override;

	void AimTowardsCrosshair();

	bool GetSightRayHitLocation(FVector &HitLocation) const;

    bool GetLookDirection(FVector2D ScreenLocation, FVector &LookDirection) const;

    bool GetLookVectorHitLocation(FVector LookDirection, FVector &HitLocation) const;
	
};
