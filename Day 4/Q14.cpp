#include <iostream>
using namespace std;

int main() {
    int n, first = 0, second = 1, next;
    
    cout << "Enter the term number: ";
    cin >> n;
    
    if (n == 1) {
        cout << "Term " << n << " = 0" << endl;
        return 0;
    }
    
    if (n == 2) {
        cout << "Term " << n << " = 1" << endl;
        return 0;
    }
    
    for (int i = 2; i < n; i++) {
        next = first + second;
        first = second;
        second = next;
    }
    
    cout << "Term " << n << " = " << second << endl;
    
    return 0;
}