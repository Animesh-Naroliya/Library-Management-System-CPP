#include "Person.h"
#include<bits/stdc++.h>
using namespace std;

Person::Person()
{
    id = 0;
    name = "";
    email = "";
    phone = "";
}

// Parameterized Constructor 
Person::Person(int id, const string& name, const string &email, const string &phone)
{
    this->id = id;
    this->name = name;
    this->email = email;
    this->phone = phone;
}

//Destructor 

Person::~Person()
{

}

// Setters
void Person::setId(int id)
{
    this->id = id;
}
void Person::setName(const string& name)
{
    this->name = name;
}
void Person::setEmail(const string& email)
{
    this->email = email;
}
void Person::setPhone(const string &phone)
{
    this->phone = phone;
}

//Getters
int Person::getId() const
{
    return id;
}
string Person::getName() const
{
    return name;
}
string Person::getEmail() const
{
    return email;
}
string Person::getPhone() const
{
    return phone;
}
void Person::display() const
{
    cout << "\n========== Person Details ==========\n";
    cout << "ID        :" << id << endl;
    cout << "Name      :" << name << endl;
    cout << "Email     :" << email << endl;
    cout << "Phone     :" << phone << endl;
}