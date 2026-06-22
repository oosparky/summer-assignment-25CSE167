#include <iostream>
using namespace std;

int main() {
    char str[200];
    int freq[256] = {0}; 

    cout << "Enter a string: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
    }

    int length = 0;
    while (str[length] != '\0')
        length++;

    cout << "\nString : " << str;
    cout << "\nLength : " << length;

    cout << "\n\nCharacter Frequency Table:\n";
    cout << "================================\n";
    cout << "Char  | ASCII | Frequency\n";
    cout << "================================\n";

    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            if (i == 32)
                cout << "' '   |  " << i << "   |  " << freq[i] << "\n";
            else
                cout << " '" << (char)i << "'  |  " << i << "   |  " << freq[i] << "\n";
        }
    }
    cout << "================================\n";

    cout << "\nAlphabet Frequency:\n";
    cout << "================================\n";
    bool found = false;
    for (int i = 'A'; i <= 'Z'; i++) {
        int total = freq[i] + freq[i + 32];  
        if (total > 0) {
            cout << " '" << (char)i << "' or '"
                 << (char)(i+32) << "'  :  " << total << "\n";
            found = true;
        }
    }
    if (!found)
        cout << "No alphabets found!\n";
    cout << "================================\n";

    int maxFreq = 0;
    char maxChar = ' ';
    for (int i = 32; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }

    cout << "\nMost Frequent Character: '"
         << maxChar << "' (appears " << maxFreq << " times)\n";

    return 0;
}