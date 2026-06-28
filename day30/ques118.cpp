#include <bits/stdc++.h>

using namespace std;

struct MiniBook {
    int id;
    string title;
    bool isAvailable;
};

int main() {
    MiniBook library[50];
    int bookCount = 0;
    int choice;

    cout << "--- Mini Library System ---" << endl;

    do {
        cout << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Display All Books" << endl;
        cout << "3. Issue/Return Book" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                if (bookCount >= 50) {
                    cout << "Library storage is full!" << endl;
                } else {
                    cout << "Enter Book ID: ";
                    cin >> library[bookCount].id;
                    cin.ignore();
                    cout << "Enter Book Title: ";
                    getline(cin, library[bookCount].title);
                    library[bookCount].isAvailable = true;

                    bookCount++;
                    cout << "Book added successfully!" << endl;
                }
                break;
            }
            case 2: {
                if (bookCount == 0) {
                    cout << "No books in the library." << endl;
                } else {
                    cout << "--------------------------------------------------" << endl;
                    cout << left << setw(10) << "ID" << setw(25) << "Title" << setw(15) << "Status" << endl;
                    cout << "--------------------------------------------------" << endl;
                    for (int i = 0; i < bookCount; i++) {
                        string status = library[i].isAvailable ? "Available" : "Issued";
                        cout << left << setw(10) << library[i].id 
                             << setw(25) << library[i].title 
                             << setw(15) << status << endl;
                    }
                    cout << "--------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                if (bookCount == 0) {
                    cout << "No books available to update status." << endl;
                } else {
                    int searchId;
                    bool found = false;
                    cout << "Enter Book ID: ";
                    cin >> searchId;

                    for (int i = 0; i < bookCount; i++) {
                        if (library[i].id == searchId) {
                            found = true;
                            if (library[i].isAvailable) {
                                library[i].isAvailable = false;
                                cout << "Book '" << library[i].title << "' has been issued." << endl;
                            } else {
                                library[i].isAvailable = true;
                                cout << "Book '" << library[i].title << "' has been returned and is now available." << endl;
                            }
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Book with ID " << searchId << " not found." << endl;
                    }
                }
                break;
            }
            case 4:
                cout << "Exiting the library system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}