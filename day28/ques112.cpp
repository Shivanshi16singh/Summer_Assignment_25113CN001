#include <bits/stdc++.h>

using namespace std;

struct Contact {
    string name;
    string phoneNumber;
    string email;
};

int main() {
    vector<Contact> contacts;
    int choice;

    cout << "--- Contact Management System ---" << endl;

    do {
        cout << endl;
        cout << "1. Add New Contact" << endl;
        cout << "2. Display All Contacts" << endl;
        cout << "3. Search Contact by Name" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                Contact c;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, c.name);
                cout << "Enter Phone Number: ";
                getline(cin, c.phoneNumber);
                cout << "Enter Email Address: ";
                getline(cin, c.email);

                contacts.push_back(c);
                cout << "Contact added successfully!" << endl;
                break;
            }
            case 2: {
                if (contacts.empty()) {
                    cout << "No contacts found." << endl;
                } else {
                    cout << "-------------------------------------------------------------------------------" << endl;
                    cout << left << setw(25) << "Name" << setw(20) << "Phone Number" << setw(30) << "Email" << endl;
                    cout << "-------------------------------------------------------------------------------" << endl;
                    for (int i = 0; i < contacts.size(); i++) {
                        cout << left << setw(25) << contacts[i].name 
                             << setw(20) << contacts[i].phoneNumber 
                             << setw(30) << contacts[i].email << endl;
                    }
                    cout << "-------------------------------------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                if (contacts.empty()) {
                    cout << "No contacts available to search." << endl;
                } else {
                    string searchName;
                    bool found = false;
                    cin.ignore();
                    cout << "Enter Name to search: ";
                    getline(cin, searchName);

                    cout << endl;
                    for (int i = 0; i < contacts.size(); i++) {
                        if (contacts[i].name == searchName) {
                            cout << "--- Contact Found ---" << endl;
                            cout << "Name:         " << contacts[i].name << endl;
                            cout << "Phone Number: " << contacts[i].phoneNumber << endl;
                            cout << "Email:        " << contacts[i].email << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Contact with name '" << searchName << "' not found." << endl;
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