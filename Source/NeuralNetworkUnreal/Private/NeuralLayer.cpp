// Fill out your copyright notice in the Description page of Project Settings.

#include "NeuralLayer.h"

// Sets default values
ANeuralLayer::ANeuralLayer(int in, int out)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	//Sets the current number of nodes for both variables.
	this->numNodesIn = in;
	this->numNodesOut = out;

	//Sets the array sizes.
	weights.SetNum(numNodesIn * numNodesOut);
	biases.SetNum(numNodesOut);



}

//Takes in all the inputs, and returns weighted inputs.
TArray<double> ANeuralLayer::GetOutputs(TArray<double> inputs)
{
	TArray<double> weightedInputs;
	weightedInputs.SetNum(numNodesOut);
	//For each node out, set it to the corresponding bias value.
	for (int nodeOut = 0; nodeOut < numNodesOut; nodeOut++)
	{
		double weightedInput = biases[nodeOut];
		//For each nodeIn for every nodeOut, set the weighted input = input * weight of the incoming and outgoing node.
		for (int nodeIn = 0; nodeIn < numNodesIn; nodeIn++)
		{
			weightedInput += inputs[nodeIn] * weights[nodeIn][nodeOut];
		}
		weightedInputs[nodeOut] = weightedInput;
	}
	return weightedInputs;
}

int Get2DArrayIndex(int rowIndex, int columnIndex)
{

}


// Called when the game starts or when spawned
void ANeuralLayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ANeuralLayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

