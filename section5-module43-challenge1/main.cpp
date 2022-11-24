#include <iostream>
#include <array>
#include <vector>

using namespace std;

int square(int &);

int main() {
    int num = 2;
    int sqr_return = square(num);
    cout << sqr_return;
    return 0;
}

int square(int &num_to_square) {
    return num_to_square * num_to_square;
}
