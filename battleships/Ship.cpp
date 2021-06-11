#include "Ship.h"
#include <string>

char Ship::GetSymbol() {
    return symbol;
}

int Ship::GetSize() {
    return size;
}
std::string Ship::GetName() {
    return name;
}
Ship::Ship(std::string shipName,int shipSize, char shipSymbol){
    size = shipSize;
    symbol = shipSymbol;
    name = shipName;
};