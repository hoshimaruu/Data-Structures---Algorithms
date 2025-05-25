#include <bits/stdc++.h>

/*
    Problem Statement:
        A peak element is an element that is strictly greater than its neighbors.
        You are given an array nums where nums[i] ≠ nums[i+1] for all valid i.
        Find a peak element and return its index.
        You may assume that nums[-1] = -∞ and nums[n] = -∞.
        You must solve it in O(log n) time, so use binary search.
*/

int findPeakElement(const std::vector<int>& nums) {
    int low = 0;
    int high = nums.size() - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] < nums[mid + 1]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }
    return low;
}