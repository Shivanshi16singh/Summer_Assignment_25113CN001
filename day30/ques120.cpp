#include <bits/stdc++.h>

using namespace std;

struct Project {
    int id;
    string title;
    string teamLeader;
    string status;
};

void addProject(Project projects[], int &count, int maxLimit) {
    if (count >= maxLimit) {
        cout << "System storage is full! Cannot add more projects." << endl;
        return;
    }

    cout << "Enter Project ID: ";
    cin >> projects[count].id;
    cin.ignore();
    cout << "Enter Project Title: ";
    getline(cin, projects[count].title);
    cout << "Enter Team Leader Name: ";
    getline(cin, projects[count].teamLeader);
    projects[count].status = "In Progress";

    count++;
    cout << "Project created and assigned successfully!" << endl;
}

void displayProjects(const Project projects[], int count) {
    if (count == 0) {
        cout << "No projects found in the system." << endl;
        return;
    }

    cout << "----------------------------------------------------------------------------" << endl;
    cout << left << setw(10) << "ID" << setw(25) << "Project Title" << setw(22) << "Team Leader" << setw(15) << "Status" << endl;
    cout << "----------------------------------------------------------------------------" << endl;
    for (int i = 0; i < count; i++) {
        cout << left << setw(10) << projects[i].id 
             << setw(25) << projects[i].title 
             << setw(22) << projects[i].teamLeader 
             << setw(15) << projects[i].status << endl;
    }
    cout << "----------------------------------------------------------------------------" << endl;
}

void updateProjectStatus(Project projects[], int count) {
    if (count == 0) {
        cout << "No projects available to update." << endl;
        return;
    }

    int searchId;
    bool found = false;
    cout << "Enter Project ID to update: ";
    cin >> searchId;

    for (int i = 0; i < count; i++) {
        if (projects[i].id == searchId) {
            found = true;
            int statusChoice;
            cout << "Current Status: " << projects[i].status << endl;
            cout << "Select New Status:" << endl;
            cout << "1. In Progress" << endl;
            cout << "2. Completed" << endl;
            cout << "3. On Hold" << endl;
            cout << "Enter choice (1-3): ";
            cin >> statusChoice;

            if (statusChoice == 1) projects[i].status = "In Progress";
            else if (statusChoice == 2) projects[i].status = "Completed";
            else if (statusChoice == 3) projects[i].status = "On Hold";
            else cout << "Invalid choice! Status left unchanged." << endl;

            if (statusChoice >= 1 && statusChoice <= 3) {
                cout << "Project status updated successfully!" << endl;
            }
            break;
        }
    }

    if (!found) {
        cout << "Project with ID " << searchId << " not found." << endl;
    }
}

int main() {
    const int MAX_PROJECTS = 50;
    Project repository[MAX_PROJECTS];
    int projectCount = 0;
    int choice;

    cout << "--- Project Management Mini-Project ---" << endl;

    do {
        cout << endl;
        cout << "1. Create New Project" << endl;
        cout << "2. Display All Projects" << endl;
        cout << "3. Update Project Status" << endl;
        cout << "4. Exit Application" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1:
                addProject(repository, projectCount, MAX_PROJECTS);
                break;
            case 2:
                displayProjects(repository, projectCount);
                break;
            case 3:
                updateProjectStatus(repository, projectCount);
                break;
            case 4:
                cout << "Exiting the system. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}