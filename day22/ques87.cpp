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

    cout << endl;
    cout << "Character Frequencies:" << endl;
    for (int i = 0; i < 256; ++i) {
        if (frequency[i] > 0) {
            cout << "'" << (char)i << "' : " << frequency[i] << endl;
        }
    }

    return 0;
}