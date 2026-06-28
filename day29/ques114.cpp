#include <bits/stdc++.h>

using namespace std;

int main() {
    int arr[100];
    int size = 0;
    int choice;

    cout << "--- Menu-Driven Array Operations System ---" << endl;

    do {
        cout << endl;
        cout << "1. Initialize Array" << endl;
        cout << "2. Insert Element" << endl;
        cout << "3. Delete Element" << endl;
        cout << "4. Search Element" << endl;
        cout << "5. Display Array" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cout << endl;
        switch (choice) {
            case 1: {
                cout << "Enter the number of elements: ";
                cin >> size;
                if (size < 0 || size > 100) {
                    cout << "Invalid size! Keeping size as 0." << endl;
                    size = 0;
                } else {
                    cout << "Enter " << size << " elements: ";
                    for (int i = 0; i < size; i++) {
                        cin >> arr[i];
                    }
                    cout << "Array initialized successfully!" << endl;
                }
                break;
            }
            case 2: {
                if (size >= 100) {
                    cout << "Array overflow! Cannot insert more elements." << endl;
                } else {
                    int element, index;
                    cout << "Enter element to insert: ";
                    cin >> element;
                    cout << "Enter index (0 to " << size << "): ";
                    cin >> index;

                    if (index < 0 || index > size) {
                        cout << "Invalid index!" << endl;
                    } else {
                        for (int i = size; i > index; i--) {
                            arr[i] = arr[i - 1];
                        }
                        arr[index] = element;
                        size++;
                        cout << "Element inserted successfully!" << endl;
                    }
                }
                break;
            }
            case 3: {
                if (size == 0) {
                    cout << "Array underflow! No elements to delete." << endl;
                } else {
                    int index;
                    cout << "Enter index to delete (0 to " << size - 1 << "): ";
                    cin >> index;

                    if (index < 0 || index >= size) {
                        cout << "Invalid index!" << endl;
                    } else {
                        for (int i = index; i < size - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        size--;
                        cout << "Element deleted successfully!" << endl;
                    }
                }
                break;
            }
            case 4: {
                if (size == 0) {
                    cout << "Array is empty!" << endl;
                } else {
                    int target;
                    bool found = false;
                    cout << "Enter element to search: ";
                    cin >> target;

                    for (int i = 0; i < size; i++) {
                        if (arr[i] == target) {
                            cout << "Element found at index: " << i << endl;
                            found = true;
                            break;
                        }
                    }
                    if (!found) {
                        cout << "Element not found in the array." << endl;
                    }
                }
                break;
            }
            case 5: {
                if (size == 0) {
                    cout << "Array is empty." << endl;
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < size; i++) {
                        cout << arr[i] << " ";
                    }
                    cout << endl;
                }
                break;
            }
            case 6:
                cout << "Exiting the system. Goodbye!" << endl;
                break;

            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}