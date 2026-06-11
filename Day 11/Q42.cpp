#include <iostream>

int maximum(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << maximum(num1, num2);
    return 0;
}