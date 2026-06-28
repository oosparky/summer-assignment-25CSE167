#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of names: ";
    cin >> n;

    string name[n], temp;

    cout << "Enter the names:\n";
    for (int i = 0; i < n; i++)
        cin >> name[i];

    // Bubble Sort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (name[j] > name[j + 1])
            {
                temp = name[j];
                name[j] = name[j + 1];
                name[j + 1] = temp;
            }
        }
    }

    cout << "\nNames in alphabetical order:\n";
    for (int i = 0; i < n; i++)
        cout << name[i] << endl;

    return 0;
} 