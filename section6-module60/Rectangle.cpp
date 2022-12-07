//
// Created by Matthew Johnson on 12/4/22.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 5;
    width = 8;
}

Rectangle::Rectangle(double passedLength, double passedWidth) {
    length = passedLength;
    width = passedWidth;
}

Rectangle::~Rectangle() =default;

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

void Rectangle::setLength(double passedLen) {
    length = passedLen;
}

void Rectangle::setWidth(double passedWidth) {
    width = passedWidth;
}

double Rectangle::area() const {
    return length * width;
}

double Rectangle::perimeter() {
    return (length * 2) + (width * 2);
}