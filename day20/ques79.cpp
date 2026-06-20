#include <iostream>

using namespace std;

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << endl;
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    cout << endl;
    cout << "Entered Matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "Row-wise Sum:" << endl;
    for (int i = 0; i < rows; ++i) {
        int rowSum = 0; 
        for (int j = 0; j < cols; ++j) {
            rowSum += matrix[i][j];
        }
        cout << "Sum of Row " << i + 1 << " = " << rowSum << endl;
    }

    return 0;
}