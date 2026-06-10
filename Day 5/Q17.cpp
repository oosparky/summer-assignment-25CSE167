#include <iostream>
#include <cmath>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) {
        return false;
    }
    
    int sum = 1; 
    int limit = sqrt(n);
    
    for (int i = 2; i <= limit; i++) {
        if (n % i == 0) {
            sum += i;              
            int other = n / i;     
            if (other != i) {      
                sum += other;
            }
        }
    }
    
    return sum == n;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isPerfect(n)) {
        cout << n << " is a PERFECT number" << endl;
    } else {
        cout << n << " is NOT a perfect number" << endl;
    }
    
    return 0;
}