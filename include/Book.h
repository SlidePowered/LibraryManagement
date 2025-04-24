#ifndef LIBRARYMANAGEMENT_BOOK_H
#define LIBRARYMANAGEMENT_BOOK_H

#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int year;
    std::string isbn;
public:
    std::string getTitle() const;
    std::string getAuthor() const;
    int getYear() const;
    std::string getIsbn() const;

    void setTitle(std::string title);
    void setAuthor(std::string author);
    void setYear(int year);
    void setIsbn(std::string isbn);

    Book(std::string title, std::string author, int year, std::string isbn);

    bool operator==(const Book& other) const;
};


#endif //LIBRARYMANAGEMENT_BOOK_H
