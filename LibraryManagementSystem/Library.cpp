#pragma once
#include "Library.h"
Library::Library(string name, Address address) {
	this->name = name;
	this->address = address;
}
string Library::getAddress() {
	string res = address.toString();
	return res;
}

list<Book> Library::getBookList() {
	return this->listOfBook;
}
bool Library::addBook(IN Book& book) {
	this->listOfBook.push_back(book);
	return true;
}

bool Library::deleteBook(Book& book) {
	// Search for the book in the list and remove it if found

	return false; // Book not found
}