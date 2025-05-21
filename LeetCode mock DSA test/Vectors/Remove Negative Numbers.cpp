#include <iostream>
#include <algorithm>
#include <vector>

/*
Problem Statement:
    Given a vector of integers, 
    return a new vector that contains only the non-negative numbers 
    (i.e., numbers >= 0), 
    in the same order they appeared.
*/

class Solution {
    public:
        std::vector<int> removeNegatives(const std::vector<int>& nums) {
            std::vector<int> removedNegatives;
            removedNegatives.reserve(nums.size());

            // push absolute indices from nums

            for (int num : nums) if (num >= 0) removedNegatives.push_back(num);

            // for (std::vector<int> : nums) removedNegatives.push_back(abs);
            // std::sort(removedNegatives.begin(), removedNegatives.end());
            // // for (int result : removedNegatives) std::cout << result << " ";
            // removedNegatives.erase(
            // std::remove_if(removedNegatives.begin(), 
            //                 removedNegatives.end(), [](int x){ return x < 0; }));

            std::sort(removedNegatives.begin(), removedNegatives.end());
            
            return removedNegatives;
        }
};

int main() {
    Solution s;
    std::vector<int> nums = {-3, 4, -1, 0, 7, -5};
    auto removedNegatives = s.removeNegatives(nums);
    std::cout << "Modified Vector: ";
    for (int result : removedNegatives) std::cout << result << " ";

    return 0;
}