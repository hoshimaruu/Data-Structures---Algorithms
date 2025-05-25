#include <iostream>
#include <bits/stdc++.h>

class Solution {
public:
    std::vector<int> targetIndices(const std::vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        int first = -1, last = -1;

        // Find first occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        if (left >= n || nums[left] != target) return {}; // not found
        first = left;

        // Find last occurrence
        right = n - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        last = right;

        std::vector<int> indices;
        for (int i = first; i <= last; ++i) {
            indices.push_back(i);
        }
        return indices;
    }
};

