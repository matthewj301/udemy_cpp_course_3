#include <iostream>
#include "string"
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    size_t die_value;
    size_t roll_count {10};

    for (size_t i {1}; i <= roll_count; i++) {
        die_value = rand() % 6 + 1;
        cout << die_value << endl;
    }

    return 0;
}
