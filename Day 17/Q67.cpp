#include <iostream>
#include <vector>
#include <set>

int main() {

    std::vector<int> arr1 = {1, 3, 4, 5, 7, 5}; 
    std::vector<int> arr2 = {2, 3, 5, 6, 8, 5}; 


    std::set<int> set1(arr1.begin(), arr1.end());

    std::set<int> intersectionSet;

    for (int num : arr2) {
        if (set1.count(num)) { 
            intersectionSet.insert(num);
        }
    }

    std::cout << "Intersection of the two arrays: ";
    for (int num : intersectionSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}