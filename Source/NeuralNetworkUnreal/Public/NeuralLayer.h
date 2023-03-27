// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NeuralLayer.generated.h"

UCLASS()
class NEURALNETWORKUNREAL_API ANeuralLayer : public AActor
{
	GENERATED_BODY()
	
public:	
	ANeuralLayer(int numNodesIn, int numNodesOut);
	int numNodesIn, numNodesOut;
	TArray<TArray<double>> weights;
	TArray<double> biases;

	virtual void Tick(float DeltaTime) override;
	TArray<double> GetOutputs(TArray<double> inputs);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame





};
