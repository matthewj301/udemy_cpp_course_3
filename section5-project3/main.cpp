#include <iostream>
#include <array>

using namespace std;

int sumArray(array<int, 10>);

int main() {
    array<int, 10> testArray {1,4,3,5,6,10,12,24, 11, 20};
    cout << sumArray(testArray);

    return 0;
}

int sumArray(array<int, 10> arrayToSum) {
    int sum {0};
    for (auto num: arrayToSum) {
        sum += num;
    }
    // OR
    sum = 0;
    for (int i {0}; i < arrayToSum.size(); i++) {
        sum += arrayToSum[i];
    }
    return sum;
}
