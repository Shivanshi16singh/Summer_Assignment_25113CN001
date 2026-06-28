#include <bits/stdc++.h>

using namespace std;

struct Student {
    int rollNumber;
    string name;
    string course;
    float marks;
};

int main() {
    Student records[100];
    int currentCount = 0;
    int choice;

    cout << "--- Student Record System (Arrays & Strings) ---" << endl;

    do {
        cout << endl;
        cout << "1. Add Student Record" << endl;
        cout << "2. Display All Student Records" << endl;
        cout << "3. Search Student by Roll Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                if (currentCount >= 100) {
                    cout << "System storage is full! Cannot add more records." << endl;
                } else {
                    cout << "Enter Roll Number: ";
                    cin >> records[currentCount].rollNumber;
                    cin.ignore();
                    cout << "Enter Name: ";
                    getline(cin, records[currentCount].name);
                    cout << "Enter Course: ";
                    getline(cin, records[currentCount].course);
                    cout << "Enter Marks: ";
                    cin >> records[currentCount].marks;

                    currentCount++;
                    cout << "Record added successfully!" << endl;
                }
                break;
            }
            case 2: {
                if (currentCount == 0) {
                    cout << "No student records found." << endl;
                } else {
                    cout << "--------------------------------------------------------" << endl;
                    cout << left << setw(12) << "Roll No" << setw(20) << "Name" << setw(15) << "Course" << setw(10) << "Marks" << endl;
                    cout << "--------------------------------------------------------" << endl;
                    for (int i = 0; i < currentCount; i++) {
                        cout << left << setw(12) << records[i].rollNumber 
                             << setw(20) << records[i].name 
                             << setw(15) << records[i].course 
                             << setw(10) << fixed << setprecision(2) << records[i].marks << endl;
                    }
                    cout << "--------------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                if (currentCount == 0) {
                    cout << "No student records available to search." << endl;
                } else {
                    int searchRoll;
                    bool found = false;
                    cout << "Enter Roll Number to search: ";
                    cin >> searchRoll;

                    cout << endl;
                    for (int i = 0; i < currentCount; i++) {
                        if (records[i].rollNumber == searchRoll) {
                            cout << "Record Found!" << endl;
                            cout << "Roll Number: " << records[i].rollNumber << endl;
                            cout << "Name:        " << records[i].name << endl;
                            cout << "Course:      " << records[i].course << endl;
                            cout << "Marks:       " << fixed << setprecision(2) << records[i].marks << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Student with Roll Number " << searchRoll << " not found." << endl;
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