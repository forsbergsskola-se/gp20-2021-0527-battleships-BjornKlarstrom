#include "Player.h"

#include <string>
using namespace std;

Player::Player(std::string playerName)
{
    name = playerName;
}

Player::Player()
{
    name = "";
    
}

void Player::PlaceShips()
{
    playerField.DrawBattleField();
}

