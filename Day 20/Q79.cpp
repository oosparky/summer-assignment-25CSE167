#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int A[10][10];
    int rowSum[10] = {0};  

    // Input Matrix
    cout << "\nEnter elements of Matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            rowSum[i] += A[i][j];


    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << A[i][j] << "\t";
        cout << "\n";
    }

    cout << "\n==============================\n";
    cout << "Row-wise Sum:\n";
    cout << "==============================\n";
    for (int i = 0; i < rows; i++)
        cout << "Sum of Row " << i+1 << " = " << rowSum[i] << "\n";

    cout << "\n==============================\n";
    cout << "Matrix with Row Sums:\n";
    cout << "==============================\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << A[i][j] << "\t";
        cout << "| Sum = " << rowSum[i] << "\n";
    }

    int maxSum = rowSum[0], minSum = rowSum[0];
    int maxRow = 0, minRow = 0;

    for (int i = 1; i < rows; i++) {
        if (rowSum[i] > maxSum) {
            maxSum = rowSum[i];
            maxRow = i;
        }
        if (rowSum[i] < minSum) {
            minSum = rowSum[i];
            minRow = i;
        }
    }

    int totalSum = 0;
    for (int i = 0; i < rows; i++)
        totalSum += rowSum[i];

    cout << "\n==============================\n";
    cout << "Highest Row Sum : Row " << maxRow+1 << " = " << maxSum << "\n";
    cout << "Lowest  Row Sum : Row " << minRow+1 << " = " << minSum << "\n";
    cout << "Total Matrix Sum: " << totalSum << "\n";
    cout << "==============================\n";

    return 0;
}