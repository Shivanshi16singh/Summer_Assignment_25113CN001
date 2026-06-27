#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cout << "Enter the number of names: ";
    cin >> n;
    cin.ignore();

    string names[n];

    cout << "Enter " << n << " names:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, names[i]);
    }

    sort(names, names + n);

    cout << endl << "Names in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }

    return 0;
}