//
// Created by Matthew Johnson on 11/16/22.
//

#include "JamPackage.h"

JamPackage::JamPackage(const string &name) {
    if (name == "B") {
        package_name = "B";
        monthly_cost = 12;
        jam_quantity = 4;
        additional_jam_cost = 4;
    } else if (name == "C") {
        package_name = "C";
        monthly_cost = 15;
        jam_quantity = 6;
        additional_jam_cost = 3;
    } else {
        package_name = "A";
        monthly_cost = 8;
        jam_quantity = 2;
        additional_jam_cost = 5;
    }
}

JamPackage::~JamPackage() = default;

string JamPackage::get_package_name() {
    return this->package_name;
}

int JamPackage::get_monthly_cost() {
    return this->monthly_cost;
}

int JamPackage::get_package_jam_quantity() {
    return this->jam_quantity;
}

int JamPackage::calculate_jam_cost(int &total_jams) {
    int final_cost{this->monthly_cost};
    for (int i{0}; i <= total_jams; i++) {
        if (i > this->jam_quantity) {
            final_cost += this->additional_jam_cost;
        }
    }
    return final_cost;
}
