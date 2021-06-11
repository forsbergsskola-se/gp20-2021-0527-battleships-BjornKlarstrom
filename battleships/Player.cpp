#include "Player.h"
#include <string>
#include "Ship.h"
#include <iostream>
using namespace std;

Player::Player(string playerName)
{
	name = playerName;
}
Player::Player()
{
	name = "";
}
void Player::PlaceShip(Ship ship)
{
	playerBoard.ShowShipField(name);
	cout << "     Place your " << ship.GetName() << "?\nThe " << ship.GetName() << " takes up " << ship.GetSize() << " cells" << endl;
	auto position = UserInput();
	if (!playerBoard.PlaceShip(get<0>(position), get<1>(position), ship))
		{
		cout << "     Cannot place " << ship.GetName() << " here.";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin.get();
		PlaceShip(ship);
		}
}
void Player::PlaceBomb(Player& player)
{
	playerBoard.ShowBombField(name);
	cout << "     Where would you like to attack?" << endl;
	auto input = UserInput();
	playerBoard.SetBombSymbol(get<0>(input), get<1>(input), player.playerBoard.IsHit(get<0>(input), get<1>(input)));
}

tuple<Ship,Ship,Ship,Ship,Ship > Player::PlaceShips()
{
	Ship fishingboat("Fishingboat", 2, 'F');
	Ship warship("Warship", 3, 'W');
	Ship frigate("Frigate", 3, 'F');
	Ship submarine("Submarine", 4, 'S');
	Ship bismark("Bismark", 5, 'B');
	PlaceShip(fishingboat);
	PlaceShip(warship);
	PlaceShip(frigate);
	PlaceShip(submarine);
	PlaceShip(bismark);
	playerBoard.ShowShipField(name);
	return make_tuple (fishingboat, warship, frigate, submarine, bismark);
}
bool Player::IsValid(char x, int y)
{
	if (y < 0 || y > 9)
		return false;
	if (x != 'a' && x != 'b' && x != 'c' && x != 'd' && x != 'e' && x != 'f' && x != 'g' && x != 'h' && x != 'i' && x != 'j')
		return false;
	return true;
}

tuple<int, int> Player::UserInput()
{
	cout << "     Enter position A-0 to J-9 :  " << endl;
	string input;
	cin >> input;
	const char x = tolower(input[0]);
	int y = input[1] - '0';
	if (IsValid(x, y)) {
		int xInt;
		for (int i = 0; i < 10; i++) {
			if (charArray[i] == x)
				xInt = i;
		}
		return make_tuple(xInt, y);
	}
	else
	{
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "     Invalid input! try again..." << endl;
		return UserInput();
	}
}