#include <iostream>
#include <vector>
#include <stdexcept>
#include "Dog.h"

using namespace std;


int main() {
    Dog *myDogPtr = new Dog("Cosmo", "Chocolate Lab");
    Dog *yourDogPtr = new Dog("Thor", "Black Lab");

    cout << "using arrow member access" << endl;
    cout << myDogPtr->getName() << " - " << myDogPtr->getBreed() << endl;
    cout << yourDogPtr->getName() << " - " << yourDogPtr->getBreed() << endl;

    cout << endl;

    cout << "using dereferencing and the dot operator" << endl;
    cout << (*myDogPtr).getName() << " - " << (*myDogPtr).getBreed() << endl;
    cout << (*yourDogPtr).getName() << " - " << (*yourDogPtr).getBreed() << endl;

    delete myDogPtr;
    delete yourDogPtr;

    myDogPtr = nullptr;
    yourDogPtr = nullptr;


    cout << "USING ARRAY REFERENCES" << endl;

    const int ARR_SIZE = 15;
    int *myArray = new int[ARR_SIZE];
    for (int i{0}; i < ARR_SIZE; i++) {
        // No dereferencing needed - bc arrays are already objs of contiguous memory
        myArray[i] = i * 2;
    }

    for (int i{0}; i < ARR_SIZE; i++) {
        cout << myArray[i] << endl;
    }

    delete[] myArray;

    return 0;
}


