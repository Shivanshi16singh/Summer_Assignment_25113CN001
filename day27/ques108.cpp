#include <bits/stdc++.h>

using namespace std;

struct StudentMarksheet {
    int rollNumber;
    string name;
    int marks[5];
    int total;
    float percentage;
    string grade;
};

int main() {
    vector<StudentMarksheet> records;
    int choice;
    string subjects[5] = {"Mathematics", "Physics", "Chemistry", "English", "Computer Science"};

    cout << "--- Marksheet Generation System ---" << endl;

    do {
        cout << endl;
        cout << "1. Generate New Marksheet" << endl;
        cout << "2. Display All Marksheets" << endl;
        cout << "3. Search Marksheet by Roll Number" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                StudentMarksheet s;
                cout << "Enter Roll Number: ";
                cin >> s.rollNumber;
                cin.ignore();
                cout << "Enter Student Name: ";
                getline(cin, s.name);

                s.total = 0;
                for (int i = 0; i < 5; i++) {
                    cout << "Enter marks for " << subjects[i] << " (out of 100): ";
                    cin >> s.marks[i];
                    s.total += s.marks[i];
                }

                s.percentage = s.total / 5.0;

                if (s.percentage >= 90) s.grade = "A+";
                else if (s.percentage >= 80) s.grade = "A";
                else if (s.percentage >= 70) s.grade = "B";
                else if (s.percentage >= 60) s.grade = "C";
                else if (s.percentage >= 50) s.grade = "D";
                else if (s.percentage >= 40) s.grade = "E";
                else s.grade = "Fail";

                records.push_back(s);
                cout << endl << "Marksheet generated successfully!" << endl;
                break;
            }
            case 2: {
                if (records.empty()) {
                    cout << "No marksheet records found." << endl;
                } else {
                    for (int k = 0; k < records.size(); k++) {
                        cout << "==================================================" << endl;
                        cout << "                STUDENT MARKSHEET                 " << endl;
                        cout << "==================================================" << endl;
                        cout << "Roll Number: " << records[k].rollNumber << "   | Name: " << records[k].name << endl;
                        cout << "--------------------------------------------------" << endl;
                        cout << left << setw(25) << "Subject" << setw(15) << "Max Marks" << setw(10) << "Obtained" << endl;
                        cout << "--------------------------------------------------" << endl;
                        for (int i = 0; i < 5; i++) {
                            cout << left << setw(25) << subjects[i] << setw(15) << "100" << setw(10) << records[k].marks[i] << endl;
                        }
                        cout << "--------------------------------------------------" << endl;
                        cout << "Total Marks: " << records[k].total << " / 500" << endl;
                        cout << "Percentage:  " << fixed << setprecision(2) << records[k].percentage << "%" << endl;
                        cout << "Grade:       " << records[k].grade << endl;
                        cout << "==================================================" << endl << endl;
                    }
                }
                break;
            }
            case 3: {
                if (records.empty()) {
                    cout << "No marksheet records available to search." << endl;
                } else {
                    int searchRoll;
                    bool found = false;
                    cout << "Enter Roll Number to search: ";
                    cin >> searchRoll;

                    cout << endl;
                    for (int k = 0; k < records.size(); k++) {
                        if (records[k].rollNumber == searchRoll) {
                            cout << "==================================================" << endl;
                            cout << "                STUDENT MARKSHEET                 " << endl;
                            cout << "==================================================" << endl;
                            cout << "Roll Number: " << records[k].rollNumber << "   | Name: " << records[k].name << endl;
                            cout << "--------------------------------------------------" << endl;
                            cout << left << setw(25) << "Subject" << setw(15) << "Max Marks" << setw(10) << "Obtained" << endl;
                            cout << "--------------------------------------------------" << endl;
                            for (int i = 0; i < 5; i++) {
                                cout << left << setw(25) << subjects[i] << setw(15) << "100" << setw(10) << records[k].marks[i] << endl;
                            }
                            cout << "--------------------------------------------------" << endl;
                            cout << "Total Marks: " << records[k].total << " / 500" << endl;
                            cout << "Percentage:  " << fixed << setprecision(2) << records[k].percentage << "%" << endl;
                            cout << "Grade:       " << records[k].grade << endl;
                            cout << "==================================================" << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Marksheet for Roll Number " << searchRoll << " not found." << endl;
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