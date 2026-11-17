// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor.generated.h"

UCLASS()
class UE13_TEACH_CPLUS_API AMyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UE_TEACH", meta = (ClampMin = "0.0", ClampMax = "5000.0", UIMin = "0.0", UIMax = "1000.0"))
	int myNum;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "UE_TEACH")
	bool isEdited;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UE_TEACH", meta = (ClampMin = "0.0", ClampMax = "500.0"))
	FString shortText;


	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UE_TEACH", meta = (ClampMin = "0.0", ClampMax = "2000.0", UIMin = "0.0", UIMax = "1000.0"))
	FVector myVector;

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "UE_TEACH")
	bool OnCollisionDoSomething();


	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "UE_TEACH")
	FString PrintText(const FString& SomeText, const FColor& TextColor = FColor::Green);

	//Функция вызывает PrintText и модифицирует ее
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "UE_TEACH")
	FString PrintLongRedText(const FString& SomeText);

	//Функция принимает числа, возвращает результат сложения текстом
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "UE_TEACH")
	FString GetSumInTextFormat(int32 A, int32 B);

};
