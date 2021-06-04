#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
    srand(time(nullptr));
    const long very_large_number = 1'00000;

    int appearance_array[20] {0};
    int random_number = 0;

    for (int i = 0; i < very_large_number; i++)
    {
        random_number = rand() % 20;
        appearance_array[random_number] += 1;
    }

    float percent = 0.0f;
    int maximum_value {0};
    int maximum_value_index {0};
    
    for (int i = 0; i < 20; i++)
    {
        percent = (static_cast<float>(appearance_array[i]) / very_large_number) * 100;
        
        if (i < 9 )
            cout << "Number  " << i + 1 << ": " << appearance_array[i] << " times (" << fixed << setprecision(3) << percent << "%)" << endl;
        else
            cout << "Number " << i + 1 << ": " << appearance_array[i] << " times (" << fixed << setprecision(3) << percent << "%)" << endl;
     
        if(appearance_array[i] > maximum_value)
        {
            maximum_value = appearance_array[i];
            maximum_value_index = i + 1;
        }
    }
    cout << ". . ." << endl;
    percent = (static_cast<float>(maximum_value) / very_large_number) * 100;
    cout << "Maximum (Positive) Offset: Number " << maximum_value_index << endl;

    cout << endl << endl;
    return 0;
}