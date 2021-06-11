#pragma once
#include "Player.h"
#include <string>
using namespace std;

class BattleShips {
    private:
        Player playerOne;
        Player playerTwo;
        bool CheckWin();
        
    public:
        BattleShips();
        void Start();
};
