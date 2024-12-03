#include "Book.h"

Book::Book() : title(""), author(""), isbn(""), availability(true), dateAdd("") {}

void Book::setBookDetails(const std::string& title, const std::string& author, const std::string& isbn, bool availability, const std::string& dateAdd) {
    this->title = title;
    this->author = author;
    this->isbn = isbn;
    this->availability = availability;
    this->dateAdd = dateAdd;
}

void Book::displayBookDetails() const {
    std::cout << "Title: " << title << "\n";
    std::cout << "Author: " << author << "\n";
    std::cout << "ISBN: " << isbn << "\n";
    std::cout << "Availability: " << (availability ? "Available" : "Borrowed") << "\n";
    std::cout << "Date Added: " << dateAdd << "\n";
}

bool Book::borrowBook() {
    if (availability) {
        availability = false;
        return true;
    }
    return false;
}

void Book::returnBook() {
    availability = true;
}

bool Book::isAvailable() const {
    return availability;
}

std::string Book::getDateAdd() const {
    return dateAdd;
}

std::string Book::getTitle() const {
    return title;
}

bool Book::operator<(const Book& b) const {
    return this->title < b.title;
}