#include <bits/stdc++.h>

using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "--- Menu-Driven Calculator ---" << endl;

    do {
        cout << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        }

        cout << endl;
        switch (choice) {
            case 1:
                cout << "Result: " << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;

            case 2:
                cout << "Result: " << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;

            case 3:
                cout << "Result: " << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;

            case 4:
                if (num2 != 0) {
                    cout << "Result: " << num1 << " / " << num2 << " = " << (num1 / num2) << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;

            case 5:
                cout << "Exiting the calculator. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
    } while (choice != 5);

    return 0;
}