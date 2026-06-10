#include <iostream>
using namespace std;

int main() {
    long long num;
    int sum = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
        num = -num;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    
    cout << "Sum of digits: " << sum << endl;
    
    return 0;
}