//
// Created by Matthew Johnson on 1/8/23.
//

#ifndef UDEMY_CPP_COURSE_3_CAR_H
#define UDEMY_CPP_COURSE_3_CAR_H
#include "string"

using namespace std;

class Car {
  private:
    string color;
    int numDoors;
  public:
    Car(string, int);
    string getColor() const;
    int getNumDoors() const;


};


#endif //UDEMY_CPP_COURSE_3_CAR_H
