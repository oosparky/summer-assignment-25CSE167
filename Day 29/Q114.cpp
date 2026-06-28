#include <iostream>
using namespace std;

int main()
{
    int n, i, choice, sum = 0;

    cout << "Enter size of array: ";
    cin >> n;

    int a[n];

    cout << "Enter array elements: ";
    for(i = 0; i < n; i++)
        cin >> a[i];

    cout << "\n1. Display Array";
    cout << "\n2. Find Sum";
    cout << "\n3. Find Largest Element";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Array Elements: ";
            for(i = 0; i < n; i++)
                cout << a[i] << " ";
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += a[i];
            cout << "Sum = " << sum;
            break;

        case 3:
        {
            int max = a[0];
            for(i = 1; i < n; i++)
                if(a[i] > max)
                    max = a[i];
            cout << "Largest Element = " << max;
            break;
        }

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}