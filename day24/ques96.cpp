#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string result = "";
    bool visited[256] = {false};

    for (int i = 0; i < str.length(); ++i) {
        if (!visited[(unsigned char)str[i]]) {
            result += str[i];
            visited[(unsigned char)str[i]] = true;
        }
    }

    cout << endl;
    cout << "String after removing duplicates: " << result << endl;

    return 0;
}