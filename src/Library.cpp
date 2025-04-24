#include "Library.h"

void Library::addBook(Book book) {
    this->books.push_back(book);
}

void Library::removeBook(const Book book) {
    for (auto i = books.begin(); i != books.end(); ) {
        if (*i == book) {
            i = books.erase(i);
        } else {
            ++i;
        }
    }
}

std::vector<Book> Library::findAllBooks() {
    return this->books;
}

std::vector<Book> Library::findBookByTitle(std::string title) {
    std::vector<Book> matched;
    for(auto i = books.begin(); i != books.end(); ++i){
        if(i->getTitle() == title){
            matched.push_back(*i);
        }
    }
    return matched;
}

std::vector<Book> Library::findBookByAuthor(std::string author) {
    std::vector<Book> matched;
    for(auto i = books.begin(); i != books.end(); ++i){
        if(i->getAuthor() == author){
            matched.push_back(*i);
        }
    }
    return matched;
}

Library::Library() = default;