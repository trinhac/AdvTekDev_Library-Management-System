#pragma once
#include <iostream>
#include <string>

//---
#include "Account.h"
#include "Book.h"
#include "Library.h"

using namespace std;
class Librarian : public Account{
private:
    Library& library;
public:
        Librarian(
            string id,
            string password,
            AccountStatus status,
            Person person,
            Library& lib
        );
        Librarian() = default;
		bool addBook(Book& book);
		bool deleteBook(Book& book);		
};

