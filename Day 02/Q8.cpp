#include <iostream>
using namespace std;

int main() {
    long long num, original, reverse = 0, temp;
    
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;
    temp = num;
    if (temp < 0)
        temp = -temp;
    while (temp > 0) {
        reverse = reverse * 10 + (temp % 10);
        temp /= 10;
    }
    if (original < 0)
        reverse = -reverse;
    
    if (original == reverse)
        cout << original << " is a PALINDROME number!" << endl;
    else
        cout << original << " is NOT a palindrome number!" << endl;
    
    return 0;
}