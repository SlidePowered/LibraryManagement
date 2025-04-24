#include <iostream>
#include "Library.h"

int main() {
    Library library;
    int action;

    while (true) {
        std::cout << "\nОберіть дію: \n"
                     "1. Додати книгу\n"
                     "2. Видалити книгу\n"
                     "3. Знайти книгу за назвою\n"
                     "4. Знайти усі книги за автором\n"
                     "5. Знайти усі книги\n"
                     "6. Вийти\n";
        std::cin >> action;
        std::cin.ignore();

        if (action == 1) {
            std::string title, author, isbn;
            int year;

            std::cout << "Введіть назву книги: ";
            std::getline(std::cin, title);

            std::cout << "Введіть автора: ";
            std::getline(std::cin, author);

            std::cout << "Введіть рік: ";
            std::cin >> year;
            std::cin.ignore();

            std::cout << "Введіть ISBN: ";
            std::getline(std::cin, isbn);

            Book book(title, author, year, isbn);
            library.addBook(book);

            std::cout << "Книгу успішно додано!\n";

        } else if (action == 2) {
            std::string title;
            std::cout << "Введіть назву книги для видалення: ";
            std::getline(std::cin, title);

            std::vector<Book> books = library.findBookByTitle(title);
            if (!books.empty()) {
                for (const auto& book : books) {
                    library.removeBook(book);
                }
                std::cout << "Книгу успішно видалено!\n";
            } else {
                std::cout << "Не знайдено жодної книги з такою назвою!\n";
            }

        } else if (action == 3) {
            std::string title;
            std::cout << "Введіть назву книги для пошуку: ";
            std::getline(std::cin, title);

            std::vector<Book> books = library.findBookByTitle(title);
            if (!books.empty()) {
                for (const auto& book : books) {
                    std::cout << book.getTitle() << " | "
                              << book.getAuthor() << " | "
                              << book.getYear() << " | "
                              << book.getIsbn() << "\n";
                }
            } else {
                std::cout << "Книг з такою назвою не знайдено.\n";
            }

        } else if (action == 4) {
            std::string author;
            std::cout << "Введіть автора: ";
            std::getline(std::cin, author);

            std::vector<Book> books = library.findBookByAuthor(author);
            if (!books.empty()) {
                for (const auto& book : books) {
                    std::cout << book.getTitle() << " | "
                              << book.getAuthor() << " | "
                              << book.getYear() << " | "
                              << book.getIsbn() << "\n";
                }
            } else {
                std::cout << "Книг цього автора не знайдено.\n";
            }

        } else if (action == 5) {
            std::vector<Book> books = library.findAllBooks();
            if (!books.empty()) {
                for (const auto& book : books) {
                    std::cout << book.getTitle() << " | "
                              << book.getAuthor() << " | "
                              << book.getYear() << " | "
                              << book.getIsbn() << "\n";
                }
            } else {
                std::cout << "Бібліотека порожня.\n";
            }

        } else if (action == 6) {
            std::cout << "Вихід з програми...\n";
            break;
        } else {
            std::cout << "Невідома дія. Спробуйте ще раз.\n";
        }
    }

    return 0;
}