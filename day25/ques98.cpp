 #include <bits/stdc++.h>

using namespace std;

int main() {
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    int freq1[256] = {0};
    int freq2[256] = {0};

    for (int i = 0; i < str1.length(); ++i) {
        freq1[(unsigned char)str1[i]]++;
    }

    for (int i = 0; i < str2.length(); ++i) {
        freq2[(unsigned char)str2[i]]++;
    }

    cout << endl << "Common characters: ";
    for (int i = 0; i < 256; ++i) {
        int commonCount = min(freq1[i], freq2[i]);
        for (int j = 0; j < commonCount; ++j) {
            cout << (char)i << " ";
        }
    }
    cout << endl;

    return 0;
}