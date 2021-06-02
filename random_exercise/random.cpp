#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(nullptr));
    const long very_large_number = 1'000'000'000;

    int appearance_array[20] {0};
    int random_number = 0;

    for (int i = 0; i < very_large_number; i++)
    {
        random_number = rand() % 20;
        appearance_array[random_number] += 1;
    }

    float percent = 0.0f;
    for (int i = 0; i < 20; i++)
    {
        percent = (static_cast<float>(appearance_array[i]) / very_large_number) * 100;
        if(i < 9)
            cout << i + 1  << "  was randomized " << fixed << setprecision(3) << percent << "% of the times" << endl;
        else
            cout << i + 1  << " was randomized " << fixed << setprecision(3) << percent << "% of the times" << endl;
    }

    cout << endl << endl;
    return 0;
}