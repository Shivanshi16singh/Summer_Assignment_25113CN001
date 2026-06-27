#include <bits/stdc++.h>

using namespace std;

struct SalaryRecord {
    int employeeId;
    string name;
    double basicSalary;
    double hra;
    double da;
    double netSalary;
};

int main() {
    vector<SalaryRecord> payroll;
    int choice;

    cout << "--- Salary Management System ---" << endl;

    do {
        cout << endl;
        cout << "1. Add Salary Record" << endl;
        cout << "2. Display All Salary Slips" << endl;
        cout << "3. Search Salary Slip by Employee ID" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                SalaryRecord record;
                cout << "Enter Employee ID: ";
                cin >> record.employeeId;
                cin.ignore();
                cout << "Enter Employee Name: ";
                getline(cin, record.name);
                cout << "Enter Basic Salary: $";
                cin >> record.basicSalary;

                record.hra = record.basicSalary * 0.20;
                record.da = record.basicSalary * 0.10;
                record.netSalary = record.basicSalary + record.hra + record.da;

                payroll.push_back(record);
                cout << "Salary record added successfully!" << endl;
                break;
            }
            case 2: {
                if (payroll.empty()) {
                    cout << "No salary records found." << endl;
                } else {
                    cout << "----------------------------------------------------------------------------" << endl;
                    cout << left << setw(10) << "ID" << setw(20) << "Name" << setw(12) << "Basic" << setw(10) << "HRA" << setw(10) << "DA" << setw(12) << "Net Salary" << endl;
                    cout << "----------------------------------------------------------------------------" << endl;
                    for (int i = 0; i < payroll.size(); i++) {
                        cout << left << setw(10) << payroll[i].employeeId 
                             << setw(20) << payroll[i].name 
                             << "$" << setw(11) << fixed << setprecision(2) << payroll[i].basicSalary 
                             << "$" << setw(9) << payroll[i].hra 
                             << "$" << setw(9) << payroll[i].da 
                             << "$" << setw(11) << payroll[i].netSalary << endl;
                    }
                    cout << "----------------------------------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                if (payroll.empty()) {
                    cout << "No salary records available to search." << endl;
                } else {
                    int searchId;
                    bool found = false;
                    cout << "Enter Employee ID to search: ";
                    cin >> searchId;

                    cout << endl;
                    for (int i = 0; i < payroll.size(); i++) {
                        if (payroll[i].employeeId == searchId) {
                            cout << "--- Salary Slip Found ---" << endl;
                            cout << "Employee ID:  " << payroll[i].employeeId << endl;
                            cout << "Name:         " << payroll[i].name << endl;
                            cout << "Basic Salary: $" << fixed << setprecision(2) << payroll[i].basicSalary << endl;
                            cout << "HRA (20%):    $" << payroll[i].hra << endl;
                            cout << "DA (10%):     $" << payroll[i].da << endl;
                            cout << "-------------------------" << endl;
                            cout << "Net Salary:   $" << payroll[i].netSalary << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Salary record for Employee ID " << searchId << " not found." << endl;
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