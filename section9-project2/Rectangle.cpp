//
// Created by Matthew Johnson on 12/11/22.
//

#include "Rectangle.h"

Rectangle::Rectangle() {
    this->length = 1;
    this->width = 1;
}

Rectangle::Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
}

double Rectangle::getLength() const {
    return this->length;
}

double Rectangle::getWidth() const {
    return this->width;
}

void Rectangle::setLength(double pLength) {
    this->length = pLength;
}

void Rectangle::setWidth(double pWidth) {
    this->width = pWidth;
}

double Rectangle::area() const {
    return this->length * this->width;
}

double Rectangle::perimeter() const {
    return 2 * this->length + 2 * this->width;

}