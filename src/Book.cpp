#include "Book.h"

Book::Book(std::string title, std::string author, int year, std::string isbn) : title(title), author(author), year(year), isbn(isbn) {}

std::string Book::getTitle() const { return this->title; }
std::string Book::getAuthor() const { return this->author; }
int Book::getYear() const { return this->year; }
std::string Book::getIsbn() const { return this->isbn; }

void Book::setTitle(std::string title) { this->title = title; }
void Book::setAuthor(std::string author) { this->author = author; }
void Book::setYear(int year) { this->year = year; }
void Book::setIsbn(std::string isbn) { this->isbn = isbn; }

bool Book::operator==(const Book& other) const {
    return title == other.title &&
           author == other.author &&
           year == other.year &&
           isbn == other.isbn;
}