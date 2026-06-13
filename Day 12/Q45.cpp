#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.length() - 1;
    
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main() {
    string str;
    
    cout << "Enter a string: ";
    getline(cin, str);
    
    if (isPalindrome(str)) {
        cout << "Yes, it is a palindrome!" << endl;
    } else {
        cout << "No, it is not a palindrome!" << endl;
    }
    
    return 0;
}