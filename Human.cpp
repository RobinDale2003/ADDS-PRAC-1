#include "Player.h"
#include "Human.h"
Human::Human()
{
    name = "Human";
    move = '\0';
}
Human::Human(std::string newName, char playerMove)
{
    name = newName;
    move = playerMove;
}