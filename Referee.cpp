#include "Referee.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
Referee::Referee()
{
    name = "referee";
}
Player * Referee::refGame(Player * player1, Player * player2) {
char player1move = player1->makeMove();
char player2move = player2->makeMove();
if (player1move == player2move) {
    return nullptr;
}
else if (player1move == 'P' && player2move == 'R') {
    return player1;
}
else if (player1move == 'S' && player2move == 'R') {
    return player2;
}
else {
    return nullptr;
}
};