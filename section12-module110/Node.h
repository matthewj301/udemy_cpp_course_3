//
// Created by Matthew Johnson on 1/13/23.
//

#ifndef UDEMY_CPP_COURSE_3_NODE_H
#define UDEMY_CPP_COURSE_3_NODE_H

class Node {
  private:
    int data;
    Node *next;
  public:
    Node(int data, Node *next) {
        this->data = data;
        this->next = next;
    }

    void setData(int data) {
        this->data = data;

    }

    void setNext(Node *next) {
        this->next = next;

    }

    int getData() const {
        return this->data;

    }

    Node *getNext() const {
        return this->next;

    }
};

#endif //UDEMY_CPP_COURSE_3_NODE_H
