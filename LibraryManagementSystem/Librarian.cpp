#include "Librarian.h"
Librarian::Librarian(string id, string password, AccountStatus status, Person person, Library& lib)
    : Account(id, password, status, person), library(lib) {
    // Constructor implementation...
}
bool Librarian::addBook(Book& book) {
    return library.addBook(book);
}
bool Librarian::deleteBook(Book& book) {
    return library.deleteBook(book);
}

