#ifndef Referee_H
#define Referee_H
#include "Player.h"
#include <string>
#include <stdio.h>

class Referee{
    private:
    std::string name;
    public:
    Referee(); // constructor
    Player * refGame(Player * player1, Player * player2);
};

// returns the reference to the winning player

#endif