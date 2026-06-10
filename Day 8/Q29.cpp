#include <iostream>

int main() {
    std::cout << "Enter the number of rows: ";
    int rows = 0;
    std::cin >> rows;

    for (int i = 1; i <= rows; ++i) {          
        for (int j = 1; j <= i; ++j) {         
            std::cout << "* ";
        }
        std::cout << '\n';                  
    }

    return 0;
}