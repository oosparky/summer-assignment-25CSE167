#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter size of square matrix (n x n): ";
    cin >> n;

    int A[10][10];

    cout << "\nEnter elements of Matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }

    cout << "\nMatrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << A[i][j] << "\t";
        cout << "\n";
    }

    bool isSymmetric = true;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] != A[j][i]) {
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric)
            break;
    }

    cout << "\nTranspose of Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << A[j][i] << "\t";
        cout << "\n";
    }

    cout << "\nElement-wise Check (A[i][j] == A[j][i]):\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (A[i][j] == A[j][i])
                cout << "OK\t";
            else
                cout << "FAIL\t";
        }
        cout << "\n";
    }

    cout << "\n=============================\n";
    if (isSymmetric)
        cout << "Result: Matrix IS Symmetric!\n";
    else
        cout << "Result: Matrix is NOT Symmetric!\n";
    cout << "=============================\n";

    return 0;
}