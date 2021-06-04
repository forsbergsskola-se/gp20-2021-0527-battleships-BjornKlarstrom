#include "BattleField.h"
#include <iostream>
using namespace std;

char playerPosition[10][10];
char targetPosition[10][10];
const int fieldSize = sizeof playerPosition / sizeof playerPosition[0];

BattleField::BattleField()
{
    SetupField();
}

void BattleField::SetupField()
{
    for(int x = 0; x < fieldSize; x++)
    {
        for(int y = 0; y < fieldSize; y++)
        {
            playerPosition[x][y] = '~';
            targetPosition[x][y] = '~';
        }
    }
}

void BattleField::DrawBattleField()
{
    cout << "      0   1   2   3   4   5   6   7   8   9 " << endl;
    cout << "   A  " << playerPosition[0][0] << "   " << playerPosition[0][1] << "   " << playerPosition[0][2] << "   " << playerPosition[0][3] << "   " << playerPosition[0][4] << "   " << playerPosition[0][5] << "   " << playerPosition[0][6] << "   " << playerPosition[0][7] << "   " << playerPosition[0][8] << "   " << playerPosition[0][9] << "  " << endl;
    cout << "   B  " << playerPosition[1][0] << "   " << playerPosition[1][1] << "   " << playerPosition[1][2] << "   " << playerPosition[1][3] << "   " << playerPosition[1][4] << "   " << playerPosition[1][5] << "   " << playerPosition[1][6] << "   " << playerPosition[1][7] << "   " << playerPosition[1][8] << "   " << playerPosition[1][9] << "  " << endl;
    cout << "   C  " << playerPosition[2][0] << "   " << playerPosition[2][1] << "   " << playerPosition[2][2] << "   " << playerPosition[2][3] << "   " << playerPosition[2][4] << "   " << playerPosition[2][5] << "   " << playerPosition[2][6] << "   " << playerPosition[2][7] << "   " << playerPosition[2][8] << "   " << playerPosition[2][9] << "  " << endl;
    cout << "   D  " << playerPosition[3][0] << "   " << playerPosition[3][1] << "   " << playerPosition[3][2] << "   " << playerPosition[3][3] << "   " << playerPosition[3][4] << "   " << playerPosition[3][5] << "   " << playerPosition[3][6] << "   " << playerPosition[3][7] << "   " << playerPosition[3][8] << "   " << playerPosition[3][9] << "  " << endl;
    cout << "   E  " << playerPosition[4][0] << "   " << playerPosition[4][1] << "   " << playerPosition[4][2] << "   " << playerPosition[4][3] << "   " << playerPosition[4][4] << "   " << playerPosition[4][5] << "   " << playerPosition[4][6] << "   " << playerPosition[4][7] << "   " << playerPosition[4][8] << "   " << playerPosition[4][9] << "  " << endl;
    cout << "   F  " << playerPosition[5][0] << "   " << playerPosition[5][1] << "   " << playerPosition[5][2] << "   " << playerPosition[5][3] << "   " << playerPosition[5][4] << "   " << playerPosition[5][5] << "   " << playerPosition[5][6] << "   " << playerPosition[5][7] << "   " << playerPosition[5][8] << "   " << playerPosition[5][9] << "  " << endl;
    cout << "   G  " << playerPosition[6][0] << "   " << playerPosition[6][1] << "   " << playerPosition[6][2] << "   " << playerPosition[6][3] << "   " << playerPosition[6][4] << "   " << playerPosition[6][5] << "   " << playerPosition[6][6] << "   " << playerPosition[6][7] << "   " << playerPosition[6][8] << "   " << playerPosition[6][9] << "  " << endl;
    cout << "   H  " << playerPosition[7][0] << "   " << playerPosition[7][1] << "   " << playerPosition[7][2] << "   " << playerPosition[7][3] << "   " << playerPosition[7][4] << "   " << playerPosition[7][5] << "   " << playerPosition[7][6] << "   " << playerPosition[7][7] << "   " << playerPosition[7][8] << "   " << playerPosition[7][9] << "  " << endl;
    cout << "   I  " << playerPosition[8][0] << "   " << playerPosition[8][1] << "   " << playerPosition[8][2] << "   " << playerPosition[8][3] << "   " << playerPosition[8][4] << "   " << playerPosition[8][5] << "   " << playerPosition[8][6] << "   " << playerPosition[8][7] << "   " << playerPosition[8][8] << "   " << playerPosition[8][9] << "  " << endl;
    cout << "   J  " << playerPosition[9][0] << "   " << playerPosition[9][1] << "   " << playerPosition[9][2] << "   " << playerPosition[9][3] << "   " << playerPosition[9][4] << "   " << playerPosition[9][5] << "   " << playerPosition[9][6] << "   " << playerPosition[9][7] << "   " << playerPosition[9][8] << "   " << playerPosition[9][9] << "  " << endl;
}
    
void BattleField::DrawTargetField()
{
    cout << " " << endl;
        
    cout << "      0   1   2   3   4   5   6   7   8   9 " << endl;
    cout << "   A  " << targetPosition[0][0] << "   " << targetPosition[0][1] << "   " << targetPosition[0][2] << "   " << targetPosition[0][3] << "   " << targetPosition[0][4] << "   " << targetPosition[0][5] << "   " << targetPosition[0][6] << "   " << targetPosition[0][7] << "   " << targetPosition[0][8] << "   " << targetPosition[0][9] << "  " << endl;
    cout << "   B  " << targetPosition[1][0] << "   " << targetPosition[1][1] << "   " << targetPosition[1][2] << "   " << targetPosition[1][3] << "   " << targetPosition[1][4] << "   " << targetPosition[1][5] << "   " << targetPosition[1][6] << "   " << targetPosition[1][7] << "   " << targetPosition[1][8] << "   " << targetPosition[1][9] << "  " << endl;
    cout << "   C  " << targetPosition[2][0] << "   " << targetPosition[2][1] << "   " << targetPosition[2][2] << "   " << targetPosition[2][3] << "   " << targetPosition[2][4] << "   " << targetPosition[2][5] << "   " << targetPosition[2][6] << "   " << targetPosition[2][7] << "   " << targetPosition[2][8] << "   " << targetPosition[2][9] << "  " << endl;
    cout << "   D  " << targetPosition[3][0] << "   " << targetPosition[3][1] << "   " << targetPosition[3][2] << "   " << targetPosition[3][3] << "   " << targetPosition[3][4] << "   " << targetPosition[3][5] << "   " << targetPosition[3][6] << "   " << targetPosition[3][7] << "   " << targetPosition[3][8] << "   " << targetPosition[3][9] << "  " << endl;
    cout << "   E  " << targetPosition[4][0] << "   " << targetPosition[4][1] << "   " << targetPosition[4][2] << "   " << targetPosition[4][3] << "   " << targetPosition[4][4] << "   " << targetPosition[4][5] << "   " << targetPosition[4][6] << "   " << targetPosition[4][7] << "   " << targetPosition[4][8] << "   " << targetPosition[4][9] << "  " << endl;
    cout << "   F  " << targetPosition[5][0] << "   " << targetPosition[5][1] << "   " << targetPosition[5][2] << "   " << targetPosition[5][3] << "   " << targetPosition[5][4] << "   " << targetPosition[5][5] << "   " << targetPosition[5][6] << "   " << targetPosition[5][7] << "   " << targetPosition[5][8] << "   " << targetPosition[5][9] << "  " << endl;
    cout << "   G  " << targetPosition[6][0] << "   " << targetPosition[6][1] << "   " << targetPosition[6][2] << "   " << targetPosition[6][3] << "   " << targetPosition[6][4] << "   " << targetPosition[6][5] << "   " << targetPosition[6][6] << "   " << targetPosition[6][7] << "   " << targetPosition[6][8] << "   " << targetPosition[6][9] << "  " << endl;
    cout << "   H  " << targetPosition[7][0] << "   " << targetPosition[7][1] << "   " << targetPosition[7][2] << "   " << targetPosition[7][3] << "   " << targetPosition[7][4] << "   " << targetPosition[7][5] << "   " << targetPosition[7][6] << "   " << targetPosition[7][7] << "   " << targetPosition[7][8] << "   " << targetPosition[7][9] << "  " << endl;
    cout << "   I  " << targetPosition[8][0] << "   " << targetPosition[8][1] << "   " << targetPosition[8][2] << "   " << targetPosition[8][3] << "   " << targetPosition[8][4] << "   " << targetPosition[8][5] << "   " << targetPosition[8][6] << "   " << targetPosition[8][7] << "   " << targetPosition[8][8] << "   " << targetPosition[8][9] << "  " << endl;
    cout << "   J  " << targetPosition[9][0] << "   " << targetPosition[9][1] << "   " << targetPosition[9][2] << "   " << targetPosition[9][3] << "   " << targetPosition[9][4] << "   " << targetPosition[9][5] << "   " << targetPosition[9][6] << "   " << targetPosition[9][7] << "   " << targetPosition[9][8] << "   " << targetPosition[9][9] << "  " << endl;
}