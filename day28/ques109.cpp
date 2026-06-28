#include <bits/stdc++.h>

using namespace std;

struct Book {
    int id;
    string title;
    string author;
    bool isIssued;
};

int main() {
    vector<Book> library;
    int choice;

    cout << "--- Library Management System ---" << endl;

    do {
        cout << endl;
        cout << "1. Add New Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Issue a Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                Book b;
                cout << "Enter Book ID: ";
                cin >> b.id;
                cin.ignore();
                cout << "Enter Book Title: ";
                getline(cin, b.title);
                cout << "Enter Author Name: ";
                getline(cin, b.author);
                b.isIssued = false;

                library.push_back(b);
                cout << "Book added successfully!" << endl;
                break;
            }
            case 2: {
                if (library.empty()) {
                    cout << "No books available in the library." << endl;
                } else {
                    cout << "----------------------------------------------------------------------------" << endl;
                    cout << left << setw(10) << "Book ID" << setw(30) << "Title" << setw(25) << "Author" << setw(12) << "Status" << endl;
                    cout << "----------------------------------------------------------------------------" << endl;
                    for (int i = 0; i < library.size(); i++) {
                        string status = library[i].isIssued ? "Issued" : "Available";
                        cout << left << setw(10) << library[i].id 
                             << setw(30) << library[i].title 
                             << setw(25) << library[i].author 
                             << setw(12) << status << endl;
                    }
                    cout << "----------------------------------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                if (library.empty()) {
                    cout << "No books available to issue." << endl;
                } else {
                    int searchId;
                    bool found = false;
                    cout << "Enter Book ID to issue: ";
                    cin >> searchId;

                    for (int i = 0; i < library.size(); i++) {
                        if (library[i].id == searchId) {
                            found = true;
                            if (library[i].isIssued) {
                                cout << "Sorry, the book '" << library[i].title << "' is already issued." << endl;
                            } else {
                                library[i].isIssued = true;
                                cout << "Book '" << library[i].title << "' has been successfully issued!" << endl;
                            }
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Book with ID " << searchId << " not found in the library." << endl;
                    }
                }
                break;
            }
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}