//
// Created by Matthew Johnson on 1/8/23.
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

    double getWidth() const;

    double getLength() const;

    void setWidth(double);

    void setLength(double);

    double area() const;

    double perimeter() const;

    bool operator==(const Rectangle &) const;

    bool operator!=(const Rectangle &) const;

    Rectangle operator+(const Rectangle &) const;

    void operator=(const Rectangle &);

};


#endif //UDEMY_CPP_COURSE_3_RECTANGLE_H
