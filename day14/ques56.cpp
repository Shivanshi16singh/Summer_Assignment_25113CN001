// Q56 Write a program to Find duplicates in array. 
 #include <bits/stdc++.h>

using namespace std;


void findDuplicatesSorting(vector<int>& arr) {
    int n = arr.size();
    if (n <= 1) {
        cout << "No duplicates found." << endl;
        return;
    }

    // Sort the array so duplicates are adjacent
    sort(arr.begin(), arr.end());

    cout << "Duplicate elements are: ";
    bool hasDuplicates = false;

    for (int i = 0; i < n - 1; i++) {
        // If current element matches the next one
        if (arr[i] == arr[i + 1]) {
            // Print it only once, even if it appears 3+ times
            if (!hasDuplicates || arr[i] != arr[i - 1]) {
                cout << arr[i] << " ";
                hasDuplicates = true;
            }
        }
    }

    if (!hasDuplicates) {
        cout << "None";
    }
    cout << endl;
}

int main() {
    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    findDuplicatesSorting(arr);

    return 0;
}