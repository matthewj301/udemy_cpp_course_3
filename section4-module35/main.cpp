#include <iostream>
#include <array>
#include <vector>

using namespace std;


void print_vec(const vector<string>& string_vec) {
    for (const auto& str: string_vec) {
        cout << str << endl;
    }
    cout << endl;
}

int main() {
    // CAN RESIZE VECTORS, BECAUSE MEMORY IS NOT NECESSARILY
    // ALLOCATED RIGHT NEXT TO EACH OTHER
    vector<string> stringVec(3);

    stringVec[0] = "Sally";
    stringVec[1] = "John";
    stringVec[2] = "Matthew";

    print_vec(stringVec);


    // HAVE TO USE PUSH/EMPLACE BACK TO INSERT NEW OBJECTS
    // OUTSIDE OF INITIAL RANGE
    stringVec.emplace_back("Katie");

    print_vec(stringVec);

    stringVec.insert(stringVec.end(), "Jesus");

    print_vec(stringVec);

    stringVec.insert(stringVec.begin() + 1, "Jake");

    print_vec(stringVec);

    stringVec.insert(stringVec.begin(), "Testing");

    print_vec(stringVec);

    return 0;
}
