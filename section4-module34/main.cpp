#include <iostream>
#include <array>

using namespace std;


int main() {
    // CANNOT RESIZE ARRAY BECAUSE MEMORY IS ALLOCATED NEXT TO EACH OTHER
    const size_t ARRAY_SIZE {10};
    array<size_t, ARRAY_SIZE> testArray {};

    for (size_t i {0}; i < testArray.size(); i++) {
        testArray[i] = i*2;
    }

    for (auto arr: testArray) {
        cout << arr << endl;
    }

    return 0;
}
