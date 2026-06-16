#include <iostream>
using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

bool isStrong(int n) {
    int original = n;
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        sum += factorial(digit);
        n /= 10;
    }
    
    return sum == original;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (isStrong(n)) {
        cout << n << " is a STRONG number" << endl;
    } else {
        cout << n << " is NOT a strong number" << endl;
    }
    
    return 0;
}