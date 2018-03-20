#pragma once

#include "CoreMinimal.h"
#include "VRInteractivityPack.h"
#include "Components/ActorComponent.h"
#include "HandComponent.generated.h"


/**
* Data type for distinguishing between right and left hand.
*/
UENUM(BlueprintType)
enum class EHand : uint8 {
	H_left	UMETA(DisplayName = "Left"),
	H_right	UMETA(DisplayName = "Right")
};


/**
* C++ base class for hand/motion controller component. Can create Blueprint subclasses to add custom functionality.
*/
UCLASS(ClassGroup = (VRInteractivityPack), meta = (IsBlueprintBase="true"))
class VRINTERACTIVITYPACK_API UHandComponent : public UActorComponent {
	
	GENERATED_BODY()

public:	
	UHandComponent();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand")
	EHand Hand = EHand::H_left;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Hand")
	USkeletalMeshComponent* HandMesh;

	ESurfaceShape RequestedSurfaceShape;

protected:
	virtual void BeginPlay() override;
	
};
