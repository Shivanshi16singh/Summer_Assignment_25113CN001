#include <bits/stdc++.h>

using namespace std;

bool compareLength(const string &a, const string &b) {
    return a.length() < b.length();
}

int main() {
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);
    string word;
    vector<string> words;

    while (ss >> word) {
        words.push_back(word);
    }

    sort(words.begin(), words.end(), compareLength);

    cout << endl << "Words sorted by length:" << endl;
    for (int i = 0; i < words.size(); i++) {
        cout << words[i] << endl;
    }

    return 0;
}