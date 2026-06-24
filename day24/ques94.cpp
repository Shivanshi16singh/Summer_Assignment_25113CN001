#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (str.length() == 0) {
        cout << endl << "Compressed string: " << endl;
        return 0;
    }

    string compressed = "";
    int count = 1;

    for (int i = 0; i < str.length(); ++i) {
        if (i + 1 < str.length() && str[i] == str[i + 1]) {
            count++;
        } else {
            compressed += str[i] + to_string(count);
            count = 1;
        }
    }

    cout << endl;
    cout << "Compressed string: " << compressed << endl;

    return 0;
}