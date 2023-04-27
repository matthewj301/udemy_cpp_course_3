//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "string"
#include "Car.h"

using namespace std;



int main() {
    auto myCar = make_unique<Car>("Red", 4);
    cout << myCar->getColor() << endl;
    cout << myCar->getNumDoors();

    return 0;
}