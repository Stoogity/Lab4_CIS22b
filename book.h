//
// Created by Jesse Buell on 6/1/20.
//

#ifndef LAB4_JB_BOOK_H
#define LAB4_JB_BOOK_H

#include <iostream>
#include <string>

using namespace std;


class Book {
private:
    int ISBN;
    int quantity;
    string title;
    string author;
    string publisher;
    double dateAdded;
    double wholeSale;
    double retail;

public:
    //Getter and setter for ISBN
    void setISBN(int ISBN);

    int getISBN() const {
        return ISBN;
    }

    //Getter and setter for quantity in stock
    void setQuantity(int Quantity);

    int getQuantity(){
        return quantity;
    }

    //Getter and setter for title
    void setTitle(string title);

    string getTitle(){
        return title;
    }

    //Getter and setter for author
    void setAuthor(string author);

    string getAuthor(){
        return author;
    }

    //Getter and setter for publisher
    void setPublisher(string publisher);

    string getPublisher(){
        return publisher;
    }

    //Getter and setter for dateAdded
    void setDateAdded(double dateAdded);

    double getDateAdded(){
        return dateAdded;
    }

    //Getter and setter for wholesale price
    void setWholeSale(double wholeSale);

    double getWholeSale(){
        return wholeSale;
    }

    //Getter and setter for retail price
    void setRetail(double retail);

    double getRetail(){
        return retail;
    }








};


#endif //LAB4_JB_BOOK_H
