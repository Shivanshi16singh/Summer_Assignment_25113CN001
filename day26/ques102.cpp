#include <bits/stdc++.h>

using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    cout << endl;
    if (age >= 18) {
        cout << "You are eligible to vote!" << endl;
    } else if (age >= 0) {
        cout << "You are not eligible to vote yet." << endl;
        cout << "Years remaining to become eligible: " << (18 - age) << endl;
    } else {
        cout << "Invalid age entered." << endl;
    }

    return 0;
}