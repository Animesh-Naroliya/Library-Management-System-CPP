#include <bits/stdc++.h>
#include "Library.h"

using namespace std;

//Book Functions
void Library::addBook(const Book& book)
{
    books.push_back(book);
    cout<<"Book added successfully."<<endl;
}

void Library::displayBooks() const
{
    if(books.empty())
    {
        cout<<"No Books available."<<endl;
        return;
    }
    for(const Book& book : books)
    {
        book.displayBook();
    }
}

void Library::searchBookById(int id) const
{
    for(const Book& book : books)
    {
        if(book.getId() == id)
        {
            book.displayBook();
            return;
        }
    }
    cout<<"Book not found."<<endl;
}

// Member Functions
void Library::addMember(const Member& member)
{
    if(members.find(member) != members.end())
    {
        cout<<"Member already exist."<<endl;
    }
    else
    {
        members.push_back(member);
        cout<<"Member added successfully."<<endl;
    }
}
void Library::displayMembers() const
{
    if(members.empty())
    {
        cout<<"No members registered." <<endl;
        return;
    }
    for(const Member& member:members)
    {
        member.display();
        cout<<endl;
    }
}
//Librarian Functions
void Library::addLibrarian(const Librarian& librarian)
{
    librarians.push_back(librarian);
    cout<<"Librarian added successfully.";
}
void Library::displayLibrarians() const
{
    if(librarians.empty()) 
    {
        cout<<"No librarians available."<<endl;
        return;
    }
    for(const Librarian& librarian:librarians)
    {
        librarian.display();
        cout<<endl;
    }
}