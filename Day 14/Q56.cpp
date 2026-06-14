#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nArray: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    cout << "\n\nDuplicate elements: ";
    int found = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                found = 1;
                break;
            }
        }
    }
    
    if (found == 0) {
        cout << "No duplicates found!" << endl;
    }
    
    return 0;
}