// LibraryManagementSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Book.h"
#include "Library.h"
#include "Person.h"
#include "Librarian.h"
using namespace std;
int main()
{
   Library thuVienTT = Library("Thu vien Thanh Thai", Address("So 7, Thanh Thai", "Ho Chi Minh", "HCM", "10000", "Vietnam"));
    //thuVienTT.addBook(Book("Atomic Habits", "Daily", "2023-12-03", 700));
    //thuVienTT.addBook(Book("12 Rules of Life", "Habit", "2023-12-03", 700));
    //thuVienTT.addBook(Book("Life of Pab", "Pablo", "2023-12-03", 700));


    Librarian librarian(
        "admin", "123", 
        AccountStatus::Active, 
        Person("Pablo", 
            Address("So 7, Thanh Thai", "Ho Chi Minh", "HCM", "10000", "Vietnam"),"pablo@gmail.com","0909293218"),
        thuVienTT
    );

    // Creating a few Book objects
    Book book1("Title 1", "Subject 1", "Publisher 1", 200);
    Book book2("Title 2", "Subject 2", "Publisher 2", 150);
    Book book3("Title 3", "Subject 3", "Publisher 3", 300);
    // Adding books to librarian's collection
    librarian.addBook(book1);
    librarian.addBook(book2);
    librarian.addBook(book3);

    // Deleting a book from librarian's collection
    //librarian.deleteBook(book3);
    cout << "Books in the library:" << endl;
    for (Book& book : thuVienTT.getBookList()) {
        cout << book.getBookName() << endl;
    }
    return 0;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
