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
    vector<string> stringVec(5);

    stringVec[0] = "Sally";
    stringVec[1] = "John";
    stringVec[2] = "Matthew";
    stringVec[3] = "Katie";
    stringVec[4] = "Fred";

    stringVec[3] = "John Braugh";


    print_vec(stringVec);







    return 0;
}
