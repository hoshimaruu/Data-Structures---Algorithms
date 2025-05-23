#include <iostream>
#include <vector>
/*
    Problem Statement: 
        Write a function that searches 
        through a vector of integers 
        and returns the index of the first number that is both:
        1. Even (num % 2 == 0)
        2. Greater than a given threshold X
*/

int findFirstEvenGreaterThanX(const std::vector<int>& nums, int x) {
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] > x && nums[i] % 2 == 0) {
            return i;  // return the index, not the number
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums = {3, 5, 7, 10, 13, 18};
    int x = 9;
    int result = findFirstEvenGreaterThanX(nums, x);

    if (result != -1)
        std::cout << "First even number greater than " << x << " is " << nums[result]
                  << " at index " << result << std::endl;
    else
        std::cout << "No even number greater than " << x << " found." << std::endl;
}