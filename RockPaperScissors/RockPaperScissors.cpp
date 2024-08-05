#include <iostream>
#include "CPU.h"
#include "Player.h"
#include "GameController.h"

int main()
{
    CPU cpu;
    Player player;
    GameController game;

    std::cout << "Welcome to Rock Paper Scissors!\n";
    while (game.playGame)
    {
        game.Checker(player.Choice(), cpu.Choice());
        game.GameState();
    }
    std::cout << "Thank you for playing!\n";
}

