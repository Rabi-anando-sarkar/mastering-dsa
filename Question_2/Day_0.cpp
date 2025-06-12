#include <iostream>

using namespace std;

class PowerOfFour {
    public:
        bool divisionMethod(int num) {
            if(num == 1) return true;
            if(num % 4 != 0 || num <= 0) return false;
            return divisionMethod(num/4);
        }

        bool multiplicationMethod(int value, int num) {
            if(value == num) return true;
            if(value > num || num <= 0) return false;
            return multiplicationMethod(value*4,num);
        }
};

int main() {
    PowerOfFour p;

    bool result1 = p.divisionMethod(18);
    bool result2 = p.multiplicationMethod(1,16);

    if(result1) {
        cout << "Yes! Its a power of four | Method 1" << endl;
    } else {
        cout << "No! Its not a power of four | Method 1" << endl;
    }

    if(result2) {
        cout << "Yes! Its a power of four | Method 2" << endl;
    } else {
        cout << "No! Its not a power of four | Method 2" << endl;
    }
    return 0;
}