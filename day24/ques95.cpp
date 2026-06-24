#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    string longestWord = "";
    string currentWord = "";

    for (int i = 0; i <= str.length(); ++i) {
        if (i < str.length() && str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            currentWord += str[i];
        } else {
            if (currentWord.length() > longestWord.length()) {
                longestWord = currentWord;
            }
            currentWord = "";
        }
    }

    cout << endl;
    cout << "The longest word is: " << longestWord << endl;

    return 0;
}