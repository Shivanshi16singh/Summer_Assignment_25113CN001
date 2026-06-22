#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    int wordCount = 0;
    bool inWord = false;

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            if (!inWord) {
                wordCount++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << endl;
    cout << "Total number of words: " << wordCount << endl;

    return 0;
}