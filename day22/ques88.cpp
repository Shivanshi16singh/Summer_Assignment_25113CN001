#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";

    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ' && str[i] != '\t') {
            result += str[i];
        }
    }

    cout << endl;
    cout << "String after removing spaces: " << result << endl;

    return 0;
}