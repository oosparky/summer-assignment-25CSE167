#include <iostream>
#include <string>
using namespace std;

int roll[50];
string name[50];
float marks[50];
int n;

void input()
{
    cout << "Enter number of students: ";
    cin >> n;

    for(int i=0; i<n; i++)
    {
        cout << "\nStudent " << i+1 << endl;

        cout << "Roll No: ";
        cin >> roll[i];

        cout << "Name: ";
        cin >> name[i];

        cout << "Marks: ";
        cin >> marks[i];
    }
}

void display()
{
    cout << "\n----- Student Records -----\n";

    for(int i=0; i<n; i++)
    {
        cout << "\nRoll No : " << roll[i];
        cout << "\nName    : " << name[i];
        cout << "\nMarks   : " << marks[i] << endl;
    }
}

int main()
{
    input();
    display();

    return 0;
}