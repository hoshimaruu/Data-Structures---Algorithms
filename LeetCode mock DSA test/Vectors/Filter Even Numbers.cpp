#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
/*

Problem Statement:
    Given a vector of integers, 
    return a new vector that contains only the even numbers, 
    in the same order they appeared.
*/
class Solution {
public:
    std::vector<int> filterEvenNumbers(const std::vector<int>& nums) {
        std::vector<int> even;
        even.reserve(nums.size()); // reserve blocks that equal to the size of nums()

        for (int num : nums) {
            if (num % 2 == 0) {
                even.push_back(num);
            }
        }

        return even;

    }
};

int main() {
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5, 6};
    std::vector<int> result = s.filterEvenNumbers(nums);
    std::cout << "Even numbers: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}