#pragma once
#include <string>
using namespace std;

class Ship
{
    string shipName;
    char shipSymbol;
    int shipSize;
    
public:
    string GetName() const;
    char GetSymbol() const;
    int GetSize() const;
    Ship(string name, int size, char symbol);
};