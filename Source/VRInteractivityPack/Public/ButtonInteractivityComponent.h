#pragma once

#include "CoreMinimal.h"
#include "InteractivityComponent.h"
#include "ButtonInteractivityComponent.generated.h"

/**
 * An interactive button component that can be physically pressed by a HandComponent.
 */
UCLASS(ClassGroup = (VRInteractivityPack), DisplayName = "Button", meta = (BlueprintSpawnableComponent))
class VRINTERACTIVITYPACK_API UButtonInteractivityComponent : public UInteractivityComponent {
	
	GENERATED_BODY()
	
public:
	UButtonInteractivityComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UStaticMeshComponent* ButtonMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UStaticMeshComponent* HousingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	UMaterialInterface* EnabledMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	UMaterialInterface* DisabledMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float DefaultButtonOffset = 0.05;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float RequiredPressDepth = 0.05;

	float CurrentPressDepth;
	
};
