#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    float average;
    
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    
    cout << "Enter " << n << " elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    
    average = (float)sum / n;
    
    cout << "\nSum: " << sum << endl;
    cout << "Average: " << average << endl;
    
    return 0;
}