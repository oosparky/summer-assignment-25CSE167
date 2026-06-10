#include <iostream>
using namespace std;

int main() {
    string binary;
    int decimal = 0;
    
    cout << "Enter a binary number: ";
    cin >> binary;
    
    for (char c : binary) {
        
        decimal = decimal << 1;
        
        if (c == '1') {
            decimal += 1;
        }
    }
    
    cout << "Decimal: " << decimal << endl;
    
    return 0;
}