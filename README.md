# Library Management System (C++)

## Overview

The Library Management System is a console-based application developed in C++ using Object-Oriented Programming (OOP) principles. The project demonstrates the use of classes, inheritance, encapsulation, polymorphism, constructors, vectors, and menu-driven programming to simulate basic library operations.

---

## Features

* Add new books
* Display all books
* Search books by ID
* Register library members
* Display registered members
* Add librarians
* Display librarian details
* Issue books
* Return books
* Prevent duplicate member and librarian entries

---

## Technologies Used

* C++
* Standard Template Library (STL)
* Object-Oriented Programming (OOP)

### OOP Concepts Implemented

* Classes and Objects
* Inheritance
* Encapsulation
* Polymorphism
* Constructors and Destructors
* Function Overriding

---

## Project Structure

```text
Library-Management-System-CPP/
│
├── Book.h
├── Book.cpp
│
├── Person.h
├── Person.cpp
│
├── Member.h
├── Member.cpp
│
├── Librarian.h
├── Librarian.cpp
│
├── Library.h
├── Library.cpp
│
├── main.cpp
│
└── README.md
```

---

## Class Design

### Book

Stores information related to books.

**Attributes**

* Book ID
* Title
* Author
* Genre
* Publication Year
* Issue Status

**Functions**

* Issue Book
* Return Book
* Display Book Details
* Getters and Setters

---

### Person

Base class representing a person in the library.

**Attributes**

* ID
* Name
* Email
* Phone Number

**Functions**

* Display Details
* Getters and Setters

---

### Member

Derived from the `Person` class.

**Additional Attributes**

* Membership ID
* Number of Books Issued

**Functions**

* Issue Book
* Return Book
* Display Member Details

---

### Librarian

Derived from the `Person` class.

**Additional Attributes**

* Employee ID
* Designation

**Functions**

* Display Librarian Details

---

### Library

Acts as the central management class.

Maintains collections of:

* Books
* Members
* Librarians

Provides operations to:

* Add books
* Search books
* Register members
* Register librarians
* Issue books
* Return books
* Display records

---

## How to Compile

```bash
g++ *.cpp -o library
```

## How to Run

### Linux / macOS

```bash
./library
```

### Windows

```bash
library.exe
```

---

## Sample Menu

```text
========== LIBRARY MANAGEMENT SYSTEM ==========

1. Add Book
2. Display Books
3. Search Book by ID
4. Add Member
5. Display Members
6. Add Librarian
7. Display Librarians
8. Issue Book
9. Return Book
0. Exit
```

---

## Learning Outcomes

This project demonstrates practical implementation of:

* Object-Oriented Programming in C++
* Inheritance and polymorphism
* Class design and modular programming
* STL vectors for managing collections
* Menu-driven console applications
* Multi-file project organization

---

## Future Enhancements

* File handling for persistent storage
* Remove and update records
* Search by title, author, or genre
* Fine calculation for overdue books
* Book borrowing history
* User authentication
* Database integration
* Exception handling and input validation

---

## Author

**Animesh Naroliya**
