#include <iostream>
#include <cmath>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n = n / 10;
    }
    return count;
}

bool isArmstrong(int n) {
    int original = n;
    int digits = countDigits(n);
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;
        sum = sum + pow(digit, digits);
        n = n / 10;
    }
    
    return original == sum;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (isArmstrong(num)) {
        cout << "Yes, it is an Armstrong number!" << endl;
    } else {
        cout << "No, it is not an Armstrong number!" << endl;
    }
    
    return 0;
}