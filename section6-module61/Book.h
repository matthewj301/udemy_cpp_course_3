//
// Created by Matthew Johnson on 12/4/22.
//

#ifndef UDEMY_CPP_COURSE_3_BOOK_H
#define UDEMY_CPP_COURSE_3_BOOK_H

#include "string"

using namespace std;

class Book {
private:
    string author;
    string title;
    string genre;
    int numPages;
public:
    Book(string, string, string, int);

    void print() const;

    string getAuthor() const;

    string getTitle() const;

    string getGenre() const;

    int getNumPages() const;


};


#endif //UDEMY_CPP_COURSE_3_BOOK_H
