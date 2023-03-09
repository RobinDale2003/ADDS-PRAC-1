#include "Player.h"
#ifndef Human_H
#define Human_H
#include <string>
#include <stdio.h>
class Human: public Player {
    public:
    Human();
    Human(std::string newName, char playerMove);
};
#endif