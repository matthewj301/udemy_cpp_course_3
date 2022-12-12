#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;


int main() {
    int myInt {150};
    int *myIntPtr {&myInt};
    cout << "myInt: " << myInt << endl;
    cout << "Pointer holds value: " << myIntPtr << endl;
    cout << "Pointer dereferenced: " << *myIntPtr << endl;
    *myIntPtr = 200;
    cout << "myInt is now: " << myInt << endl << endl;

    double myDouble {2.324};
    double *myDoublePtr = &myDouble;
    cout << "Content of myDouble: " << myDouble << endl;
    cout << "Address of myDoublePtr: " << myDoublePtr << endl;
    cout << "Content referenced in myDoublePtr: " << *myDoublePtr << endl;
    return 0;
}


