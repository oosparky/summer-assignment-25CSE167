#include <iostream>
using namespace std;

int main() {
    long long num;
    int count = 0;
    
    cout << "Enter a number: ";
    cin >> num;
    
    
    if (num < 0)
        num = -num;
    
    
    if (num == 0) {
        cout << "Number of digits: 1" << endl;
        return 0;
    }
    
    while (num > 0) {
        count++;
        num /= 10;
    }
    
    cout << "Number of digits: " << count << endl;
    
    return 0;
}