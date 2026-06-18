#include <iostream>
#include <vector>
#include <set>

int main() {
    
    std::vector<int> arr1 = {1, 3, 4, 5, 7};
    std::vector<int> arr2 = {2, 3, 5, 6, 8};

    std::set<int> unionSet;

    for (int num : arr1) {
        unionSet.insert(num);
    }
    for (int num : arr2) {
        unionSet.insert(num);
    }

    std::cout << "Union of the two arrays: ";
    for (int num : unionSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}