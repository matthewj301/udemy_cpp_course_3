//
// Created by Matthew Johnson on 1/29/23.
//

#ifndef UDEMY_CPP_COURSE_3_LIST_H
#define UDEMY_CPP_COURSE_3_LIST_H

class List {
  public:
    virtual void add(int newEntry) = 0; // pure virtual function
    virtual void add(int newEntry, int position) = 0;
    virtual void set(int newEntry, int position) = 0;

    virtual bool contains(int entry) const = 0;
    virtual int find(int entry) const = 0;
    virtual int remove(int position) = 0;
    virtual void makeEmpty() = 0;

    virtual int size() const = 0;
    virtual bool isEmpty() const = 0;
    virtual void printList() const = 0;
};

#endif //UDEMY_CPP_COURSE_3_LIST_H
