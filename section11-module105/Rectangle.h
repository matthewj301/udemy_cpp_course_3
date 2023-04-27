//
// Created by Matthew Johnson on 1/8/23.
//

#ifndef UDEMY_CPP_COURSE_3_RECTANGLE_H
#define UDEMY_CPP_COURSE_3_RECTANGLE_H


class Rectangle {
    friend void changeData(Rectangle &);
    friend void printData(Rectangle &);

  private:
    double length;
    double width;
  public:
    Rectangle();

    Rectangle(double, double);

    double getWidth() const;

    double getLength() const;

    void setWidth(double);

    void setLength(double);

    double area() const;

    double perimeter() const;


};


#endif //UDEMY_CPP_COURSE_3_RECTANGLE_H
