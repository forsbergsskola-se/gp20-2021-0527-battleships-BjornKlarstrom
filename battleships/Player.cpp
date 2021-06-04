#include "Player.h"
#include "Ship.h"
#include <iostream>
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

void Player::PlaceShips() const
{
    const Ship testBoat("Warship",3,'W');
    
    PlaceShip(testBoat);
}

void Player::PlaceShip(Ship ship) const
{
    playerField.DrawBattleField();
    cout << "Place your " << ship.GetName() << "... (" << ship.GetSize() << ") units long" << endl;
}