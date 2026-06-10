#include <iostream>
using namespace std;

int main() {
    int decimal, remainder;
    string binary = "";
    
    cout << "Enter a decimal number: ";
    cin >> decimal;
    
    if (decimal < 0) {
        cout << "Please enter a positive number." << endl;
        return 0;
    }
    
    if (decimal == 0) {
        cout << "Binary: 0" << endl;
        return 0;
    }
    
    while (decimal > 0) {
        remainder = decimal % 2;
        binary = to_string(remainder) + binary;
        decimal = decimal / 2;
    }
    
    cout << "Binary: " << binary << endl;
    
    return 0;
}