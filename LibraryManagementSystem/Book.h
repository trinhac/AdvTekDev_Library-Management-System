#pragma once
#include<iostream>


using namespace std;
class Book
{
private:
	string title;
	string subject;
	string publisher;
	int pageAmounts;
public:
	Book(
		string title,
		string subject,
		string publisher,
		int pageAmounts);
	string getBookName();
	string toString();
	bool operator==(const Book& other) const {
		return (title == other.title &&
			subject == other.subject &&
			publisher == other.publisher &&
			pageAmounts == other.pageAmounts);
	}
};

