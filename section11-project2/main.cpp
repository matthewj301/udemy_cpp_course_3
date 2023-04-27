//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "vector"
#include "algorithm"
#include "Alien.h"

using namespace std;

int main() {
    Alien a1{120, 55, 'm'};
    Alien a2{200, 40, 'f'};
    Alien a3{55, 100, 'm'};
    Alien a4{125, 30, 'f'};

    cout << boolalpha;

    a1.printAttrs();
    a2.printAttrs();
    cout << (a1 == a2) << endl;
    cout << (a1 != a2) << endl;
    cout << (a1 < a2) << endl;
    cout << (a1 < a2) << endl;
    a3.printAttrs();
    a3 = a1;
    a3.printAttrs();

    Alien newDood {a2+a4};
    newDood.printAttrs();




    return 0;
}