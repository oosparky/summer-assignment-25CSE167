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

    int temp[n];
    int newSize = 0;

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == temp[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            temp[newSize] = arr[i];
            newSize++;
        }
    }

    cout << "\nArray after removing duplicates: ";
    for (int i = 0; i < newSize; i++)
        cout << temp[i] << " ";
    cout << endl;

    cout << "New size: " << newSize << endl;

    return 0;
}