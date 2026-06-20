#include <iostream>

using namespace std;

int main() {
    int row, col;

    cout << "Enter the number of rows: "<<endl;
    cin >> row;
    cout << "Enter the number of columns: "<<endl;
    cin >> col;

    int matrix1[row][col], matrix2[row][col], sub[row][col];

    cout << "Enter elements of the first matrix:" <<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:"<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sub[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }

    cout << "Resultant Matrix (Sum of both matrices):"<<endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << sub[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}