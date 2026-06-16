#include <iostream>
using namespace std;

int main() {
    int start, end;
    
    cout << "Enter the starting number: ";
    cin >> start;
    
    cout << "Enter the ending number: ";
    cin >> end;
    
    cout << "\nPrime numbers between " << start << " and " << end << ":" << endl;
    cout << "------------------------" << endl;
    
    for (int num = start; num <= end; num++) {
        bool isPrime = true;
        
        if (num <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i < num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        
        if (isPrime) {
            cout << num << " ";
        }
    }
    
    cout << endl;
    
    return 0;
}