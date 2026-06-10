#include <iostream>

int main() {
    std::cout << "Enter number of rows: ";
    int rows;
    std::cin >> rows;

    for (int i = rows; i >= 1; --i) {

        for (int space = 1; space <= rows - i; ++space) {
            std::cout << " ";
        }
        
        for (int j = 1; j <= 2 * i - 1; ++j) {
            std::cout << "*";
        }
        std::cout << '\n';
    }

    return 0;
}