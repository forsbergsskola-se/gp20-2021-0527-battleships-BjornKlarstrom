#pragma once
#include <string>
using namespace std;

class Ship {
    private:
    string name;
    int size;
    char symbol;
    
public:
    bool isDestroyed = false;
    string GetName();
    int GetSize();
    char GetSymbol();
    Ship(std::string name,int size, char symbol);
};
