#include <iostream>

int main() {

    int arr[] = {34, 12, 90, 5, 64, 22};
    int n = sizeof(arr) / sizeof(arr[0]); 

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
        
            if (arr[j] > arr[i]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    std::cout << "Array in descending order: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}