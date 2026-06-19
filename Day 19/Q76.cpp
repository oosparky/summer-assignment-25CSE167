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

    int primarySum = 0, secondarySum = 0;

    for (int i = 0; i < n; i++) {
        primarySum   += A[i][i];         
        secondarySum += A[i][n - 1 - i];  
    }

    int totalSum;
    if (n % 2 != 0)
        totalSum = primarySum + secondarySum - A[n/2][n/2];
    else
        totalSum = primarySum + secondarySum;

    cout << "\nPrimary Diagonal   (\\): ";
    for (int i = 0; i < n; i++)
        cout << A[i][i] << " ";
    cout << "= " << primarySum;

    cout << "\nSecondary Diagonal (/): ";
    for (int i = 0; i < n; i++)
        cout << A[i][n - 1 - i] << " ";
    cout << "= " << secondarySum;

    cout << "\n\nTotal Diagonal Sum = " << totalSum << "\n";

    return 0;
}