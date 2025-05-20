#include <iostream>
#include <algorithm>
#include <vector>

/*
Problem Statement:
    Given a vector of integers, return a new vector where:
        1. You square each number.
        2. Then, you keep only the even squares.
*/

class Solution {
    public:
        std::pair<std::vector<int>, std::vector<int>> squareAndFilterEvens(const std::vector<int>& nums) {
            std::vector<int> squared;
            std::vector<int> even;
            squared.reserve(nums.size());

            // squares the indices
            for (int num : nums) {
                squared.push_back(num * num);
            }

            //find the even numbers
            for (int num : squared) {
                if (num % 2 == 0) {
                    even.push_back(num);
                }
            }

            // std::cout << "Original Vector: ";
            // for (int num : nums) std::cout << num << " ";

            // std::cout << "\n\nSquared Vector: ";
            // for (int num : squared) std::cout << num << " ";

            // std::cout << "\n\nEven Numbers: ";
            // for (int num : even) std::cout << num << " ";

            return {squared, even};
        }
};

int main() {
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5};
    auto [squared, even] = s.squareAndFilterEvens(nums);

    std::cout << "\n\n(Accessing from main)\nSquared: ";
    for (int n : squared) std::cout << n << " ";
    std::cout << "\nEven Squares: ";
    for (int n : even) std::cout << n << " ";

    return 0;
}