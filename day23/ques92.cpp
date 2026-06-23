#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int frequency[256] = {0};
    int maxCount = 0;
    char maxChar = '\0';

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ' && str[i] != '\t') {
            frequency[(unsigned char)str[i]]++;
        }
    }

    for (int i = 0; i < str.length(); ++i) {
        if (frequency[(unsigned char)str[i]] > maxCount) {
            maxCount = frequency[(unsigned char)str[i]];
            maxChar = str[i];
        }
    }

    cout << endl;
    if (maxCount > 0) {
        cout << "The maximum occurring character is '" << maxChar << "' with a frequency of " << maxCount << endl;
    } else {
        cout << "The string is empty or contains only spaces." << endl;
    }

    return 0;
}