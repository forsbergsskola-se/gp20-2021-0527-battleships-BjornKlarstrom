#pragma once
#include "BattleField.h"
#include <tuple>

class Player {
    private:
        char charArray[10]{ 'a','b','c','d','e','f','g','h','i','j' };
        static bool IsValid(char x, int y);
        void PlaceShip(Ship ship);
    
    public:
        Field playerBoard;
        void PlaceBomb(Player& player);
        std::string name;
        std::tuple<Ship, Ship, Ship, Ship, Ship > PlaceShips();
        std::tuple<int, int> UserInput();
        Player(std::string playerName);
        Player();
};
