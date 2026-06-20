#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int A[10][10];

    cout << "\nEnter elements of Matrix:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }

    cout << "\nMatrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << A[i][j] << "\t";
        cout << "\n";
    }

    int largest  = A[0][0];
    int smallest = A[0][0];
    int largeRow, largeCol, smallRow, smallCol;
    largeRow = largeCol = smallRow = smallCol = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (A[i][j] > largest) {
                largest  = A[i][j];
                largeRow = i;
                largeCol = j;
            }
            if (A[i][j] < smallest) {
                smallest = A[i][j];
                smallRow = i;
                smallCol = j;
            }
        }
    }

    cout << "\nMatrix with Positions:\n";
    cout << "==============================\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == largeRow && j == largeCol)
                cout << "[MAX:" << A[i][j] << "]\t";
            else if (i == smallRow && j == smallCol)
                cout << "[MIN:" << A[i][j] << "]\t";
            else
                cout << A[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\n==============================\n";
    cout << "Largest  Element = " << largest
         << "  at Position [" << largeRow+1 << "][" << largeCol+1 << "]\n";
    cout << "Smallest Element = " << smallest
         << "  at Position [" << smallRow+1 << "][" << smallCol+1 << "]\n";
    cout << "==============================\n";

    return 0;
}