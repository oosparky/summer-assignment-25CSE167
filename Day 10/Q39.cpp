#include <iostream>

int main() {
    std::cout << "Enter number of rows: ";
    int rows;
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        
        for (int space = 1; space <= rows - i; ++space) {
            std::cout << " ";
        }
        for (int j = 1; j <= i; ++j) {
            std::cout << j;
        }
        for (int j = i - 1; j >= 1; --j) {
            std::cout << j;
        }
        std::cout << '\n';
    }

    return 0;
}