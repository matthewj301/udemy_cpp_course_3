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
    House();
    House(int, int, string);

    ~House();

    void print() const;
    int getNumStories() const;
    int getNumWindows() const;
    string getColor() const;
    void setNumStores(int);
    void setNumWindows(int);
    void setColor(string);
};


#endif //UDEMY_CPP_COURSE_3_HOUSE_H
