#ifndef Player_H
#define Player_H
#include <string>
#include <stdio.h>
#include <iostream>

class Player {
    public:
    std::string name;
    char move;
    Player();
    Player(std::string newName, char playerMove);

    char makeMove() {return move;};
    std::string getName() {return name;};

};
#endif