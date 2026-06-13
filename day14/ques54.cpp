#include <bits/stdc++.h>
using namespace std;

int main() {
    cout << "Enter the size of array: " << endl;
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the element " << i + 1 << " : " << endl;
        cin >> arr[i];
    }

    int target;
    cout << "Enter the target: " << endl;
    cin >> target;

    // Map to store frequencies

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            mpp[arr[i]]++; 
    }

    // Print the frequency from the map
    
    cout << "Frequency of " << target << " is: " << mpp[target] << endl;

    return 0;
}