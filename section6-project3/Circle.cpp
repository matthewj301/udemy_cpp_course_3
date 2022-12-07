//
// Created by Matthew Johnson on 12/5/22.
//

#include "Circle.h"

Circle::Circle() {
    radius = 1;
}

Circle::Circle(double iRadius) {
    radius = iRadius;
}

double Circle::getRadius() const {
    return radius;
}

void Circle::setRadius(double pRadius) {
    radius = pRadius;
}

double Circle::area() const {
    return pi * pow(radius, 2);
}

double Circle::circumference() const {
    return 2 * pi * radius;
}

void Circle::print(const string& printType) const {
    if (printType == "area") {
        cout << "Area: " << area() << endl;
    } else if (printType == "circumference") {
        cout << "Circumference: " << circumference() << endl;
    } else {
        cout << "Radius: " << getRadius() << endl;
        cout << "Area: " << area() << endl;
        cout << "Circumference: " << circumference() << endl;
    }
    cout << endl;
}
