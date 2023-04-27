//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "Rectangle.h"

using namespace std;


int main() {
    Rectangle r1(10, 25);
    cout << "r1 area: " << r1.area() << endl;

    printData(r1);
    changeData(r1);

    cout << "r1 new area after friend function call: " << r1.area() << endl;
    printData(r1);

    return 0;
}

void changeData(Rectangle& rect) {
    rect.width = 100;
    rect.length = 100;
}

void printData(Rectangle& rect) {
    cout << "rectangle length: " << rect.length << endl;
    cout <<"rectangle width: " << rect.width << endl;
}