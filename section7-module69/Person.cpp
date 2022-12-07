//
// Created by Matthew Johnson on 12/6/22.
//
#include "Person.h"

#include <utility>

Person::Person(string iName) {
    setName(std::move(iName));
}

string Person::getName() const noexcept {
    return name;
}

void Person::setName(string pName) {
    if (pName != "Fred") {
        name = std::move(pName);
    } else {
        throw runtime_error("Fred is not allowed in this place!");
    }
}
