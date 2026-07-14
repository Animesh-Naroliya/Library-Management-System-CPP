#include "Person.h"
#include "Librarian.h"
#include<bits/stdc++.h>

using namespace std;

Librarian::Librarian() : Person()
{
    employeeId = "";
    designation = "";
}

Librarian :: Librarian(int id, const string& name, const string& email, const string& phone, const string& employeeId, const string& designation) :
Person(id, name, email, phone)
{
    this->employeeId = employeeId;
    this->designation = designation;
}

//Setter
void Librarian::setEmployeeId(const string& employeeId)
{
    this->employeeId = employeeId;
}
void Librarian::setDesignation(const string& designation)
{
    this->designation = designation;
}

//Getter
string Librarian::getEmployeeId() const
{
    return employeeId;
}
string Librarian::getDesignation() const
{
    return designation;
}

//Display
void Librarian::display() const
{
    Person::display();
    cout<< "Employee ID    : " << employeeId << endl;
    cout<< "Designation ID : " << designation << endl;
    cout<< "==================================="<< endl;
}