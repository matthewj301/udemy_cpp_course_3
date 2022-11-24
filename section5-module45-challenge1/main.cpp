#include <iostream>
#include <array>
#include <vector>

using namespace std;

int counter {0};
void modifyGlobal();

int main() {
    for (int i {0}; i < 100; i++) {
        cout << "Counter before function call: " << counter << endl;
        modifyGlobal();
        cout << "Counter after function call: " << counter << endl;
    }
    return 0;
}

void modifyGlobal() {
    counter ++;
}


