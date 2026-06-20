#include <iostream>

using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns for first matrix: "<<endl;
    cin >> r1 >> c1;

    cout << "Enter rows and columns for second matrix: "<<endl;
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "\nError! Column of first matrix not equal to row of second. Multiplication impossible.";
        return 0;
    }

    int matrix1[r1][c1], matrix2[r2][c2], product[r1][c2];

    cout << "Enter elements of the first matrix:"<<endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c1; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:"<<endl;
    for (int i = 0; i < r2; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << "Enter element at position (" << i + 1 << "," << j + 1 << "): ";
            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            product[i][j] = 0;
        }
    }

    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            for (int k = 0; k < c1; ++k) {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "Resultant Product Matrix:"<<endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) {
            cout << product[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}