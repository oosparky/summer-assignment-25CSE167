#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    int accNo;
    float balance;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Account Holder Name: ";
    cin >> name;

    cout << "Enter Balance: ";
    cin >> balance;

    cout << "\n----- Bank Account Details -----" << endl;
    cout << "Account Number : " << accNo << endl;
    cout << "Name           : " << name << endl;
    cout << "Balance        : Rs. " << balance << endl;

    return 0;
}