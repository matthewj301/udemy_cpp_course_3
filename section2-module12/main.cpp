#include <iostream>
#include <stdlib.h>
#include "time.h"

int main() {
    srand (time(NULL));
    int random_sun = rand() % 20 + 1;
    std::cout << random_sun << std::endl;
    bool sunny {random_sun % 2 == 0};
    bool warm;
    if (sunny) {
        warm = true;
    } else {
        warm = false;
    }
    std::cout << std::boolalpha;
    std::cout << "Is it sunny? " << sunny << std::endl;
    std::cout << "Is it warm? " << warm << std::endl;
    return 0;
}
