#pragma once
#include<list>
#include<iostream>
#include"Address.h"
#include "Book.h"
#include "GlobalType.h"


using namespace std;
class Library
{
private:
	string name;
	Address address;
	list<Book> listOfBook;
protected:

public:
	Library(string name, Address address);
	list<Book> getBookList();
	string getAddress();
	bool addBook(IN Book& book);
	bool deleteBook(IN Book& book);
};

