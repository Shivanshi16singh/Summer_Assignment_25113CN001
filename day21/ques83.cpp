#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int vowels = 0, consonants = 0;

    for (int i = 0; i < str.length(); ++i) {
        char ch = str[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            
            char lowerCh = tolower(ch);

            if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << endl;
    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;

    return 0;
}