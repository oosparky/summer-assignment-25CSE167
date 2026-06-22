#include <iostream>
using namespace std;

int main() {
    char str[100];
    int length = 0;
    bool isPalindrome = true;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    while (str[length] != '\0') {
        length++;
    }

    cout << "\nString : " << str;
    cout << "\nLength : " << length;

    cout << "\n\nComparing Characters:\n";
    cout << "================================\n";
    for (int i = 0; i < length / 2; i++) {
        int j = length - 1 - i;
        cout << "str[" << i << "] = '" << str[i] << "'  "
             << "str[" << j << "] = '" << str[j] << "'  ";

        if (str[i] != str[j]) {
            isPalindrome = false;
            cout << "-- NOT EQUAL!\n";
        } else {
            cout << "-- EQUAL\n";
        }
    }
    cout << "================================\n";

    if (isPalindrome)
        cout << "\n\"" << str << "\" IS a Palindrome!\n";
    else
        cout << "\n\"" << str << "\" is NOT a Palindrome!\n";

    return 0;
}