#include <iostream>
#include <array>
#include <vector>

using namespace std;


int main() {
    const int ARRAY_SIZE {5};
    int inputCount {0};
    array<int, ARRAY_SIZE> inputArray {};

    while (inputCount < ARRAY_SIZE) {
        cout << "Enter an int: ";
        cin >> inputArray[inputCount];
        inputCount++;
    }
    for (auto arr: inputArray) {
        cout << arr * 2 << endl;
    }

    return 0;
}
