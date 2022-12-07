#include "Person.h"
#include "Dog.h"
#include "stdexcept"
#include "iostream"

int main() {
    try {
    Person matthew("Matthew");
    Person fred("Fred");

    cout << matthew.getName() << endl;
    cout << fred.getName() << endl;
    } catch (const runtime_error &err) {
        cout << err.what() << endl;
    }

    Dog lab("Lab");
    Dog poodle("Poodle");

    return 0;
}


