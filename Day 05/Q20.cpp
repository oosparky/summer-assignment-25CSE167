#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    int original = n;
    int largest = 0;
    
    while (n % 2 == 0) {
        largest = 2;
        n /= 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largest = i;
            n /= i;
        }
    }
    
    if (n > 1) {
        largest = n;
    }
    
    cout << "Largest prime factor of " << original << " is: " << largest << endl;
    
    return 0;
}