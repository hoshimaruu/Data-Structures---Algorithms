#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
/*

Problem Statement:
    Given a vector of integers, 
    return a new vector where each element is doubled.
*/
class Solution {
public:
    std::vector<int> doubleElements(const std::vector<int>& nums) {
        std::vector<int> doubled;
        doubled.reserve(nums.size());

        for (int num: nums) {
            doubled.push_back(num * 2);
        }

        return doubled;
    }
};

int main() {
    Solution s;
    std::vector<int> nums = {1, 2, 3};
    std::vector<int> result = s.doubleElements(nums);

    std::cout << "Doubled Elements: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << "\n";
    
    return 0;
}