#include <iostream>
using namespace std;

int main() {
    int n, k;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter positions to rotate right: ";
    cin >> k;

    k = k % n;

    int temp[n];
    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    cout << "\nRotated array: ";
    for (int i = 0; i < n; i++)
        cout << temp[i] << " ";
    cout << endl;

    return 0;
}