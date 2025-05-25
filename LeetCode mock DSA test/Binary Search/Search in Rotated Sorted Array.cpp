#include <bits/stdc++.h>

/*
    Problem Statement:
        You are given a sorted array that has been rotated at some unknown pivot.
            Original sorted:    [0, 1, 2, 4, 5, 6, 7]
            After rotation:     [4, 5, 6, 7, 0, 1, 2]
        You are given the array nums and a target value. 
        Return the index of target in the array. If it's not found, return -1.
        You must do it in O(log n) time.
*/

int search(std::vector<int>& nums, int target) {
    int low = 0;
    int high = nums.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        // left array
        if (nums[mid] == target) {
                return mid;
            }

        if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target < nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            //right array
            if (nums[mid] < target && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

    }
    return -1;
}

int main() {
    std::vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 0;

    int result = search(nums, target);
    if (result != -1) {
        std::cout << "Target " << target << " found at index: " << result << "\n";
    } else {
        std::cout << "Target " << target << " not found in the array.\n";
    }

    // Try another target
    target = 3;
    result = search(nums, target);
    if (result != -1) {
        std::cout << "Target " << target << " found at index: " << result << "\n";
    } else {
        std::cout << "Target " << target << " not found in the array.\n";
    }

    return 0;
}