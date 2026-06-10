#include <iostream>
using namespace std;

int main() {
    long long num, reverse = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    long long original = num;
    if (num < 0)
        num = -num;
    while (num > 0) {
        reverse = reverse * 10 + (num % 10);
        num /= 10;
    }
    if (original < 0)
        reverse = -reverse;
    
    cout << "Original number: " << original << endl;
    cout << "Reversed number: " << reverse << endl;
    
    return 0;
}