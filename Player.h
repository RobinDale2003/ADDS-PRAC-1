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
    Player(std::string newName);

    virtual char makeMove() =0;
    virtual std::string getName() =0;
};
#endif