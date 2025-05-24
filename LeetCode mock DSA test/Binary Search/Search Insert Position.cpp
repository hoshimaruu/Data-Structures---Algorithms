#include <iostream>
#include <vector>
#include <algorithm>

/*
    Problem Statement
        Given a sorted array of distinct integers a target value,
        return the index if the target is found.
        If not, return the index where it would be inserted in order to
        maintain the array's sorted order.
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
    return low;
}

int main() {
    std::vector<int> nums = {1, 3, 5, 6};
    int target = 2;

    int index = binarySearch(nums, target);
    std::cout << "Insert position: " << index << std::endl;

    return 0;
}