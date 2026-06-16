#include <iostream>

int main() {
    std::cout << "Enter number of rows: ";
    int rows;
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int j = 0; j < i; ++j) {
            char ch = 'A' + j;  // Convert j to character
            std::cout << ch;
        }
        std::cout << '\n';
    }

    return 0;
}