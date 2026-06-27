#include <bits/stdc++.h>

using namespace std;

int main() {
    double balance = 5000.0;
    int choice;
    double amount;

    cout << "--- Welcome to the ATM Simulation ---" << endl;

    do {
        cout << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1:
                cout << "Your current balance is: $" << fixed << setprecision(2) << balance << endl;
                break;

            case 2:
                cout << "Enter deposit amount: $";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "$" << amount << " deposited successfully." << endl;
                } else {
                    cout << "Invalid deposit amount." << endl;
                }
                break;

            case 3:
                cout << "Enter withdrawal amount: $";
                cin >> amount;
                if (amount > balance) {
                    cout << "Insufficient balance!" << endl;
                } else if (amount <= 0) {
                    cout << "Invalid withdrawal amount." << endl;
                } else {
                    balance -= amount;
                    cout << "$" << amount << " withdrawn successfully." << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}