//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "Rectangle.h"

using namespace std;


int main() {
    Rectangle r1(10, 25);
    Rectangle r2(10, 25);
    Rectangle r3(50, 100);
    Rectangle r4(10, 33);
    Rectangle resultRect;

    resultRect = r1 + r2;
    cout << "r1 == r2? " << boolalpha << (r1 == r2) << endl;
    cout << "resultRect area: " << resultRect.area() << endl;
    cout << "r1 == r3? " << (r1 == r3) << endl;

    cout << "r1 != r4? " << (r1 != r4) << endl;


    return 0;
}