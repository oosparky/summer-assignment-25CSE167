#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name, destination;
    int seats;

    cout << "Enter Passenger Name: ";
    cin >> name;

    cout << "Enter Destination: ";
    cin >> destination;

    cout << "Enter Number of Seats: ";
    cin >> seats;

    cout << "\n----- Ticket Details -----" << endl;
    cout << "Passenger Name : " << name << endl;
    cout << "Destination    : " << destination << endl;
    cout << "Seats Booked   : " << seats << endl;
    cout << "Booking Successful!" << endl;

    return 0;
}