//
// Created by Matthew Johnson on 12/11/22.
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
    double getLength() const;
    double getWidth() const;

    void setLength(double);
    void setWidth(double);

    double area() const;
    double perimeter() const;

};


#endif //UDEMY_CPP_COURSE_3_RECTANGLE_H
