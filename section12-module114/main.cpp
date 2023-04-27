//
// Created by Matthew Johnson on 1/13/23.
//
#include "iostream"
#include "ArrayList.h"

using namespace std;

int main() {

        ArrayList myList;
        for (int i {0}; i < 15; i++) {
            myList.add(i * 10);
        }
        myList.printList();

        cout << endl << endl;

        cout << "size is " << myList.size() << endl << endl;
        myList.add(555, 15);

        myList.printList();
        cout << "Size is now " << myList.size() << endl << endl;

        myList.set(987, 3);
        myList.printList();

        myList.add(123);

    return 0;
}