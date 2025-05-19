#include <iostream>
#include <algorithm>
#include <vector>

/*
Problem Statement:
    Given a sorted vector of integers nums, 
    remove the duplicates in-place such that each unique element appears only once. 
    The relative order of the elements should be preserved.

    Return the number of unique elements. 
    The first k elements of nums should contain the final result (unique values), 
    and the remaining elements beyond k don't matter.

    Constraints:
        1 <= nums.size() <= 10^4
        -100 <= nums[i] <= 100
        nums is sorted in non-decreasing order
    
    Notes: 
        - You must do this in-place with O(1) extra memory.
        - Don't use set or another container.
        - Return k, the number of unique elements.
        - After the function call, nums[0..k-1] should contain the unique elements.
*/
class Solution {
    public:
        int removeDuplicates(std::vector<int>& nums) {
                std::cout << "Original vector: ";
                for (int i = 0; i < nums.size(); i++) {
                    std::cout << nums[i] << " ";
                }

                auto unique = std::unique(nums.begin(), nums.end());
                int k = std::distance(nums.begin(), unique);

                // nums.erase(unique, nums.end());
                // nums.shrink_to_fit();

                std::cout << "\nModified nums: ";
                for (int i = 0; i < k; i++) {
                    std::cout << nums[i] << " ";
                }
                std::cout << "\nOnly first " << k << " are valid.";

                return k;
            };
};

int main() {
    Solution s;
    std::vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    s.removeDuplicates(nums);
}