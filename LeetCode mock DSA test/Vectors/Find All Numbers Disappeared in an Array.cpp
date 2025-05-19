#include <iostream>
#include <algorithm>
#include <vector>

/*

Problem Statement:
    Given an array nums of n integers where nums[i] is in the range [1, n],
    some elements appear twice and others appear once.
    Return an array of all the integers in the range [1, n] that do not appear in nums.

    Constraints: 
        1 <= nums.length <= 10^5
        1 <= nums[i] <= nums.length

*/
class Solution {
    public:
        std::vector<int> findDisappearedNumbers(std::vector<int>& nums){
            for (int i = 0; i < nums.size(); ++i) {
                int index = std::abs(nums[i]) - 1;
                if (nums[index] > 0) {
                    nums[index] = -nums[index];
                }
            }

            std::vector<int> result;
            for (int i = 0; i < nums.size(); ++i) {
                if (nums[i] > 0) {
                    result.push_back(i + 1);  // not visited
                }
            }
                return result;
        }
};


int main() {
    Solution s;
    std::vector<int> nums = {3, 1, 2, 3, 4, 2, 5};
    std::vector<int> missing = s.findDisappearedNumbers(nums);
    std::cout << "Missing numbers: ";
    for (int num : missing) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}