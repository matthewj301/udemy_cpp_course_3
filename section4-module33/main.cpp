#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    const size_t ARRAY_SIZE {10};
   size_t practice_array[ARRAY_SIZE];
    for (size_t i {0}; i < ARRAY_SIZE; i++) {
       practice_array[i] = i +1;
   }

   for (auto i : practice_array) {
       cout << i << endl;
   }
    return 0;
}
