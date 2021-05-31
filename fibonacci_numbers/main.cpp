#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int FibonacciRecursive(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    else{
        return (FibonacciRecursive(n-1) + FibonacciRecursive(n-2));
    }
}

void FibonacciLoops(int n){
    int x = 0;
    int y = 1;
    int z = 0;
    for(int i = 0; i < n; i++){
        cout << x << " ";
        z = x + y;
        x = y;
        y = z;
    }
}

int main()
{
    int index = 0;
    int series;
    int function_number;
    
    cout << "Enter the number of series: ";
    cin >> series;
    cout << "Would you like to use a recursive(1) or iterative(2) function? ";
    cin >> function_number;
    
    if(function_number == 1) {
        cout << "\nFibonacci series (recursive function): ";
        while(index < series){
            cout << " " << FibonacciRecursive(index);
            index++;
        }
    }
    else if(function_number == 2) {
        cout << "\nFibonacci series (iterative function): ";
        FibonacciLoops(series);
    }
    else{
        cout << "Not a valid choice..." << endl;
        return 0;
    }
    cout << endl << endl;
	return 0;
}