#include <bits/stdc++.h>

using namespace std;

struct MiniEmployee {
    int id;
    string name;
    string department;
};

int main() {
    MiniEmployee employees[50];
    int employeeCount = 0;
    int choice;

    cout << "--- Mini Employee Management System ---" << endl;

    do {
        cout << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. Display All Employees" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                if (employeeCount >= 50) {
                    cout << "System storage full! Cannot add more employees." << endl;
                } else {
                    cout << "Enter Employee ID: ";
                    cin >> employees[employeeCount].id;
                    cin.ignore();
                    cout << "Enter Employee Name: ";
                    getline(cin, employees[employeeCount].name);
                    cout << "Enter Department: ";
                    getline(cin, employees[employeeCount].department);

                    employeeCount++;
                    cout << "Employee record added successfully!" << endl;
                }
                break;
            }
            case 2: {
                if (employeeCount == 0) {
                    cout << "No employee records found." << endl;
                } else {
                    cout << "--------------------------------------------------" << endl;
                    cout << left << setw(10) << "ID" << setw(22) << "Name" << setw(18) << "Department" << endl;
                    cout << "--------------------------------------------------" << endl;
                    for (int i = 0; i < employeeCount; i++) {
                        cout << left << setw(10) << employees[i].id 
                             << setw(22) << employees[i].name 
                             << setw(18) << employees[i].department << endl;
                    }
                    cout << "--------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                if (employeeCount == 0) {
                    cout << "No records available to search." << endl;
                } else {
                    int searchId;
                    bool found = false;
                    cout << "Enter Employee ID to search: ";
                    cin >> searchId;

                    for (int i = 0; i < employeeCount; i++) {
                        if (employees[i].id == searchId) {
                            cout << endl << "Employee Found!" << endl;
                            cout << "ID:         " << employees[i].id << endl;
                            cout << "Name:       " << employees[i].name << endl;
                            cout << "Department: " << employees[i].department << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Employee with ID " << searchId << " not found." << endl;
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