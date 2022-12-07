#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {
    vector<int> myNums {};
    try {
        myNums.resize(myNums.max_size() + 1);
    } catch (const length_error& err) {
        cout << "We ran into some issues... Error: " << err.what() << endl;
    }

    for (auto num: myNums) {
        cout << num << endl;
    }

    std::sort(myNums.begin(), myNums.end());

    for (auto num: myNums) {
        cout << num << endl;
    }
    return 0;
}


