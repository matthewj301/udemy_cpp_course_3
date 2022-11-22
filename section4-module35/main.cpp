#include <iostream>
#include <array>
#include <vector>

using namespace std;


int main() {
    // CAN RESIZE VECTORS, BECAUSE MEMORY IS NOT NECESSARILY ALLOCATED RIGHT NEXT TO EACH OTHER
    vector<int> intVec;
    vector<string> stringVec(3);

    intVec.push_back(1);
    intVec.push_back(5);
    intVec.push_back(17);

    stringVec[0] = "Sally";
    stringVec[1] = "John";
    stringVec[2] = "Matthew";

    for (auto iv: intVec) {
        cout << iv << endl;
    }
    cout << endl;

    for (const auto& sv: stringVec) {
        cout << sv << endl;
    }
    cout << endl;


    // HAVE TO USE PUSH/EMPLACE BACK TO INSERT NEW OBJECTS OUTSIDE OF INITIAL RANGE
    stringVec.emplace_back("Katie");

    for (const auto& sv: stringVec) {
        cout << sv << endl;
    }
    cout << endl;



    return 0;
}
