#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<int> array1 = {4, 9, 5, 1, 4};
    std::vector<int> array2 = {9, 4, 9, 8, 4};

    std::set<int> elementsOfArray1(array1.begin(), array1.end());

    std::set<int> commonElements;

    for (int num : array2) {
        if (elementsOfArray1.count(num) > 0) { 
            commonElements.insert(num);
        }
    }

    std::cout << "Common elements: ";
    for (int num : commonElements) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}