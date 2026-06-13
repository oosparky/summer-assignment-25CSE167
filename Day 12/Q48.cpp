#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1) {
        return false;
    }
    
    int sum = 0;
    
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    
    return sum == n;
}

int main() {
    int num;
    
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPerfect(num)) {
        cout << "Yes, it is a perfect number!" << endl;
    } else {
        cout << "No, it is not a perfect number!" << endl;
    }
    
    return 0;
}