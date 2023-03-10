#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
#include <stdio.h>
#include <iostream>
#include <string.h>

int main(void) {

Human *player1;
Computer *player2;
Referee *ref1;

player1 = new Human("Jeff");
player2 = new Computer();
ref1 = new Referee();
ref1->refGame(player1, player2);

return 0;
}