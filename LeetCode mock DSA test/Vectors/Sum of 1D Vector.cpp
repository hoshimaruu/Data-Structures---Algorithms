#include <iostream>
#include <vector>
#include <algorithm>

/* 
Problem Statement:
    Given a vector of integers nums, 
    return a new vector runningSum such that runningSum[i] = 
                                nums[0] + nums[1] + ... + nums[i].

    Constraints:
        1 <= nums.size() <= 1000
        -10^6 <= nums[i] <= 10^6
*/
class Solution {
public:
    std::vector<int> runningSum(std::vector<int>& nums) {
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};

int main() {
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4};
    std::vector<int> result = s.runningSum(nums);

    for (int x : result) std::cout << x << " ";
    return 0;
}