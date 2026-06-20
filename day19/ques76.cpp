#include <iostream>

using namespace std;

int main() {
    int size;

    cout << "Enter the size of the square matrix (Rows/Cols): "<<endl;
    cin >> size;

    int matrix[size][size];
    int mainDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    cout << "Enter elements of the matrix:"<<endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += matrix[i][i];                 
        secondaryDiagonalSum += matrix[i][size - 1 - i]; 
    }
    
    cout << "Matrix: "<<endl;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Sum of Principal (Main) Diagonal: " << mainDiagonalSum << endl;
    cout << "Sum of Secondary Diagonal: " << secondaryDiagonalSum << endl;

    return 0;
}