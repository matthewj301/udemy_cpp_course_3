#include <iostream>
#include <array>
using namespace std;


int main() {
    for (size_t i {0}; i <= 50; i++) {
        if (i % 2 == 0) {
            cout << i << " is even" << endl;
        } else {
            cout << i << " is odd" << endl;
        }
    }
    return 0;
}
