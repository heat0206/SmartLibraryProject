#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string isbn;
    string title;
    bool isAvailable;

public:
    Book(string isbn, string title) {
        this->isbn = isbn;
        this->title = title;
        this->isAvailable = true;
    }

    void checkOut() {
        if (isAvailable) {
            isAvailable = false;
            cout << "Book checked out successfully." << endl;
        } else {
            cout << "Book is already issued." << endl;
        }
    }

    void returnBook() {
        if (!isAvailable) {
            isAvailable = true;
            cout << "Book returned successfully." << endl;
        } else {
            cout << "Book is already available." << endl;
        }
    }

    void display() {
        cout << "ISBN: " << isbn << endl;
        cout << "Title: " << title << endl;
        cout << "Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

int main() {
    Book b1("978-0-13-468599-1", "The C++ Programming Language");

    b1.display();
    b1.checkOut();
    b1.display();
    b1.checkOut();
    b1.returnBook();
    b1.display();

    return 0;
}
