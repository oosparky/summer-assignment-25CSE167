#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int pos = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[pos] = arr[i];
            pos++;
        }
    }

    while (pos < n) {
        arr[pos] = 0;
        pos++;
    }

    cout << "\nArray after moving zeroes to end: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}