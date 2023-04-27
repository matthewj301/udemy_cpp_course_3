//
// Created by Matthew Johnson on 1/8/23.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    this->width = 5;
this->length = 5;
}

Rectangle::Rectangle(double length, double width) {
    this->width = width;
this->length = length;
}

double Rectangle::getWidth() const {
    return this->width;
}

double Rectangle::getLength() const {
    return this->length;
}

void Rectangle::setWidth(double passedWidth) {
    this->width = passedWidth;
}

void Rectangle::setLength(double passedLength) {
    this->length = passedLength;
}

double Rectangle::area() const {
    return this->width*this->length;
}

double Rectangle::perimeter() const {
    return (this->length * 2) + (this->width * 2);
}