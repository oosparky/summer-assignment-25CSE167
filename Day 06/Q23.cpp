#include <iostream>
using namespace std;

int countSetBits(int n) {
    
    if (n == 0) {
        return 0;
    }
    
    
    return (n & 1) + countSetBits(n >> 1);
}

int main() {
    int number;
    
    cout << "Enter a number: ";
    cin >> number;
    
    cout << "Number of set bits: " << countSetBits(number) << endl;
    
    return 0;
}