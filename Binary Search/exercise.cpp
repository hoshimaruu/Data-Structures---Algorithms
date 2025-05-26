#include <iostream>
#include <vector>
#include <algorithm>

/*
    Problem Statement:  
        Given an array of integers nums which is sorted in ascending order, 
        and an integer target, return the index of the target 
        if it is in the array. If not, return -1.
*/

int binarySearch(const std::vector<int>& num, int target) {
    int low = 0;
    int high = num.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (num[mid] == target) {
            return mid;
        } else if (num[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums = {-10, -3, 0, 5, 9, 12};
    int target = 9;

    int result = binarySearch(nums, target);

    if (result != -1)
        std::cout << "Target found at index: " << result << std::endl;
    else
        std::cout << "Target not found in the array." << std::endl;

    return 0;
}