#include <iostream>

using namespace std;

int sumArray(int [], int);

int main() {
    const int ARRAY_SIZE {5};
    int testArray [] {1, 4, 6, 3, 2};
    cout << sumArray(testArray, ARRAY_SIZE) << endl;


    return 0;
}

int sumArray(int arrayToSum[], int arraySize) {
    int sum {0};
    for (int i {0}; i < arraySize; i++) {
        sum += arrayToSum[i];
    }
    return sum;
}

