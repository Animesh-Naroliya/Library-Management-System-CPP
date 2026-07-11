#include<bits/stdc++.h>
#include "Person.h"
#include "Member.h"

using namespace std;

Member::Member() : Person()
{
    membershipId = "";
    booksIssued = 0;
}

Member::Member(int id, const string& name, const string& email, const string& phone, const string& membershipId)
: Person(id, name, email, phone)
{
    this->membershipId = membershipId;
    this->booksIssued = 0;
}

//Setters
void Member::setMembershipId(const string& membershipId)
{
    this->membershipId = membershipId;
}
void Member::setBooksIssued(int booksIssued)
{
    this->booksIssued = booksIssued;
}

//Getters
string Member::getMembershipId() const
{
    return membershipId;
}
int Member::getBooksIssued() const
{
    return booksIssued;
}

//Issue a Book
void Member::issueBook()
{
    booksIssued++;
}
void Member::returnBook()
{
    if(booksIssued > 0)
    {
        booksIssued--;
    }
}

//Display Member Details
void Member::display() const
{
    Person::display();
    
    cout<< "Membership ID : " << membershipId <<endl;
    cout<< "Books Issued  : " << booksIssued <<endl;
    cout<<"=======================================" <<endl;
}