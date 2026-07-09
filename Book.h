#pragma once

#include <bits/stdc++.h>
using namespace std;

class Book
{
    private:
    int id;
    string title; 
    string author;
    string genre;
    int publicationYear;
    bool issued;

    public:

    Book(); // Default Constructor
    Book(int id, const string &title, const string &author, const string& genre, int publicationYear);

    void setId(int id);
    void setTitle(const string& title);
    void setAuthor(const string& author);
    void setGenre(const string& genre);
    void setPublicationYear(int year);

    int getId() const;
    string getTitle() const;
    string getAuthor() const;
    string getGenre() const;
    int getPublicationYear() const;
    bool isIssued() const;

    void issueBook();
    void returnBook();

    void displayBook() const;
};