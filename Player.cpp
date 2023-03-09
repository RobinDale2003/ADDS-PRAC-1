#include "Player.h"
Player::Player()
{
    name = "Human";
    move = '\0';
}
Player::Player(std::string newName, char playerMove)
{
    name = newName;
    move = playerMove;
}