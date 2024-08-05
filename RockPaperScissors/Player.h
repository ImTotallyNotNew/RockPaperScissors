#pragma once
#include <stdlib.h> 
#include <string>
#include <iostream>

class Player
{
private:
	std::string choice;
public:
	std::string  Choice() 
	{
		std::cout << "1. Rock, 2. Paper, 3. Scissors\n";
		std::cout << "Input: ";
		int input;
		std::cin >> input;
		switch (input)
		{
			case 1:
				choice = "Rock";
				break;
			case 2:
				choice = "Paper";
				break;
			case 3:
				choice = "Scissors";
				break;
			default:
				std::cout << "Invalid input! Please choose between 1,2 and 3\n";
		}
		return choice;
	}
};