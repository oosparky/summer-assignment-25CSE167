#include <iostream>
#include <string>
using namespace std;

string compress(string s) {
    if (s.empty()) return "";
    
    string result = "";
    int count = 1;
    
    for (int i = 1; i <= (int)s.length(); i++) {
        if (i < (int)s.length() && s[i] == s[i-1]) {
            count++;
        } else {
            result += s[i-1];
            if (count > 1)
                result += to_string(count);
            count = 1;
        }
    }
    
    return (result.length() < s.length()) ? result : s;
}

int main() {
    string input;
    
    cout << "===== String Compression Program =====" << endl;
    cout << "Enter a string: ";
    cin >> input;
    
    string compressed = compress(input);
    
    cout << "\nOriginal  : " << input     << " (length: " << input.length()      << ")" << endl;
    cout << "Compressed: " << compressed  << " (length: " << compressed.length() << ")" << endl;
    
    if (compressed == input)
        cout << "\nNote: Compression didn't reduce size, original string returned." << endl;
    else
        cout << "\nCompression ratio: " 
             << (100 - (compressed.length() * 100 / input.length())) 
             << "% reduction" << endl;
    
    return 0;
}