#ifndef LIBRARYMANAGEMENT_LIBRARY_H
#define LIBRARYMANAGEMENT_LIBRARY_H

#include <vector>
#include "Book.h"

class Library {
private:
    std::vector<Book> books;
public:
    void addBook(Book book);
    void removeBook(Book book);
    std::vector<Book> findBookByTitle(std::string title);
    std::vector<Book> findBookByAuthor(std::string author);
    std::vector<Book> findAllBooks();

    Library();
};


#endif //LIBRARYMANAGEMENT_LIBRARY_H
