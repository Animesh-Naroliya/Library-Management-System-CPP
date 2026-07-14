#pragma once

#include<bits/stdc++.h>
using namespace std;

class Person
{
protected:
    int id;
    string name;
    string email;
    string phone;

public:
    // Default Constructor 
    Person();

    Person(int id, const string& name, const string& email, const string& phone);
    virtual ~Person();

    // Setters
    void setId(int id);
    void setName(const string &name);
    void setEmail(const string &email);
    void setPhone(const string &phone);

    //Getters
    int getId() const;
    string getName() const;
    string getEmail() const;
    string getPhone() const;

    // Display
    virtual void display() const;
};