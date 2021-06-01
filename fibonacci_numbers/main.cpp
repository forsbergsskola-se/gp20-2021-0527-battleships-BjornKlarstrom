#include <iostream>
#include <chrono>
using std::cout;
using std::cin;
using std::endl;
using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::microseconds;


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
    
    cout << "Hello Fibonacci!" << endl << endl;
    
    cout << "Enter number of series: ";
    cin >> series;

    auto clock_start = high_resolution_clock::now();
    cout << "\nFibonacci series (recursive function):" << endl;
    while(index < series){
        cout << FibonacciRecursive(index) << " ";
        index++;
    }
    auto clock_finish = high_resolution_clock::now();
    auto elapsed_time = duration_cast<microseconds>(clock_finish - clock_start);
    cout << endl;
    cout << "PERFORMANCE CHECK: Elapsed time (microseconds) for RECURSIVE function was " << elapsed_time.count() << endl;
    
    clock_start = high_resolution_clock::now();
    cout << "\nFibonacci series (iterative function):" << endl;
    FibonacciLoops(series);
    clock_finish = high_resolution_clock::now();
    elapsed_time = duration_cast<microseconds>(clock_finish - clock_start);
    cout << endl;
    cout << "PERFORMANCE CHECK: Elapsed time (microseconds) for ITERATIVE function was " << elapsed_time.count() << endl;
    
    cout << endl << endl;
	return 0;
}