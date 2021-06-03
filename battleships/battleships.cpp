#include <iostream>
using namespace std;

int main()
{
    // Initialize player array
    char player_ships[10][10];
    const int ships_length = sizeof player_ships / sizeof player_ships[0];
    
    for(int x = 0; x < ships_length; x++)
    {
        for(int y = 0; y < ships_length; y++)
        {
            player_ships[x][y] = '~';
        }
    }

    // Draw battle field

    cout << "       0   1   2   3   4   5   6   7   8   9  " << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   A | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   B | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   C | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   D | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   E | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   F | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   G | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   H | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   I | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    cout << "   J | " << player_ships[0][0] << " | " << player_ships[0][1] << " | " << player_ships[0][2] << " | " << player_ships[0][3] << " | " << player_ships[0][4] << " | " << player_ships[0][5] << " | " << player_ships[0][6] << " | " << player_ships[0][7] << " | " << player_ships[0][8] << " | " << player_ships[0][9] << " |" << endl;
    cout << "     -----------------------------------------" << endl;
    
    return 0;
}