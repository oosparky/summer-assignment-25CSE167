#include <iostream>
using namespace std;

int power(int base, int exp) {

    if (exp == 0) {
        return 1;
    }
    
    if (exp % 2 == 0) {
    
        int temp = power(base, exp / 2);
        return temp * temp;
    } else {
    
        return base * power(base, exp - 1);
    }
}

int main() {
    int x, n;
    
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;
    
    cout << x << "^" << n << " = " << power(x, n) << endl;
    
    return 0;
}