#include <iostream>
#include <string>
using namespace std;

int main()
{
    int roll;
    string name;
    float marks;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Marks: ";
    cin >> marks;

    cout << "\n----- Student Record -----" << endl;
    cout << "Roll Number : " << roll << endl;
    cout << "Name        : " << name << endl;
    cout << "Marks       : " << marks << endl;

    return 0;
}