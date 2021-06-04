#pragma once
#include "BattleField.h"
#include <string>
using namespace std;

class Player
{
private:
    BattleField playerField;
    
public:
    string name;
    Player(std::string playerName);
    Player();
    void PlaceShips();
};