//
// Created by Matthew Johnson on 12/4/22.
//

#ifndef UDEMY_CPP_COURSE_3_HOUSE_H
#define UDEMY_CPP_COURSE_3_HOUSE_H
#include <string>

using namespace std;


class House {
private:
    int numStories;
    int numWindows;
    string color;
public:
    void print() const;
    int getNumStories() const;
    int getNumWindows() const;
    string getColor() const;
    void setNumStores(int numStories);
    void setNumWindows(int numWindows);
    void setColor(string color);
};


#endif //UDEMY_CPP_COURSE_3_HOUSE_H
