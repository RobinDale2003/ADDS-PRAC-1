#include "Player.h"
#ifndef Computer_H
#define Computer_H
class Computer: public Player{
    public:
        Computer();
        char makeMove();
        std::string getName();
};
#endif