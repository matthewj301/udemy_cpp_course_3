#include <iostream>
#include <vector>
#include <stdexcept>
#include "WarpDriveOverheating.h"

using namespace std;


void testWarpException(int);

int main() {
    const int testCases[5]{20, 84, 23332, 66};

    for (auto test: testCases) {
        try {
            testWarpException(test);
        } catch (const WarpDriveOverheating &err) {
            cout << err.what() << endl;
        }
    }
    return 0;
}

void testWarpException(int temp) {
    if (temp > 80) {
        throw WarpDriveOverheating();
    } else {
        cout << "All systems are go!" << endl;
    }
}