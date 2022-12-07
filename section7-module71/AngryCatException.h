//
// Created by Matthew Johnson on 12/6/22.
//

#ifndef UDEMY_CPP_COURSE_3_ANGRYCATEXCEPTION_H
#define UDEMY_CPP_COURSE_3_ANGRYCATEXCEPTION_H

#include "stdexcept"
using namespace std;

class AngryCatException : public runtime_error {
  public:
    AngryCatException() : runtime_error("Made kitty angry!"){}
    AngryCatException(const string& funError) : runtime_error(funError){}
};

#endif //UDEMY_CPP_COURSE_3_ANGRYCATEXCEPTION_H
