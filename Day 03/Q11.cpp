#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter second number: ";
    cin >> num2;
    int a = num1;
    int b = num2;
    
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    
    cout << "GCD of " << num1 << " and " << num2 << " = " << a << endl;
    
    return 0;
}