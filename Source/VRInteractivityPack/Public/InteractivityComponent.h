#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "InteractivityComponent.generated.h"

/**
* Base class for all interactivity components.
*/
UCLASS(Abstract, ClassGroup=(VRInteractivityPack))
class UInteractivityComponent : public USceneComponent
{
	GENERATED_BODY()

public:	
	UInteractivityComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

protected:
	virtual void BeginPlay() override;

};
