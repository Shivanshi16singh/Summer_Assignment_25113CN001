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
    cout << "Column-wise Sum:" << endl;
    for (int j = 0; j < cols; ++j) {
        int colSum = 0; 
        for (int i = 0; i < rows; ++i) {
            colSum += matrix[i][j]; 
        }
        cout << "Sum of Column " << j + 1 << " = " << colSum << endl;
    }

    return 0;
}