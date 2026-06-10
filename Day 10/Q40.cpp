#include <iostream>

int main() {
    std::cout << "Enter number of rows: ";
    int rows;
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << " ";
        }
        for (int j = 0; j < i; ++j) {
            std::cout << char('A' + j);
        }
        for (int j = i - 2; j >= 0; --j) {
            std::cout << char('A' + j);
        }
        std::cout << '\n';
    }

    return 0;
}