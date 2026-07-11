#pragma once
#include "Person.h"
#include<bits/stdc++.h>
using namespace std;

class Member : public Person
{
private:
    string membershipId;
    int booksIssued;

public:
    Member();

    Member(int id, const string& name, const string &email, const string& phone, const string& membershipId);

    // Setters
    void setMembershipId(const string& setMembershipId);
    void setBooksIssued(int booksIssued);
    
    //Getters
    string getMembershipId() const;
    int getBooksIssued() const;
    
    //Book Management
    void issueBook();
    void returnBook();
    
    void display() const override;
};