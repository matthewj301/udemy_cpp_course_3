#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

// non-constant pointer to non-constant data
void noConst2ncd();
// constant pointer to non-constant data
void cp2ncd();
// non-constant pointer to constant data
void ncp2cd();
// constant pointer to constaint data
void cp2cd();

void noChange(const double * const);

int main() {
    noConst2ncd();
    cout << endl;

    cp2cd();
    cout << endl;

    ncp2cd();
    cout << endl;

    cp2cd();
    cout << endl;

    auto *doublePtr = new double(2.34);
    noChange(doublePtr);
    delete doublePtr;
    doublePtr = nullptr;

    return 0;
}

// non-constant pointer to non-constant data
void noConst2ncd() {
cout << "In noConst" << endl;

int *intPtr = new int(50);
cout << "\toriginal value: " << *intPtr << endl;

*intPtr = 100;
cout << "\tchange data: " << *intPtr << endl;

delete intPtr;

intPtr = new int(125);
cout << "\tnew integer entirely: " << *intPtr << endl;

delete intPtr;

}
// constant pointer to non-constant data
void cp2ncd() {
    cout << "In cp2ncd" << endl;
    int *const intPtr = new int(100); // Read from right to left
                                      // constant pointer to an integer
    cout << "\toriginal value: " << *intPtr << endl;

    // Can we do this? Yes, because it is a constant pointer, pointing to
    // non-constant data. pointer does not change, the data does
    *intPtr = 250;
    cout << "\tnew integer value: " << *intPtr << endl;

    delete intPtr;

    //intPtr = new int(222) ERROR! ptr is constant

}
// pointer is not constant (can be changed)
// data is constant (cannot be changed)
void ncp2cd() {
    cout << "In ncp2cd" << endl;
    const int *intPtr = new int(500); // Read from right to left
                                      // <-- pointer to a constant int
   cout << "\toriginal value: " << *intPtr << endl;
   delete intPtr;

   intPtr = new int(100); // Ok bc new pointer
   // *intPtr = 1500; ERROR! data is constant, so cannot reassign to new value

   delete intPtr;

}
// constant pointer to constaint data
void cp2cd() {

    const int *const intPtr = new int(1500);
    cout << "Inside cp2cd" << endl;
    cout << "\toriginal value: " << *intPtr << endl;

    // no changes allowed here
    // *intPtr = 1212; ERROR! data is constant
    // intPtr = new int(1212); ERROR1 - pointer is constant
    delete intPtr;
}

void noChange(const double * const doublePtr) {
    cout << "In noChange" << endl;
    cout << *doublePtr << endl;
}

