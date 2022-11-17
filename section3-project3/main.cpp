#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    srand(time(nullptr));
    size_t random_number = rand() % 100 + 1;
    size_t user_guess {0};
    size_t user_guess_count {0};
    while (user_guess != random_number) {
        cout << "Guess a number between 1 and 100: ";
        cin >> user_guess;
        user_guess_count++;
        cout << "Guess count: " << user_guess_count << endl;
        if (user_guess > random_number) {
            cout << "Too high!" << endl;
        } else if (user_guess < random_number) {
            cout << "Too low!" << endl;
        } else {
            cout << "You got it!" << endl;
        }
    }

    return 0;
}
