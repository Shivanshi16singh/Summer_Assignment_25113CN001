#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    int n = str.length();

    // Swapping characters from both ends moving towards the middle
    for (int i = 0; i < n / 2; ++i) {
        swap(str[i], str[n - 1 - i]);
    }

    cout << endl;
    cout << "Reversed string: " << str << endl;

    return 0;
}