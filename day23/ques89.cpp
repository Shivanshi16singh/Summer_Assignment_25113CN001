#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int frequency[256] = {0};

    for (int i = 0; i < str.length(); ++i) {
        frequency[(unsigned char)str[i]]++;
    }

    char result = '\0';
    for (int i = 0; i < str.length(); ++i) {
        if (frequency[(unsigned char)str[i]] == 1) {
            result = str[i];
            break;
        }
    }

    cout << endl;
    if (result != '\0') {
        cout << "The first non-repeating character is: " << result << endl;
    } else {
        cout << "All characters are repeating or the string is empty." << endl;
    }

    return 0;
}