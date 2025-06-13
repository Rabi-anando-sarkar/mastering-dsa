#include <iostream>

using namespace std;

int fib(int num) {
    if(num <= 1) return num;
    return fib(num-1) + fib(num-2);
}

int main() {
    int result = fib(5);
    cout << "Fibonacci is : " << result << endl;
    return 0;
}