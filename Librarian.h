#pragma once
#include "Person.h"
#include<bits/stdc++.h>

using namespace std;

class Librarian : public Person
{
private:
    string employeeId;
    string designation;

public:

    Librarian();

    Librarian(int id, const string& name, const string& email, const string& phone, const string& employeeId,
              const string& designation);
            
    // Setters
    void setEmployeeId(const string& employeeId);
    void setDesignation(const string& designation);

    //Getters
    string getEmployeeId() const;
    string getDesignation() const;

    //Display
    void display() const override;
};