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
    cout << "Char  | Frequency | Status\n";
    cout << "================================\n";
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != ' ') {
            cout << " '" << ch << "'   |     "
                 << freq[(int)ch] << "     | ";
            if (freq[(int)ch] == 1)
                cout << "Non-Repeating\n";
            else
                cout << "Repeating\n";
        }
    }
    cout << "================================\n";

    int firstIndex = -1;
    char firstChar = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] == 1) {
            firstIndex = i;
            firstChar  = str[i];
            break;
        }
    }

    cout << "\n================================\n";
    if (firstIndex != -1) {
        cout << "First Non-Repeating Character: '"
             << firstChar << "'\n";
        cout << "Found at Index               :  "
             << firstIndex << "\n";
    } else {
        cout << "No Non-Repeating Character Found!\n";
        cout << "All characters are repeated.\n";
    }
    cout << "================================\n";

    return 0;
}