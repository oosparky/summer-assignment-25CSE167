#include <iostream>
#include <string>
using namespace std;

int main()
{
    int empId;
    string name;
    float salary;

    cout << "Enter Employee ID: ";
    cin >> empId;

    cout << "Enter Employee Name: ";
    cin >> name;

    cout << "Enter Salary: ";
    cin >> salary;

    cout << "\n----- Employee Details -----" << endl;
    cout << "Employee ID : " << empId << endl;
    cout << "Name        : " << name << endl;
    cout << "Salary      : " << salary << endl;

    return 0;
}