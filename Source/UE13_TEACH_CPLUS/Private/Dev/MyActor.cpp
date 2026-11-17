// Fill out your copyright notice in the Description page of Project Settings.


#include "Dev/MyActor.h"

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString AMyActor::PrintText_Implementation(const FString& SomeText, const FColor& TextColor)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, TextColor, SomeText);
	return SomeText;
}

FString AMyActor::PrintLongRedText_Implementation(const FString& SomeText)
{

	return PrintText(TEXT("Дополненный текст на основе результата функции PrintText: ") + SomeText + TEXT(" "), FColor::Red);
}



FString AMyActor::GetSumInTextFormat_Implementation(int32 A, int32 B)
{
	int32 sum = A+B;
	return PrintText(TEXT("Результат сложения: ") + FString::FromInt(sum) + TEXT(" "), FColor::Black);
}