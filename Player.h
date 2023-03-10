#ifndef Player_H
#define Player_H
#include <string>
#include <stdio.h>
#include <iostream>

class Player {
    public:
        virtual char makeMove() =0;
        virtual std::string getName() =0;
};
#endif