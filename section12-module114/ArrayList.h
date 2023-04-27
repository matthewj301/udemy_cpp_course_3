//
// Created by Matthew Johnson on 1/29/23.
//

#ifndef UDEMY_CPP_COURSE_3_ARRAYLIST_H
#define UDEMY_CPP_COURSE_3_ARRAYLIST_H

#include "iostream"
#include "List.h"

using namespace std;

class ArrayList : public List {
  private:
    int *mArray;
    const int MAX_SIZE;
    int mNumElements;
  public:
    ArrayList(int s = 16) : MAX_SIZE(s) {
        mArray = new int[MAX_SIZE];
        mNumElements = 0;
    }

    void add(int newEntry) {
        if (mNumElements >= MAX_SIZE) {
            cout << "Cannot add any more elements. List is full" << endl;
        }
        mArray[mNumElements] = newEntry;
        mNumElements++;

    }

    void add(int newEntry, int position) {
        if (mNumElements >= MAX_SIZE) {
            cout << "Cannot add any more elements. List is full" << endl;
        }
        if (position < 0 || position > mNumElements) {
            cout << "Can't add, out of range" << endl;
        }
        for (int i = mNumElements; i > position; i--) {
            mArray[i] = mArray[i-1];
        }
        mArray[position] = newEntry;
        mNumElements++;
    }

    void set(int newEntry, int position) {
if (position < 0 || position > mNumElements) {
            cout << "Can't add, out of range for setting position." << endl;
        }
        mArray[position] = newEntry;
    }

    bool contains(int entry) const {
        bool found {false};
        for (int i {0}; i < mNumElements; i++) {
            if (mArray[i] == entry) {
                found = true;
                break;
            }
        }
        return found;
    }

    int find(int entry) const {
        int foundIndex {-1};
        for (int i {0}; i < mNumElements; i++) {
            if (mArray[i] == entry) {
                foundIndex = i;
                break;
            }
        }
        return foundIndex;
    }

    int remove(int position) {
        int value {-1};
        if (position < 0 || position >= mNumElements) {
            cout << "Position to remove is out of range" << endl;
            return value;
        }
        value = mArray[position];
        // close the "gap" and reduce mNumElements

        for (int i {position}; i < mNumElements - 1; i++) {
            mArray[i] = mArray[i+1];
        }
        mNumElements--;
        return value;
    }

    void makeEmpty() {
        mNumElements = 0;
    }

    int size() const {
        return mNumElements;
    }

    bool isEmpty() const {
        return mNumElements == 0;
    }

    void printList() const {
        for (int i {0}; i < mNumElements; i++) {
            cout << mArray[i] << endl;
        }
    }
};

#endif //UDEMY_CPP_COURSE_3_ARRAYLIST_H
