#include <iostream>
#include <string>

using namespace std;

class LibraryItem {
private:
    string title;
    string* author; // Optional author (can be nullptr)
    int publicationYear;

public:
    LibraryItem(const string& t, string* a = nullptr, int year = 0) : title(t), author(a), publicationYear(year) {}

    // Getters and setters for title, author, and publication year
    string getTitle() const { return title; }
    void setTitle(const string& t) { title = t; }

    string* getAuthor() const { return author; }
    void setAuthor(const string& a) { author = new string(a); } // Allocate memory for author if provided

    int getPublicationYear() const { return publicationYear; }
    void setPublicationYear(int year) { publicationYear = year; }

    virtual void displayInfo() const {
        cout << "Title: " << title << endl;
        if (author) {
            cout << "Author: " << *author << endl;
        }
        cout << "Publication Year: " << publicationYear << endl;
    }
};

class Book : public LibraryItem {
private:
    string ISBN;

public:
    Book(const string& t, string* a = nullptr, int year = 0, const string& isbn = "")
        : LibraryItem(t, a, year), ISBN(isbn) {}

    // Getter and setter for ISBN
    string getISBN() const { return ISBN; }
    void setISBN(const string& isbn) { ISBN = isbn; }

    void displayInfo() const override {
        LibraryItem::displayInfo(); // Call base class displayInfo
        cout << "ISBN: " << ISBN << endl;
    }
};

class DVD : public LibraryItem {
private:
    int runtime;

public:
    DVD(const string& t, string* a = nullptr, int year = 0, int rt = 0)
        : LibraryItem(t, a, year), runtime(rt) {}

    // Getter and setter for runtime
    int getRuntime() const { return runtime; }
    void setRuntime(int rt) { runtime = rt; }

    void displayInfo() const override {
        LibraryItem::displayInfo(); // Call base class displayInfo
        cout << "Runtime (minutes): " << runtime << endl;
    }
};

class AudioBook : public LibraryItem {
private:
    string narrator;

public:
    AudioBook(const string& t, string* a = nullptr, int year = 0, const string& narrator = "")
        : LibraryItem(t, a, year), narrator(narrator) {}

    // Getter and setter for narrator
    string getNarrator() const { return narrator; }
    void setNarrator(const string& n) { narrator = n; }

    void displayInfo() const override {
        LibraryItem::displayInfo(); // Call base class displayInfo
        cout << "Narrator: " << narrator << endl;
    }
};

int main() {
    Book book1("The Lord of the Rings", new string("J.R.R. Tolkien"), 1954, "978-0261102694");
}