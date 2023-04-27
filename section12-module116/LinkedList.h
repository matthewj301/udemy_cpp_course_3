//
// Created by Matthew Johnson on 2/8/23.
//

#ifndef UDEMY_CPP_COURSE_3_LINKEDLIST_H
#define UDEMY_CPP_COURSE_3_LINKEDLIST_H

#include "iostream"
#include "List.h"

// ---- Node Class ----//
class Node {
  private:
    int data;
    Node *next;
  public:
    Node(int data, Node *next) {
        this->data = data;
        this->next = next;
    }

    int getData() const {
        return this->data;
    }

    void setData(int data) {
        this->data = data;
    }

    Node *getNext() const {
        return next;
    }

    void setNext(Node *next) {
        this->next = next;
    }
};

// ---- Linked List ---//

class LinkedList : public List {
  private:
    Node *mHead;
    int mNumElements;
  public:
    LinkedList() {
        mNumElements = 0;
        mHead = nullptr;
    }

    virtual ~LinkedList() {
        makeEmpty();
    }

    void add(int newEntry) {
        Node *newNode = new Node(newEntry, mHead); // next = mHead
        mHead = newNode;
        mNumElements++;
    }

    void add(int newEntry, int position) {
        Node* newNode = new Node(newEntry, mHead);
        if (position >= mNumElements + 1 || position < 0) {
            std::cout << "Error: Cannot add at specified index" << std::endl;
            return;
        }
        if (position == 0) {
            newNode->setNext(mHead);
            mHead = newNode;
        } else {
            Node* nodeBefore = mHead;
            Node* nodeAfter;
            for (int i {0}; i < position - 1; i++) {
                nodeBefore = nodeBefore->getNext();
            }
            nodeAfter = nodeBefore->getNext();
            newNode->setNext(nodeAfter);
            nodeBefore->setNext(newNode);
        }
        mNumElements++;
    }

    void set(int newEntry, int position) {}

    bool contains(int entry) const {
        return 0;
    }
    
    int find(int entry) const {
        return 0;
    }

    int remove(int position) {
        return 0;
    }

    void makeEmpty() {}

    int size() const {
        return 0;
    }

    bool isEmpty() const {
        return false;
    }

    void printList() const {}
};


#endif //UDEMY_CPP_COURSE_3_LINKEDLIST_H
