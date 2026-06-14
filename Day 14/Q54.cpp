#include <iostream>
using namespace std;

int main() {
    int n, key, count = 0;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "\nEnter element to find frequency: ";
    cin >> key;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            count++;
        }
    }
    
    cout << "Frequency of " << key << ": " << count << endl;
    
    return 0;
}