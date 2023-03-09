#ifndef Referee_H
#define Referee_H
#include "Player.h"
#include <string>
#include <stdio.h>

class Referee{
    public:
    std::string name;
    Referee(); // constructor

    Player * refGame(Player * player1, Player * player2) {
    std::cout << "Game in session" << std::endl;
    switch(player1->move) { 
        case 'R': 
            std::cout << "Tie" << std::endl;
            break;
        case 'P': 
            std::cout << "Win" << std::endl;
            break;
        case 'S': 
            std::cout << "Lose" << std::endl;    
            break;
    }
return player1;
};
};

// returns the reference to the winning player

#endif