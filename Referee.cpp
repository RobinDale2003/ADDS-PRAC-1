#include "Referee.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
Referee::Referee()
{
    name = "referee";
}
Player * Referee::refGame(Player * player1, Player * player2) {
player1->makeMove();
    switch(player1->move) { 
        case 'R': 
            std::cout << player1->name << " Wins" << std::endl;
            return player1;
            break;
        case 'P': 
            std::cout << "It's A Tie" << std::endl;
            return nullptr;
            break;
        case 'S': 
            std::cout << "Computer Wins" << std::endl; 
            return player2;   
            break;
    
    }
return nullptr;
};