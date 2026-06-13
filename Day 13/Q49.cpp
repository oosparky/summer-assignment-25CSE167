#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }
    
    cout << "\nArray elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}