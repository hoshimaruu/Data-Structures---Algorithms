#include <iostream>
#include <algorithm>
#include <vector>

/*
Problem Statement:
    Remove all occurrences of a given target value from a vector.

    Constraints:
        You can use STL algorithms like remove_if, erase, or loops.
        You should not create a new vector unless you want to practice both ways 
        (in-place vs. out-of-place).
*/

class Solution {
    public:
        std::vector<int> removeTarget(const std::vector<int>& nums, int targ /*target value*/) {
            std::vector<int> removedTarget;
            for (int num : nums) removedTarget.push_back(num);
            removedTarget.erase(std::remove_if(removedTarget.begin(), 
                                removedTarget.end(), [=](int x){
                                    return targ == x;
                                }), removedTarget.end());
            
            return removedTarget;
        }
};

int main() {
    Solution s;
    std::vector<int> nums = {3, 1, 2, 3, 4, 3};
    int targ = 3;
    auto target = s.removeTarget(nums, targ);
    std::cout << "Vector: ";
    for (int num : target) std::cout << num << " ";

    return 0;
}