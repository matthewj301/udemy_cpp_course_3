#include <iostream>

using namespace std;

int factorialFun(int);

int main() {
    int fact6 = factorialFun(6);

    cout << "The factorial of 6 is " << fact6 << endl;
    return 0;
}

int factorialFun(int num) {
    if (num > 1) {
        return num * factorialFun(num - 1);
    }
    return 1;
}

