// Q55 Write a program to Second largest element. 
 #include <bits/stdc++.h>

using namespace std;

int findSecondLargest(const vector<int>& arr, int n) {
    
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 0; i < n; i++) {
        
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        return -1; 
    }

    return secondLargest;
}

int main() {
    cout << "Enter the size of array: ";
    int n;
    cin >> n;

    if (n <= 0) {
        cout << "Invalid array size." << endl;
        return 0;
    }

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    int result = findSecondLargest(arr, n);

    if (result == -1) {
        cout << "There is no second largest element (all elements might be equal or size < 2)." << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}