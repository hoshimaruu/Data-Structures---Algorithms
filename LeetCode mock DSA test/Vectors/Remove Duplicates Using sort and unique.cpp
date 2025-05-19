#include <iostream>
#include <algorithm>
#include <vector>

/*

Problem Statement:
    Given an unsorted vector of integers nums, 
    remove duplicates in-place using STL algorithms. 
    Return k, the number of unique elements. 
    The first k elements of nums should contain the unique values (order doesn't matter).

    Constraints: 
        1 <= nums.size() <= 10^4
        -10^4 <= nums[i] <= 10^4

*/
class Solution {
    public:
        int removeDuplicates(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());
        std::cout << "Original Vectors: ";
        for (int i = 0; i < nums.size(); i++) std::cout << nums[i] << " ";
        auto unique = std::unique(nums.begin(), nums.end());
        int k = std::distance(unique, nums.end()); // number of invalid indices
        int j = nums.size() - k; //number of valid indices

        nums.erase(unique, nums.end());
        nums.shrink_to_fit(); // clears unused indices

        std::cout << "\nModified Vectors: ";
        for (int i = 0; i < nums.size(); i++) std::cout << nums[i] << " ";
        std::cout << "\nNumber of invalid indices(duplicated): " << k;
        std::cout << "\nNumber of unique indices: " << j;

        return j, k;
    }
};

int main() {
    Solution s;
    std::vector<int> nums = {3, 1, 2, 3, 4, 2, 5};
    s.removeDuplicates(nums);
}