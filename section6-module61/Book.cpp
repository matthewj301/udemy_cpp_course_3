//
// Created by Matthew Johnson on 12/4/22.
//

#include "Book.h"
#include "string"
#include "iostream"

using namespace std;

Book::Book(string pAuthor, string pTitle, string pGenre, int pNumPages) {
    author = pAuthor;
    title = pTitle;
    genre = pGenre;
    numPages = pNumPages;
}

void Book::print() const {
    cout << "Author: " << author << endl;
    cout << "Title: " << title << endl;
    cout << "Genre: " << genre << endl;
    cout << "Number of pages: " << numPages << endl;
}

string Book::getAuthor() const {
    return author;
}

string Book::getTitle() const {
    return title;
}

string Book::getGenre() const {
    return genre;
}

int Book::getNumPages() const {
    return numPages;
}