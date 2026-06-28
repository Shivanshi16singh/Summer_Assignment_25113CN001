#include <bits/stdc++.h>

using namespace std;

struct BankAccount {
    int accountNumber;
    string accountHolder;
    double balance;
};

int main() {
    vector<BankAccount> accounts;
    int choice;

    cout << "--- Bank Account System ---" << endl;

    do {
        cout << endl;
        cout << "1. Create New Account" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Display Account Details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                BankAccount acc;
                cout << "Enter Account Number: ";
                cin >> acc.accountNumber;
                cin.ignore();
                cout << "Enter Account Holder Name: ";
                getline(cin, acc.accountHolder);
                cout << "Enter Initial Deposit: $";
                cin >> acc.balance;

                accounts.push_back(acc);
                cout << "Account created successfully!" << endl;
                break;
            }
            case 2: {
                int searchAcc;
                double amount;
                bool found = false;
                cout << "Enter Account Number for deposit: ";
                cin >> searchAcc;

                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == searchAcc) {
                        cout << "Enter deposit amount: $";
                        cin >> amount;
                        if (amount > 0) {
                            accounts[i].balance += amount;
                            cout << "$" << amount << " deposited successfully. New Balance: $" << fixed << setprecision(2) << accounts[i].balance << endl;
                        } else {
                            cout << "Invalid deposit amount." << endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 3: {
                int searchAcc;
                double amount;
                bool found = false;
                cout << "Enter Account Number for withdrawal: ";
                cin >> searchAcc;

                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == searchAcc) {
                        cout << "Enter withdrawal amount: $";
                        cin >> amount;
                        if (amount > accounts[i].balance) {
                            cout << "Insufficient balance!" << endl;
                        } else if (amount <= 0) {
                            cout << "Invalid withdrawal amount." << endl;
                        } else {
                            accounts[i].balance -= amount;
                            cout << "$" << amount << " withdrawn successfully. New Balance: $" << fixed << setprecision(2) << accounts[i].balance << endl;
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 4: {
                int searchAcc;
                bool found = false;
                cout << "Enter Account Number: ";
                cin >> searchAcc;

                for (int i = 0; i < accounts.size(); i++) {
                    if (accounts[i].accountNumber == searchAcc) {
                        cout << "--- Account Details ---" << endl;
                        cout << "Account Number: " << accounts[i].accountNumber << endl;
                        cout << "Holder Name:    " << accounts[i].accountHolder << endl;
                        cout << "Current Balance: $" << fixed << setprecision(2) << accounts[i].balance << endl;
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "Account not found." << endl;
                }
                break;
            }
            case 5:
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;