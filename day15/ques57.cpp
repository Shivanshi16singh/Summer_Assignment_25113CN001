#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};

    int left = 0;
    int right = arr.size() - 1;
    
    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
    
    cout << "Reversed Array: ";

    for (int val : arr){
        cout << val << " ";
    } 
    
    return 0;
}