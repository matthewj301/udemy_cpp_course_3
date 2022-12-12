//
// Created by Matthew Johnson on 12/11/22.
//

#ifndef UDEMY_CPP_COURSE_3_CIRCLE_H
#define UDEMY_CPP_COURSE_3_CIRCLE_H
#include "string"
#include "iostream"
const double pi {3.141};

class Circle {
  private:
    double radius;
  public:
    Circle();
    Circle(double );

    double getRadius() const;
    void setRadius(double);

    double circumference() const;
    double area() const;
    void print(const std::string&) const;

};


#endif //UDEMY_CPP_COURSE_3_CIRCLE_H
