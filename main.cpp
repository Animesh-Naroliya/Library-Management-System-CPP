#include <bits/stdc++.h>
#include "Library.h"

using namespace std;

int main()
{
    Library library;
    int choice;

    do
    {
        cout << "\n========== LIBRARY MANAGEMENT SYSTEM ==========\n";
        cout << "1. Add Book\n";
        cout << "2. Display Books\n";
        cout << "3. Search Book by ID\n";
        cout << "4. Add Member\n";
        cout << "5. Display Members\n";
        cout << "6. Add Librarian\n";
        cout << "7. Display Librarians\n";
        cout << "8. Issue Book\n";
        cout << "9. Return Book\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id, year;
            string title, author, genre;

            cout << "Enter Book ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Title: ";
            getline(cin, title);

            cout << "Enter Author: ";
            getline(cin, author);

            cout << "Enter Genre: ";
            getline(cin, genre);

            cout << "Enter Publication Year: ";
            cin >> year;

            Book book(id, title, author, genre, year);
            library.addBook(book);
            break;
        }

        case 2:
        {
            library.displayBooks();
            break;
        }

        case 3:
        {
            int id;

            cout << "Enter Book ID to Search: ";
            cin >> id;

            library.searchBookById(id);
            break;
        }

        case 4:
        {
            int id;
            string name, email, phone, membershipId;

            cout << "Enter Member ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Enter Email: ";
            getline(cin, email);

            cout << "Enter Phone: ";
            getline(cin, phone);

            cout << "Enter Membership ID: ";
            getline(cin, membershipId);

            Member member(id, name, email, phone, membershipId);
            library.addMember(member);
            break;
        }

        case 5:
        {
            library.displayMembers();
            break;
        }

        case 6:
        {
            int id;
            string name, email, phone, employeeId, designation;

            cout << "Enter Librarian ID: ";
            cin >> id;
            cin.ignore();

            cout << "Enter Name: ";
            getline(cin, name);

            cout << "Enter Email: ";
            getline(cin, email);

            cout << "Enter Phone: ";
            getline(cin, phone);

            cout << "Enter Employee ID: ";
            getline(cin, employeeId);

            cout << "Enter Designation: ";
            getline(cin, designation);

            Librarian librarian(id, name, email, phone, employeeId, designation);
            library.addLibrarian(librarian);
            break;
        }

        case 7:
        {
            library.displayLibrarians();
            break;
        }

        case 8:
        {
            int id;

            cout << "Enter Book ID to Issue: ";
            cin >> id;

            library.issueBook(id);
            break;
        }

        case 9:
        {
            int id;

            cout << "Enter Book ID to Return: ";
            cin >> id;

            library.returnBook(id);
            break;
        }

        case 0:
        {
            cout << "\nThank you for using the Library Management System!\n";
            break;
        }

        default:
        {
            cout << "Invalid Choice! Please try again.\n";
        }
        }

    } while (choice != 0);

    return 0;
}