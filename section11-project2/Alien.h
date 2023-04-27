//
// Created by Matthew Johnson on 1/10/23.
//

#ifndef UDEMY_CPP_COURSE_3_ALIEN_H
#define UDEMY_CPP_COURSE_3_ALIEN_H

#include "cctype"
#include <ctime>
#include <cstdlib>
#include "iostream"

using namespace std;

class Alien {
  private:
    int weight;
    int height;
    char gender;
  public:
    Alien(int, int, char);
    int getWeight() const;
    int getHeight() const;
    char getGender() const;
    void printAttrs() const;
    int getPrestige() const;
    bool operator==(Alien &) const;
    bool operator!=(Alien &);
    bool operator>(Alien &);
    bool operator>=(Alien &);
    bool operator<(Alien &);
    bool operator<=(Alien &);
    void operator=(Alien &);
    Alien operator+(Alien &);

};


#endif //UDEMY_CPP_COURSE_3_ALIEN_H
