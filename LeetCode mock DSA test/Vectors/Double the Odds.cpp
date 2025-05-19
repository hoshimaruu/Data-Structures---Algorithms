#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
/*

Problem Statement:
    Given a vector of integers, return a new vector where all odd numbers are doubled.
    Even numbers remain unchanged.
*/
class Solution {
    public:
        std::vector<int> doubleOdds(const std::vector<int>& nums) {
            std::vector<int> doubled;
            std::transform(nums.begin(), nums.end(), std::back_inserter(doubled), [](int x){
                return (x % 2 != 0) ? x * 2 : x;
            });

            return doubled;
        }
};


int main() {
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    std::vector<int> result = s.doubleOdds(nums);

    std::cout << "Doubled Odds: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
    
}