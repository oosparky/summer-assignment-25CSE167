#include <iostream>
using namespace std;

int main() {
    int num, limit;
    
    cout << "Enter a number: ";
    cin >> num;
    
    cout << "Enter the limit: ";
    cin >> limit;
    
    cout << "\n========================" << endl;
    cout << "  Multiplication Table of " << num << endl;
    cout << "========================" << endl;
    
    for (int i = 1; i <= limit; i++) {
        cout << num << " * " << i << " = " << num * i << endl;
    }
    
    return 0;
}
