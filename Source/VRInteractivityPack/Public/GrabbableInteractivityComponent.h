#pragma once

#include "CoreMinimal.h"
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
	
};
