#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;


int main() {
    // new is an operator, it dynamically allocates memory for the specified type
    // and returns the memory addr
    int *myIntPtr = new int(123);
    cout << *myIntPtr << endl;

    delete myIntPtr;
    myIntPtr = nullptr;

    bool *myBoolPtr = new bool(true);
    cout << boolalpha;
    cout << *myBoolPtr << endl;
    *myBoolPtr = false;
    cout << *myBoolPtr << endl;

    delete myBoolPtr;
    myBoolPtr = nullptr;

    return 0;
}


