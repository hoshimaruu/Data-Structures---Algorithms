#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
/*

Problem Statement:
    Given a vector of integers nums, 
    move all 0s to the end of it while maintaining the relative order of the non-zero elements.
    You must do this in-place without making a copy of the array.

    Constraints:   
        1 <= nums.size() <= 10^4
        -2^31 <= nums[i] <= 2^31 - 1
*/
class Solution {
public:
    void moveZeroes(std::vector<int>& nums) {
        int pos = 0; // Position to place the next non-zero
        
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != 0) {
                nums[pos++] = nums[i]; // Move non-zero to the front
            }
        }
        
        // Fill remaining elements with 0
        while (pos < nums.size()) {
            nums[pos++] = 0;
        }
    }
};

int main() {
    Solution s;
    std::vector<int> nums = {0, 1, 0, 3, 12};
    s.moveZeroes(nums);

    std::cout << "Modified vector: ";
    for (int num : nums) std::cout << num << " ";
    std::cout << "\n";

    return 0;
}