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

int main()
{
    int index = 0;
    int series;
    
    cout << "Enter the number of series: ";
    cin >> series;
    cout << "\nFibonacci series: ";
    while(index < series){
        cout << " " << FibonacciRecursive(index);
        index++;
    }
    cout << endl << endl;
	return 0;
}