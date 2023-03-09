#include "Player.h"
#include "Human.h"
#include "Computer.h"
//#include "Referee.h"
#include <stdio.h>
#include <iostream>
#include <string.h>

int main(void) {
Human *human1;
Computer *computer1;

//human1 = new Human("Jeff",'P');
human1 = new Human();
computer1 = new Computer();

std::cout << human1->getName() << std::endl;
//std::cout << human1->makeMove() << std::endl;
std::cout << computer1->getName() << std::endl;
//std::cout << computer1->makeMove() << std::endl;
return 0;
}