#pragma once

#include "CoreMinimal.h"
#include "VRInteractivityPack.h"
#include "HandComponent.h"
#include "Components/SceneComponent.h"
#include "InteractivityComponent.generated.h"


/**
* Enable / disable different levels of interactivity. IM_NoEvents: component will move, but
* will not dispatch any information to listening actors. IM_Static: component will not move
* and will not dispatch any information.
*/
UENUM(BlueprintType)
enum class EInteractivityMode : uint8 {
	IM_Enabled				UMETA(DisplayName = "Enabled"),
	IM_NoEvents				UMETA(DisplayName = "No events"),
	IM_Static				UMETA(DisplayName = "Static")
};


/**
* Base class for all interactivity components.
*/
UCLASS(Abstract, ClassGroup = (VRInteractivityPack))
class UInteractivityComponent : public USceneComponent {
	
	GENERATED_BODY()

public:	
	UInteractivityComponent();
	
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UHandComponent* InteractingWith;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Interactivity")
	EInteractivityMode InteractivityMode;

protected:
	virtual void BeginPlay() override;

};
