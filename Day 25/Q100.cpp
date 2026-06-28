#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of words: ";
    cin >> n;

    string word[n], temp;

    cout << "Enter the words:\n";
    for (int i = 0; i < n; i++)
        cin >> word[i];

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (word[j].length() > word[j + 1].length())
            {
                temp = word[j];
                word[j] = word[j + 1];
                word[j + 1] = temp;
            }
        }
    }

    cout << "\nWords sorted by length:\n";
    for (int i = 0; i < n; i++)
        cout << word[i] << endl;

    return 0;
}