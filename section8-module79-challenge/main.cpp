#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;


int main() {
    int ARRAY_SIZE {};
    int ARRAY_MULT {};
    cout << "How big do you want your array? ";
    cin >> ARRAY_SIZE;
    cout << "What do you want the multiple to be? ";
    cin >> ARRAY_MULT;

    int *myDynamicArray = new int[ARRAY_SIZE];

    for (int i {0}; i < ARRAY_SIZE; i++) {
        myDynamicArray[i] = i * ARRAY_MULT;
    }

    for (int i {0}; i < ARRAY_SIZE; i++) {
        cout << i << endl;
    }

    delete[] myDynamicArray;
    myDynamicArray = nullptr;


    return 0;
}


