//
// Created by Matthew Johnson on 12/4/22.
//

#ifndef UDEMY_CPP_COURSE_3_RECTANGLE_H
#define UDEMY_CPP_COURSE_3_RECTANGLE_H


class Rectangle {
private:
    double length;
    double width;
public:
    Rectangle();

    Rectangle(double, double);

    ~Rectangle();

    double getLength() const;

    double getWidth() const;

    void setLength(double);

    void setWidth(double);

    double area() const;

    double perimeter();
};


#endif //UDEMY_CPP_COURSE_3_RECTANGLE_H
