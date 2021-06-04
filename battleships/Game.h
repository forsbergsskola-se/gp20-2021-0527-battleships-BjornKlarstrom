#pragma once
#include "Player.h"

class Game {
    private:
        Player playerOne;
        //Player playerTwo;
        void Setup();

    public:
        Game();
        void Run();
};
