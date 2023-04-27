//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "Dictionary.h"

using namespace std;



int main() {
    Dictionary userDict;
    userDict.addDefinition("hello", "a greeting");
    userDict.addDefinition("fish", "a type of animal");
    cout << userDict.getDefinition("bird") << endl;
    cout << userDict.getDefinition("fish") << endl;
    userDict.printAll();
    return 0;
}