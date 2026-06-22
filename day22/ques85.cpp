#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int start = 0;
    int end = str.length() - 1;
    bool isPalindrome = true;

    while (start < end) {
        if (str[start] != str[end]) {
            isPalindrome = false;
            break; 
        }
        start++;
        end--;
    }

    cout << endl;
    if (isPalindrome) {
        cout << "The string is a Palindrome." << endl;
    } else {
        cout << "The string is NOT a Palindrome." << endl;
    }

    return 0;
}