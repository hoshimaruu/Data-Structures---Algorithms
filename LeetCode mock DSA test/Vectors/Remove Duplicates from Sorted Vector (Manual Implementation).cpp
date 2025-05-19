#include <iostream>
#include <algorithm>
#include <vector>

/*

Problem Statement:
    Given a sorted vector nums, 
    remove duplicates in-place such that each element appears only once. 
    Return the number of unique elements k. 
    The first k elements of nums should be the unique values.

    Constraints: 
        1 <= nums.size() <= 10^4
        -100 <= nums[i] <= 100
        nums is sorted in non-decreasing order

*/

int removeDuplicates(std::vector<int>& nums) {

    if (nums.empty()) return 0;

    std::cout << "Original Vector: ";
    for (const auto num : nums) {
        std::cout << num << " ";
    } 

    int write = 1;

    for (int read = 1; read < nums.size(); ++read) {
        if (nums[read] != nums[read - 1]) {
            nums[write] = nums[read];
            ++write;
        }
    }

    std::cout << "\nModified vector (Manual Implementation): ";
    for (int i = 0; i < write; i++) {
        std::cout << nums[i] << " ";
    } 

    std::cout << "\nNumber of valid indexes: " << write;

    return 0;
}

int main() {
    std::vector<int> nums = {0, 0, 1, 1, 2, 2, 3, 4, 4};
    removeDuplicates(nums);
}