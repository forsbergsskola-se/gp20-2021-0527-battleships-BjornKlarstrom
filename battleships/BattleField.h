#pragma once
#include "Ship.h"

class Field {
    private:
        void Setup();
        char playerArray[10][10];
        char attackArray[10][10];
        bool PlaceSymbol(bool downwards, bool right, Ship ship, int x, int y);
    
    public:
        void DestroyedShip(Ship& s1, Ship& s2, Ship& s3, Ship& s4, Ship& s5);
        void CheckShip(Ship& ship);
        bool IsWin();
        bool IsHit(int x, int y);
        void SetBombSymbol(int x, int y, bool b);
        void ShowShipField(std::string str);
        void ShowBombField(std::string str);
        bool PlaceShip(int x, int y, Ship ship);
        Field();
};