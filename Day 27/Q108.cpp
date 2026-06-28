#include <iostream>
using namespace std;

int main()
{
    float m1, m2, m3, m4, m5;
    float total, percentage;

    cout << "Enter marks of 5 subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5;

    cout << "\n----- Marksheet -----" << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage  : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade : A+" << endl;
    else if (percentage >= 75)
        cout << "Grade : A" << endl;
    else if (percentage >= 60)
        cout << "Grade : B" << endl;
    else if (percentage >= 40)
        cout << "Grade : C" << endl;
    else
        cout << "Grade : Fail" << endl;

    return 0;
}