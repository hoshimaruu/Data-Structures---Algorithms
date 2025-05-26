#include <bits/stdc++.h>

/*
    Problem Statement:
    Suppose an array of length n sorted in ascending order
    is rotated between 1 and n times.
    Given the rotated array nums with unique elements, 
    return the minimum element of this array.
    You must solve it in O(log n) time.
*/

int minNum(std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    return nums[left];
}

int main () {
    std::vector<int> num = {11, 13, 15, 17};
    auto result = minNum(num);

    std::cout << result;
}