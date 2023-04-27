//
// Created by Matthew Johnson on 1/8/23.
//

#ifndef UDEMY_CPP_COURSE_3_DICTIONARY_H
#define UDEMY_CPP_COURSE_3_DICTIONARY_H
#include "map"
#include "string"
#include "iostream"

using namespace std;

class Dictionary {
  private:
    map<string, string> dictionary;
  public:
    Dictionary();
    void addDefinition(string, string);
    string getDefinition(string) const;
    void printAll() const;



};


#endif //UDEMY_CPP_COURSE_3_DICTIONARY_H
