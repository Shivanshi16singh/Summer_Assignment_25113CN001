#include <bits/stdc++.h>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.length() != str2.length()) {
        cout << endl << "The strings are NOT Anagrams." << endl;
        return 0;
    }

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    cout << endl;
    if (str1 == str2) {
        cout << "The strings are Anagrams." << endl;
    } else {
        cout << "The strings are NOT Anagrams." << endl;
    }

    return 0;
}