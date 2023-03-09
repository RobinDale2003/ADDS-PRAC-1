#include "Player.h"
#ifndef Computer_H
#define Computer_H
class Computer: public Player{
    public:
    Computer();
    char makeMove() {return move;};
    std::string getName() {return name;};
};
#endif