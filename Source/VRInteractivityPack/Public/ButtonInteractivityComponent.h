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
	UStaticMesh* ButtonMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Appearance")
	UStaticMesh* HousingMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	UMaterialInterface* EnabledMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	UMaterialInterface* DisabledMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float DefaultButtonOffset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	float RequiredPressDepth;

	float CurrentPressDepth;
	
};
