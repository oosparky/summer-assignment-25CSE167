#include <iostream>
#include <string>
using namespace std;

int main()
{
    int bookId;
    string bookName, author;

    cout << "Enter Book ID: ";
    cin >> bookId;

    cout << "Enter Book Name: ";
    cin >> bookName;

    cout << "Enter Author Name: ";
    cin >> author;

    cout << "\n----- Library Record -----" << endl;
    cout << "Book ID     : " << bookId << endl;
    cout << "Book Name   : " << bookName << endl;
    cout << "Author Name : " << author << endl;

    return 0;
}