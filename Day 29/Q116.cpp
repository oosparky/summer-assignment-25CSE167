#include <iostream>
#include <string>
using namespace std;

int main()
{
    int itemId, quantity;
    string itemName;
    float price;

    cout << "Enter Item ID: ";
    cin >> itemId;

    cout << "Enter Item Name: ";
    cin >> itemName;

    cout << "Enter Quantity: ";
    cin >> quantity;

    cout << "Enter Price: ";
    cin >> price;

    cout << "\n----- Inventory Details -----" << endl;
    cout << "Item ID   : " << itemId << endl;
    cout << "Item Name : " << itemName << endl;
    cout << "Quantity  : " << quantity << endl;
    cout << "Price     : Rs. " << price << endl;

    return 0;
}