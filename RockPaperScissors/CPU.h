#pragma once
#include <stdlib.h> 
#include <string>

class CPU
{
private:
	std::string choice;
public:
	std::string Choice() {
		int random = rand() % 3 + 1;
		switch (random)
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
		}
		return choice;
	}
};