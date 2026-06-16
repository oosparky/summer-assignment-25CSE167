#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;
    
    cout << "Enter the starting number: ";
    cin >> start;
    
    cout << "Enter the ending number: ";
    cin >> end;
    
    cout << "\nArmstrong numbers between " << start << " and " << end << ":" << endl;
    cout << "------------------------" << endl;
    
    for (int num = start; num <= end; num++) {
        int original = num;
        int sum = 0;
        int digits = 0;
        int temp = num;
        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, digits);
            temp /= 10;
        }
        
        if (sum == original)
            cout << num << " ";
    }
    
    cout << endl;
    
    return 0;
}