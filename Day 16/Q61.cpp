#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements (1 to " << n+1 << "): ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int expected = (n + 1) * (n + 2) / 2;

    int actual = 0;
    for (int i = 0; i < n; i++)
        actual += arr[i];

    cout << "\nMissing number: " << expected - actual << endl;

    return 0;
}