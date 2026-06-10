#include <iostream>

int main() {
    std::cout << "Enter size of square: ";
    int n;
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            
            if (i == 1 || i == n || j == 1 || j == n) {
                std::cout << "*";
            } else {
                std::cout << " ";  
            }
        }
        std::cout << '\n';
    }

    return 0;
}