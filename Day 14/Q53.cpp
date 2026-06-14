#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  
        }
    }
    return -1;  
}

int main() {
    int n, key, result;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nEnter the element to search: ";
    cin >> key;
    
    result = linearSearch(arr, n, key);
    
    if (result != -1) {
        cout << "Element found at position: " << result << endl;
    } else {
        cout << "Element not found!" << endl;
    }
    
    return 0;
}