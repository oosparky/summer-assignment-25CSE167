#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int choice;

    cout << "Enter a string: ";
    cin >> str;

    cout << "\n1. Find Length";
    cout << "\n2. Convert to Uppercase";
    cout << "\n3. Reverse String";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Length = " << str.length();
            break;

        case 2:
            for(int i = 0; i < str.length(); i++)
                str[i] = toupper(str[i]);
            cout << "Uppercase String = " << str;
            break;

        case 3:
            for(int i = str.length() - 1; i >= 0; i--)
                cout << str[i];
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}