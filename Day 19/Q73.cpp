#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    
    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;
    
    int A[10][10], B[10][10], C[10][10];
    
    cout << "\nEnter elements of Matrix A:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "A[" << i+1 << "][" << j+1 << "]: ";
            cin >> A[i][j];
        }
    
    cout << "\nEnter elements of Matrix B:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "B[" << i+1 << "][" << j+1 << "]: ";
            cin >> B[i][j];
        }
    
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            C[i][j] = A[i][j] + B[i][j];
    
    auto printMatrix = [&](const string& name, int M[10][10]) {
        cout << "\nMatrix " << name << ":\n";
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++)
                cout << M[i][j] << "\t";
            cout << "\n";
        }
    };
    
    printMatrix("A", A);
    printMatrix("B", B);
    printMatrix("A + B", C);
    
    return 0;
}