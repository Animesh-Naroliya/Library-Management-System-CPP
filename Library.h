#pragma once

#include<bits/stdc++.h>
#include "Book.h"
#include "Member.h"
#include "Librarian.h"

using namespace std;

class Library
{
private:
    vector<Book> books;
    vector<Member> members;
    vector<Librarian>librarians;

public:
    //Book functions
    void addBook(const Book& book);
    void displayBooks() const;
    void searchBookById(int id) const;

    //Member functions
    void addMember(const Member& member);
    void displayMembers() const;

    //Librarian functions
    void addLibrarian(const Librarian& librarian);
    void displayLibrarians() const;

    //Library Operations
    void issueBook(int bookId);
    void returnBook(int bookId);
};