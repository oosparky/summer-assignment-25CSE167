#include <iostream>
#include <vector>

int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid; 
        }
        if (arr[mid] > target) {
            right = mid - 1;
        } 
    
        else {
            left = mid + 1;
        }
    }

    return -1; 
}

int main() {

    std::vector<int> sortedData = {11, 12, 22, 25, 34, 64, 90};
    int target = 25;

    int resultIdx = binarySearch(sortedData, target);

    if (resultIdx != -1) {
        std::cout << "Element " << target << " found at index: " << resultIdx << std::endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << std::endl;
    }

    return 0;
}