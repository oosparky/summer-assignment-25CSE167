#include <iostream>
using namespace std;

int main()
{
    int score = 0, ans;

    cout << "===== QUIZ APPLICATION =====" << endl;

    cout << "\n1. What is the capital of India?" << endl;
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 2)
        score++;

    cout << "\n2. Which language is used for Object-Oriented Programming?" << endl;
    cout << "1. C\n2. HTML\n3. C++\n4. SQL\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 3)
        score++;

    cout << "\n3. How many days are there in a week?" << endl;
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> ans;

    if (ans == 3)
        score++;

    cout << "\nYour Score = " << score << " out of 3" << endl;

    if (score == 3)
        cout << "Excellent!" << endl;
    else if (score == 2)
        cout << "Good Job!" << endl;
    else
        cout << "Keep Practicing!" << endl;

    return 0;
}