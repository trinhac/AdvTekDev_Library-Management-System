#pragma once
#include <iostream>
#include <string>
#include <map>
#include <string>
#include <list>
#include "Date.h"
using namespace std;
class Catalog
{
private:
	int totalBooks;
    map<string, list<string>> bookTitles;
    map<string, list<string>> bookAuthors;
    map<string, list<string>> bookSubjects;
    map<Date, list<string>> bookPublishednDates;
public:
    Catalog(int totalBooks);
    bool updateCatalog();
    Catalog() = default;
    //Seach interface:
    list<string> searchByTitles(string title);
    list<string> searchByAuthors(string author);
    list<string> searchBySubjects(string subject);
    list<string> searchByPubDate(string pubDate);
};

