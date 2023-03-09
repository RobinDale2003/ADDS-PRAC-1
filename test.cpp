#include <stdio.h>
#include <iostream>
class Player {
    public:
    std::string name;
    char move;
    Player();
    Player(std::string newName, char playerMove);
    char makeMove() {return move;};
    std::string getName() {return name;};
};
class Human: public Player {

};

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


int main(void) {
return 0;
}