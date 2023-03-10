#include "Player.h"
#ifndef Human_H
#define Human_H
#include <string>
#include <stdio.h>
class Human: public Player {
    private:
    std::string name;
    char move;
    public:
    Human();
    Human(std::string newName);
    char makeMove();
    std::string getName();
};
#endif