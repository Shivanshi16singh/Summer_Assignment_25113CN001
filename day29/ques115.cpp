#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    int choice;

    cout << "--- Menu-Driven String Operations System ---" << endl;
    cout << "Enter a string to work with: ";
    getline(cin, str);

    do {
        cout << endl;
        cout << "Current String: \"" << str << "\"" << endl;
        cout << "1. Find Length of String" << endl;
        cout << "2. Reverse the String" << endl;
        cout << "3. Convert to Uppercase" << endl;
        cout << "4. Check if Palindrome" << endl;
        cout << "5. Enter a New String" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        cout << endl;
        switch (choice) {
            case 1:
                cout << "Length of the string: " << str.length() << " characters." << endl;
                break;

            case 2: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                cout << "Reversed string: \"" << rev << "\"" << endl;
                break;
            }
            case 3: {
                string upperStr = str;
                for (int i = 0; i < upperStr.length(); i++) {
                    upperStr[i] = toupper(upperStr[i]);
                }
                cout << "Uppercase string: \"" << upperStr << "\"" << endl;
                break;
            }
            case 4: {
                string rev = str;
                reverse(rev.begin(), rev.end());
                if (str == rev) {
                    cout << "The string is a Palindrome!" << endl;
                } else {
                    cout << "The string is NOT a Palindrome." << endl;
                }
                break;
            }
            case 5:
                cout << "Enter new string: ";
                getline(cin, str);
                cout << "String updated successfully!" << endl;
                break;

            case 6:
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}