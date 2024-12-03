#include <iostream>
#include "Book.h"

void sortBooks(Book books[], int size);
void printBooks(Book books[], int size);

void printBooks(Book books[], int size) {
    for (int i = 0; i < size; ++i) {
        books[i].displayBookDetails();
        std::cout << "--------------------------\n";
    }
}

int main() {
    Book correctBook1, correctBook2, correctBook3;
    correctBook1.setBookDetails("The ICT 004", "J.D. Kriss", "041-031-6769", true, "2024-12-2");
    correctBook2.setBookDetails("The ICT 005", "Harper prince", "041-006-1120", true, "2024-12-1");
    correctBook3.setBookDetails("The ICT 006", "George Cinthia", "041-045-1524", true, "2024-12-3");

    Book booksAsc[3] = { correctBook1, correctBook2, correctBook3 };
    Book booksDesc[3] = { correctBook3, correctBook2, correctBook1 };
    Book booksMixed[3] = { correctBook2, correctBook1, correctBook3 };

    std::cout << "Books in Mixed Order:\n";
    printBooks(booksMixed, 3);

    std::cout << "\nSorting Mixed Books:\n";
    sortBooks(booksMixed, 3);
    printBooks(booksMixed, 3);

    std::cout << "\nSorting Mixed Books in Ascending Order:\n";
    sortBooks(booksMixed, 3);
    printBooks(booksAsc, 3);

    std::cout << "\nSorting Mixed Books in Descending Order:\n";
    sortBooks(booksMixed, 3);
    printBooks(booksDesc, 3);

    return 0;
}