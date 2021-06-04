#pragma once
#include "BattleField.h"
#include "Ship.h"
#include <string>
using namespace std;

class Player
{
    BattleField playerField;
    void PlaceShip(Ship ship) const;
    char charArray[10]{'a','b','c','d','e','f','g','h','i','j'};

public:
    string name;
    Player(std::string playerName);
    Player();
    void PlaceShips() const;
};