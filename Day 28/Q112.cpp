#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    long long mobile;

    cout << "Enter Contact Name: ";
    cin >> name;

    cout << "Enter Mobile Number: ";
    cin >> mobile;

    cout << "\n----- Contact Details -----" << endl;
    cout << "Name   : " << name << endl;
    cout << "Mobile : " << mobile << endl;

    return 0;
}