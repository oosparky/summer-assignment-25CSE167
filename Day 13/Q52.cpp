#include <iostream>
using namespace std;

int main() {
    int n;
    int evenCount = 0;
    int oddCount = 0;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    
    cout << "\nEven elements: " << evenCount << endl;
    cout << "Odd elements: " << oddCount << endl;
    
    return 0;
}