#include "Book.h"
#include <string>
#include <iostream>
using namespace std;
Book::Book(
	string title,
	string subject,
	string publisher,
	int pageAmounts) {
	this->title = title;
	this->subject = subject;
	this->publisher = publisher;
	this->pageAmounts = pageAmounts;
}
string Book::getBookName() {
	return title;
}
string Book::toString(){
	return
		"Name: " + this->title +
		"Subject: " + this->subject +
		"Author: " + this->publisher +
		"Number of pages: " + to_string(this->pageAmounts);
}