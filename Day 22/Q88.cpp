#include <iostream>
using namespace std;

int main() {
    char str[200], result[200];
    int j = 0;
    int spaces = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            result[j] = str[i];
            j++;
        } else {
            spaces++;
        }
    }
    result[j] = '\0';  

    int originalLen = 0, newLen = 0;
    while (str[originalLen]     != '\0') originalLen++;
    while (result[newLen] != '\0') newLen++;

    cout << "\nOriginal String  : \"" << str     << "\"";
    cout << "\nAfter Removing   : \"" << result  << "\"";

    cout << "\n\nCharacter Process:\n";
    cout << "================================\n";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            cout << "' ' --> SPACE   (removed)\n";
        else
            cout << "'" << str[i] << "' --> kept\n";
    }
    cout << "================================\n";

    cout << "\nOriginal Length  : " << originalLen << "\n";
    cout << "Spaces Removed   : " << spaces      << "\n";
    cout << "New Length       : " << newLen       << "\n";
    cout << "\nFinal String     : " << result      << "\n";

    return 0;
}