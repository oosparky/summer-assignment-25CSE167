#include <iostream>

int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    std::cin >> num;
    std::cout << factorial(num);
    return 0;
}