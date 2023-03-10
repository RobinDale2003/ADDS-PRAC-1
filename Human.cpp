#include "Player.h"
#include "Human.h"
Human::Human()
{
    name = "Human";
}
Human::Human(std::string newName)
{
    name = newName;
}
std::string Human::getName() 
{
    return name;
};
char Human::makeMove()
{
    std::cout << "Make Move:";
    std::cin >> move;
    /*while (move =! 'R' || 'P' || 'S') {
    std::cout << "Invalid:";
    std::cin >> move;
    }*/
    return move;
};