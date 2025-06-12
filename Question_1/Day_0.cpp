#include <iostream>

using namespace std;

class PowerOfTwo{
    public:
        bool divisonMethod(int num) {
            if(num == 1) return true;
            if(num <= 0 || num % 2 != 0) return false;
            return divisonMethod(num/2);
        }

        bool multiplicationMethod(int value, int num) {
            if(value == num) return true;
            if(value > num || num <= 0) return false;
            return multiplicationMethod(value*2, num);
        }
};

int main() {

    PowerOfTwo p;

    bool result1 = p.divisonMethod(18);
    bool result2 = p.multiplicationMethod(1,16);

    if(result1) {
        cout << "Yes! Its a power of two | Method 1" << endl;
    } else {
        cout << "No! Its not a power of two | Method 1" << endl;
    }

    if(result2) {
        cout << "Yes! Its a power of two | Method 2" << endl;
    } else {
        cout << "No! Its not a power of two | Method 2" << endl;
    }

    return 0;
}