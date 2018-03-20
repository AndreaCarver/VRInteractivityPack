#pragma once

#include "CoreMinimal.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"
#include "InteractivityComponent.h"
#include "GrabbableInteractivityComponent.generated.h"

/**
 * Base class for all grabbable interactivity components.
 */
UCLASS(Abstract, ClassGroup = (VRInteractivityPack))
class UGrabbableInteractivityComponent : public UInteractivityComponent {
	
	GENERATED_BODY()
	
public:
	UGrabbableInteractivityComponent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grab Surface")
	ESurfaceShape SurfaceShape;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grab Surface")
	FTransform SurfaceOffset;

	UStaticMeshComponent* SurfaceShapeVisualizer;
	
};
