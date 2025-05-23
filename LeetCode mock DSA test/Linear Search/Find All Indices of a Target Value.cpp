#include <iostream>
#include <vector>
/*
    Problem Statement: 
        Write a function that searches through a vector of integers 
        and returns a vector of all indices where the number is equal to a given target.
        If the target does not exist in the list, return an empty vector.
*/

std::vector<int> findAllIndices(const std::vector<int>& nums, int target) {
    std::vector<int> indices;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
            indices.push_back(i);
        }
    }
    return indices;
}
int main() {
    std::vector<int> nums = {1, 5, 3, 5, 8, 5, 10};
    int target = 5;
    std::vector<int> result = findAllIndices(nums, target);
    std::cout << "Target " << target << "Found at: ";
    for (int num : result) std::cout << num << " ";  
}