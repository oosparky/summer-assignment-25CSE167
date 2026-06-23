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
            if (freq[(int)ch] > 1)
                cout << "Repeating\n";
            else
                cout << "Non-Repeating\n";
        }
    }
    cout << "================================\n";

    int firstIndex = -1;
    char firstChar = '\0';

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[(int)str[i]] > 1) {
            firstIndex = i;
            firstChar  = str[i];
            break;
        }
    }

    cout << "\n================================\n";
    if (firstIndex != -1) {
        cout << "First Repeating Character : '"
             << firstChar << "'\n";
        cout << "Found at Index            :  "
             << firstIndex << "\n";
        cout << "Repeated                  :  "
             << freq[(int)firstChar] << " times\n";
    } else {
        cout << "No Repeating Character Found!\n";
        cout << "All characters are unique.\n";
    }
    cout << "================================\n";

    return 0;
}