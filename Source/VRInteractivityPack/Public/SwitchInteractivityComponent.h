#pragma once

#include "CoreMinimal.h"
#include "InteractivityComponent.h"
#include "SwitchInteractivityComponent.generated.h"

/**
 * An interactive switch component that can be physically toggled by a HandComponent.
 */
UCLASS(ClassGroup = (VRInteractivityPack), DisplayName = "Switch", meta = (BlueprintSpawnableComponent))
class VRINTERACTIVITYPACK_API USwitchInteractivityComponent : public UInteractivityComponent {
	
	GENERATED_BODY()
	
public:
	USwitchInteractivityComponent();
	
};
