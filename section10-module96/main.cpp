//
// Created by Matthew Johnson on 12/14/22.
//
#include "iostream"
#include "vector"

using namespace std;

int main() {
    enum Direction {
        STANDING, UP, DOWN, LEFT, RIGHT
    };
    vector<Direction> directions{STANDING, DOWN, UP, LEFT, DOWN, UP, LEFT};

    for (auto curDir: directions) {
        if (curDir == STANDING) {
            cout << "we did not move!" << endl;
        } else if (curDir == UP) {
            cout << "up!" << endl;
        } else if (curDir == DOWN) {
            cout << "down!" << endl;
        } else if (curDir == LEFT) {
            cout << "left!" << endl;
        } else if (curDir == RIGHT) {
            cout << "right!" << endl;
        }

    }


    return 0;
}