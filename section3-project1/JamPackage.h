//
// Created by Matthew Johnson on 11/16/22.
//

#ifndef UDEMY_CPP_COURSE_3_JAMPACKAGE_H
#define UDEMY_CPP_COURSE_3_JAMPACKAGE_H
#include "string"

using namespace std;

class JamPackage {
private:
    string package_name;
    int monthly_cost;
    int jam_quantity;
    int additional_jam_cost;
public:
    explicit JamPackage(const string&);
    ~JamPackage();
    string get_package_name();
    int get_monthly_cost();
    int get_package_jam_quantity();
    int calculate_jam_cost(int &);

};


#endif //UDEMY_CPP_COURSE_3_JAMPACKAGE_H
