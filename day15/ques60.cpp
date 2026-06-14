#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {0, 1, 0, 3, 12};
    
    int count = 0; 
    
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[count]);
            count++;
        }
    }
    cout << "Array after moving zeroes: ";

    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}