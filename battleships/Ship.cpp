#include "Ship.h"
#include <string>
using namespace std;

Ship::Ship(string name, int size, char symbol)
{
    shipName = name;
    shipSize = size;
    shipSymbol = symbol;
}

string Ship::GetName() const
{
    return shipName;
}

int Ship::GetSize() const
{
    return shipSize;
}

char Ship::GetSymbol() const
{
    return shipSymbol;
}

