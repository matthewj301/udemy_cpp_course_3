#include <iostream>

using namespace std;

int multiply(int, int, int);

int main() {
    cout << multiply(5, 10, 2);
    return 0;
}

int multiply(int num1, int num2, int num3) {
    return num1 * num2 * num3;
}

