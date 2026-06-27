#include <bits/stdc++.h>

using namespace std;

struct Employee {
    int id;
    string name;
    string designation;
    double salary;
};

int main() {
    vector<Employee> employees;
    int choice;

    cout << "--- Employee Management System ---" << endl;

    do {
        cout << endl;
        cout << "1. Add Employee Record" << endl;
        cout << "2. Display All Employee Records" << endl;
        cout << "3. Search Employee by ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                Employee e;
                cout << "Enter Employee ID: ";
                cin >> e.id;
                cin.ignore();
                cout << "Enter Name: ";
                getline(cin, e.name);
                cout << "Enter Designation: ";
                getline(cin, e.designation);
                cout << "Enter Salary: ";
                cin >> e.salary;

                employees.push_back(e);
                cout << "Record added successfully!" << endl;
                break;
            }
            case 2: {
                if (employees.empty()) {
                    cout << "No employee records found." << endl;
                } else {
                    cout << "------------------------------------------------------------------" << endl;
                    cout << left << setw(10) << "ID" << setw(22) << "Name" << setw(20) << "Designation" << setw(12) << "Salary" << endl;
                    cout << "------------------------------------------------------------------" << endl;
                    for (int i = 0; i < employees.size(); i++) {
                        cout << left << setw(10) << employees[i].id 
                             << setw(22) << employees[i].name 
                             << setw(20) << employees[i].designation 
                             << setw(12) << fixed << setprecision(2) << employees[i].salary << endl;
                    }
                    cout << "------------------------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                if (employees.empty()) {
                    cout << "No employee records available to search." << endl;
                } else {
                    int searchId;
                    bool found = false;
                    cout << "Enter Employee ID to search: ";
                    cin >> searchId;

                    cout << endl;
                    for (int i = 0; i < employees.size(); i++) {
                        if (employees[i].id == searchId) {
                            cout << "Record Found!" << endl;
                            cout << "ID:          " << employees[i].id << endl;
                            cout << "Name:        " << employees[i].name << endl;
                            cout << "Designation: " << employees[i].designation << endl;
                            cout << "Salary:      $" << fixed << setprecision(2) << employees[i].salary << endl;
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