#include "Catalog.h"
Catalog::Catalog(int totalBooks) {
    this->totalBooks = totalBooks;
}
list<string> Catalog::searchByTitles(string title){
    if (bookTitles.find(title) != bookTitles.end()) {
        return bookTitles.at(title);
    }
    else {
        return list<string>(); // Return an empty list if title not found
    }
}

list<string> Catalog::searchByAuthors(string author) {
    if (bookAuthors.find(author) != bookAuthors.end()) {
        return bookAuthors.at(author);
    }
    else {
        return list<string>(); // Return an empty list if author not found
    }
}

list<string> Catalog::searchBySubjects(string subject) {
    if (bookSubjects.find(subject) != bookSubjects.end()) {
        return bookSubjects.at(subject);
    }
    else {
        return list<string>(); // Return an empty list if subject not found
    }
}

list<string> Catalog::searchByPubDate(string pubDate) {
    // You need to implement the logic to search by publication date
    // This could involve iterating through bookPublicationDates and checking for matches
    // Here's a placeholder returning an empty list
    return list<string>();
}

bool Catalog::updateCatalog() {
    return true;
}