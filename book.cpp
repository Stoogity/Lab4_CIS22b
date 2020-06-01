//
// Created by Jesse Buell on 6/1/20.
//

#include "book.h"


int Book::getISBN() const {
    return ISBN;
}

void Book::setISBN(int ISBN) {
    ISBN = ISBN;
}

int Book::getQuantity() const {
    return quantity;
}

void Book::setQuantity(int quantity) {
    quantity = quantity;
}

string Book::getTitle(string title) {
    return title;
}

void Book::setTitle(string title) {
    title = title;
}

string Book::getAuthor() {
    return author;
}

void Book::setAuthor(string author) {
    author = author;
}

string Book::getPublisher() {
    return publisher;
}

void Book::setPublisher(string publisher) {
    publisher = publisher;
}

double Book::getDateAdded() {
    return dateAdded;
}

void Book::setDateAdded(double dateAdded) {
    dateAdded = dateAdded;
}


