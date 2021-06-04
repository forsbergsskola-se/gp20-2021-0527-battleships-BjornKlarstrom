#pragma once
#include "Ship.h"

class BattleField
{
    static void SetupField();

public:
    static void DrawBattleField();
    static void DrawTargetField();
    bool PlaceShip(int x,int y,Ship ship);
    BattleField();
};