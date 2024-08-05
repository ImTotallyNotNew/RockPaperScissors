#pragma once
#include <iostream>
class GameController
{
private:
    int playerScore = 0;
    int cpuScore = 0;
public:

    bool playGame = true;

    void Checker(std::string playersChoice, std::string cpuChoice)
    {
        if (cpuChoice == playersChoice)
        {
            std::cout << "Draw!\n";
        }
        else if (cpuChoice == "Rock" && playersChoice == "Paper")
        {
            std::cout << "Player Wins!\n";
            playerScore += 1;
        }
        else if (cpuChoice == "Rock" && playersChoice == "Scissors")
        {
            std::cout << "CPU Wins!\n";
            cpuScore += 1;
        }
        else if (cpuChoice == "Paper" && playersChoice == "Scissors")
        {
            std::cout << "Player Wins!\n";;
            playerScore += 1;
        }
        else if (cpuChoice == "Paper" && playersChoice == "Rock")
        {
            std::cout << "CPU Wins!\n";;
            cpuScore += 1;
        }
        else if (cpuChoice == "Scissors" && playersChoice == "Paper")
        {
            std::cout << "CPU Wins!\n";
            cpuScore += 1;
        }
        else if (cpuChoice == "Scissors" && playersChoice == "Rock")
        {
            std::cout << "Player Wins!\n";
            playerScore += 1;
        }
        else
        {
            std::cout << "Error!\n";
        }
    }

    bool GameState()
    {
        std::cout << "Player Score: " << playerScore << std::endl;
        std::cout << "CPU Score: " << cpuScore << std::endl;
        std::cout << "----------------------------------------\n";
        std::cout << "Do you wish to play again? 1. Yes, 2. No\n";
        std::cout << "Input: ";
        int gameChoice;
        std::cin >> gameChoice;
        switch (gameChoice)
        {
        case 1:
            return playGame = true;
            break;
        case 2:
            return playGame = false;
            break;
        default:
            std::cout << "Invalid Input! Please enter 1 or 2\n";
        }
    }
};