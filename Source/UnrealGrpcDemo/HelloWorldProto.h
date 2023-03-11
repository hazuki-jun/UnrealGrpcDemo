// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "pb/HelloWorld/UnrealGrpcHelloWorldProto.h"
#include "HelloWorldProto.generated.h"

/**
 * 
 */
UCLASS()
class UNREALGRPCDEMO_API UHelloWorldProto : public UUnrealGrpcHelloWorldProto
{
	GENERATED_BODY()

public:
	virtual void SayHello() override;
};
