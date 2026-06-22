#include <iostream>
using namespace std;

int main() {
    char str[200];
    int words = 0;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    for (int i = 0; str[i] != '\0'; i++) {
    
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            words++;
        }
    }

    if (str[0] != '\0')
        words++;

    cout << "\nSentence  : " << str;

    cout << "\n\nWord by Word Breakdown:\n";
    cout << "================================\n";
    int wordNum = 1;
    int start   = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i+1] == '\0') {

            cout << "Word " << wordNum++ << " : ";

            int end = (str[i] == ' ') ? i : i + 1;

            for (int k = start; k < end; k++)
                cout << str[k];
            cout << "\n";

            start = i + 1;
        }
    }
    cout << "================================\n";

    cout << "\nTotal Words = " << words << "\n";

    return 0;
}