//
// Created by Matthew Johnson on 12/5/22.
//
#include "Circle.h"


int main() {
    Circle c1 {7.4};
    c1.print("area");
    c1.setRadius(3.4);
    c1.print("all");

    Circle c2 {};
    c2.print("circumference");
    cout << c2.getRadius();
    return 0;
}