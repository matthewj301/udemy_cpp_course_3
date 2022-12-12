//
// Created by Matthew Johnson on 12/11/22.
//

#include "Circle.h"
#include "cmath"

Circle::Circle() {
    this->radius = 1;
}

Circle::Circle(double radius) {
    this->radius = radius;
};

double Circle::getRadius() const {
    return this->radius;
}

void Circle::setRadius(double pRadius) {
    this->radius = pRadius;
}

double Circle::area() const {
    return pi * pow(radius, 2);
}

double Circle::circumference() const {
    return 2 * pi * radius;
}

void Circle::print(const std::string& printType) const {
    if (printType == "area") {
        std::cout << "Area: " << area() << std::endl;
    } else if (printType == "circumference") {
        std::cout << "Circumference: " << circumference() << std::endl;
    } else {
        std::cout << "Radius: " << getRadius() << std::endl;
        std::cout << "Area: " << area() << std::endl;
        std::cout << "Circumference: " << circumference() << std::endl;
    }
    std::cout << std::endl;
}