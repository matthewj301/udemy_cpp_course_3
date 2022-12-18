//
// Created by Matthew Johnson on 12/12/22.
//
#include "Animal.h"
#include "Dog.h"
#include "iostream"


int main() {
    //Animal tester("Katie", 15.3);
    Dog test("Rover", 85, "Greyhound");
    Animal* dogPtr = new Dog("Fido", 120, "Golden Retriever");
cout << endl << "DOG POINTER" << endl;
    cout << "Make noise? " << dogPtr->makeNoise() << endl;

    //cout << endl << "ANIMAL OBJECT" << endl;
    //cout << tester.getName() << endl;
    //cout << tester.getWeight() << endl;
    //cout << tester.makeNoise() << endl;


    cout << endl << "DOG OBJECT" << endl;
    cout << "Dog's name: " << test.getName() << endl;
    cout << "Dog's weight: " << test.getWeight() << endl;
    cout << "Dog's noise: " << test.makeNoise() << endl;
    test.chaseCat();
    test.digHole();
    cout << "Dog eating: " << test.eat() << endl;

    cout << endl << "DOG POINTER" << endl;
    cout << "Make noise? " << dogPtr->makeNoise() << endl;
    cout << "Another dog eating! " << dogPtr->eat() << endl;

    delete dogPtr;
    dogPtr = nullptr;
    return 0;
}