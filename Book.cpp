#include "Book.h"
#include <bits/stdc++.h>

using namespace std;

Book::Book() // definition of constructor 
{
    id = 0;
    title = "";
    author = "";
    genre = "";
    publicationYear = 0;
    issued = false;
}

Book::Book(int id,
    const string& title, 
    const string& author, 
    const string& genre, 
    int publicationYear)
{
    this->id = id;
    this->title = title;
    this->author = author;
    this->genre = genre;
    this->publicationYear = publicationYear;
    issued = false;
}

// Setters are mostly void because we are just focusing on difference of local variable and function variable.
void Book::setId(int id)
{
    this->id = id;
}
void Book::setTitle(const string &title)
{
    this->title = title;
}
void Book::setAuthor(const string &author)
{
    this->author = author;
}
void Book::setGenre(const string &genre)
{
    this->genre = genre;
}
void Book::setPublicationYear(int publicationYear)
{
    this->publicationYear = publicationYear;
}

//Getters return exactly the return type that your function variable has.
int Book::getId() const // here const play a very important role it tells that no other changes are allowed in this specific function 
{
    return id; // this return id is exactly like writing return this->id;
}
string Book::getTitle() const
{
    return title;
}
string Book::getAuthor() const
{
    return author;
}
string Book::getGenre() const
{
    return genre;
}
int Book::getPublicationYear() const
{
    return publicationYear;
}
bool Book::isIssued() const
{
    return issued;
}

//Issue Book
void Book::issueBook()
{
    issued = true;
}

//Return Book
void Book::returnBook()
{
    issued = false;
}

//Display the Book

void Book::displayBook() const
{
    cout<< "\n-----------------------------\n";
    cout<< "Book ID : " << id << endl;
    cout<< "Title   : " << title << endl;
    cout<< "Author  : " << author <<endl;
    cout<< "Genre   : " << genre << endl;
    cout<< "Year    : " << publicationYear << endl;
    cout<< "Status  : ";

    if(issued) 
    {
        cout<< "Issued";
    }
    else
    {
        cout<<"Available";
    }
    cout<<endl;
    cout<< "\n-----------------------------\n";
}