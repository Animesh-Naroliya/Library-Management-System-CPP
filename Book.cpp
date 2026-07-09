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
