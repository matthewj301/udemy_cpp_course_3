#include <iostream>
#include <array>
#include <vector>

using namespace std;

void threeTimesN(int, int &);

int main() {
    int multiplier {3};
    int outputVal {0};
    cout << "Initial multiplier: " << multiplier << endl;
    cout << "Initial outputVal: " << outputVal << endl;
    threeTimesN(multiplier, outputVal);
    cout << "multiplier after threeTimesN function call: " << multiplier << endl;
    cout << "outputVal after threeTimesN function call: " << outputVal << endl;
    return 0;
}

void threeTimesN(int multiplier, int &refVal) {
    refVal =  multiplier * 3;
}

