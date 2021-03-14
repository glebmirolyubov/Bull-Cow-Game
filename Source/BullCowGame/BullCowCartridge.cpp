// Fill out your copyright notice in the Description page of Project Settings.
#include "BullCowCartridge.h"

void UBullCowCartridge::BeginPlay() // When the game starts
{
    Super::BeginPlay();
    PrintLine(TEXT("Welcome to Bull Cows!"));
    PrintLine(TEXT("Guess the 4 letter word")); // Magic Number Remove!
    PrintLine(TEXT("Press enter to continue..."));

    HiddenWord = TEXT("cake");

    // Set Lives

    // Prompt Player for Guess

}

void UBullCowCartridge::OnInput(const FString& Input) // When the player hits enter
{
    ClearScreen();
    
    // Check Player Guess

    if (HiddenWord == Input)
    {
        PrintLine(TEXT("Awesome, you got it right! You win!"));
    } 
    else 
    {
        PrintLine(TEXT("This is an incorrect guess! You lose!"));
    }

    // Check if Isogram
    // Prompt to Guess Again
    // Check Right Number of Characters
    // Prompt to Guess Again

    // Remove Live

    // Check if Lives > 0
    // If yes PlayAgain 
    // Show Lives Left
    // If no Show GameOver and HiddenWord?
    // Prompt to PlayAgain, Press Enter to PlayAgain?
    // PlayAgain or Quit

}   