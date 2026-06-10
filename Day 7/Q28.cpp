#include <iostream>
using namespace std;

int reverseNumber(int n, int rev = 0) {

    if (n == 0) {
        return rev;
    }
    
    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit;
    
    return reverseNumber(n / 10, rev);
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Original number: " << number << endl;
    cout << "Reversed number: " << reverseNumber(number) << endl;
    
    return 0;
}