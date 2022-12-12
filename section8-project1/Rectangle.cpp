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

Rectangle::~Rectangle() = default;

double Rectangle::getLength() const {
    return this->length;
}

double Rectangle::getWidth() const {
    return this->width;
}

void Rectangle::setWidth(double pWidth) {
    this->width = pWidth;
}

void Rectangle::setLength(double pLength) {
    this->length = pLength;
}

double Rectangle::area() const {
    return this->length * this->width;
}

double Rectangle::perimeter() const {
    return (this->length * 2) + (this->width * 2);
}