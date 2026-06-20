#include <iostream>
using namespace std;

int main() {
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    // Input dimensions of Matrix B
    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    if (c1 != r2) {
        cout << "\nMultiplication NOT possible!\n";
        cout << "Columns of A (" << c1 << ") must equal Rows of B (" << r2 << ")\n";
        return 0;
    }

    int A[10][10], B[10][10], C[10][10];

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            C[i][j] = 0;

    cout << "\nEnter elements of Matrix A (" << r1 << "x" << c1 << "):\n";
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    cout << "\nEnter elements of Matrix B (" << r2 << "x" << c2 << "):\n";
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "]: ";
            cin >> B[i][j];
        }

    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            for (int k = 0; k < c1; k++)
                C[i][j] += A[i][k] * B[k][j];

    cout << "\nMatrix A (" << r1 << "x" << c1 << "):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++)
            cout << A[i][j] << "\t";
        cout << "\n";
    }

    cout << "\nMatrix B (" << r2 << "x" << c2 << "):\n";
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++)
            cout << B[i][j] << "\t";
        cout << "\n";
    }
    cout << "\nMatrix A x B (" << r1 << "x" << c2 << "):\n";
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++)
            cout << C[i][j] << "\t";
        cout << "\n";
    }

    return 0;
}