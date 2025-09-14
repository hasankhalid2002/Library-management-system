#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
    bool available;

public:
    Book(string t, string a) {
        title = t;
        author = a;
        available = true;
    }

    string getTitle() {
        return title;
    }

    bool isAvailable() {
        return available;
    }

    void borrowBook() {
        if (available) {
            available = false;
            cout << "Book borrowed successfully.\n";
        }
        else {
            cout << "Sorry, this book is already borrowed.\n";
        }
    }

    void returnBook() {
        if (!available) {
            available = true;
            cout << "Book returned successfully.\n";
        }
        else {
            cout << "This book was not borrowed.\n";
        }
    }

    void display() {
        cout << "Title: " << title << ", Author: " << author
            << ", Status: " << (available ? "Available" : "Borrowed") << endl;
    }
};

int main() {
    vector<Book> library;
    int choice;

    while (true) {
        cout << "\n--- Library System ---\n";
        cout << "1. Add Book\n";
        cout << "2. Show All Books\n";
        cout << "3. Search Book\n";
        cout << "4. Borrow Book\n";
        cout << "5. Return Book\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            string title, author;
            cout << "Enter title: ";
            getline(cin, title);
            cout << "Enter author: ";
            getline(cin, author);
            library.push_back(Book(title, author));
            cout << "Book added successfully.\n";
        }
        else if (choice == 2) {
            if (library.empty()) {
                cout << "Library is empty.\n";
            }
            else {
                cout << "Books in library:\n";
                for (auto& b : library) {
                    b.display();
                }
            }
        }
        else if (choice == 3) {
            string title;
            cout << "Enter title to search: ";
            getline(cin, title);
            bool found = false;
            for (auto& b : library) {
                if (b.getTitle() == title) {
                    b.display();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Book not found.\n";
        }
        else if (choice == 4) {
            string title;
            cout << "Enter title to borrow: ";
            getline(cin, title);
            bool found = false;
            for (auto& b : library) {
                if (b.getTitle() == title) {
                    b.borrowBook();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Book not found.\n";
        }
        else if (choice == 5) {
            string title;
            cout << "Enter title to return: ";
            getline(cin, title);
            bool found = false;
            for (auto& b : library) {
                if (b.getTitle() == title) {
                    b.returnBook();
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Book not found.\n";
        }
        else if (choice == 6) {
            cout << "Exiting program.\n";
            break;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
