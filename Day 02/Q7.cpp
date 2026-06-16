#include <iostream>
using namespace std;

int main() {
    long long num;
    long long product = 1;
    
    cout << "Enter a number: ";
    cin >> num;
    if (num < 0)
        num = -num;
    if (num == 0) {
        cout << "Product of digits: 0" << endl;
        return 0;
    }
    while (num > 0) {
        product *= num % 10;
        num /= 10;
    }
    
    cout << "Product of digits: " << product << endl;
    
    return 0;
}