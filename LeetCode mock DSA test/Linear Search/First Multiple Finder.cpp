#include <iostream>
#include <vector>

/*
    Problem Statement: 
        Write a function that searches through a vector of integers 
        and returns the first number that is a multiple of a given target.
        If no multiple is found, return -1.
*/

int linearSearch(std::vector<int> num, int size, int target) {
    for (int i = 0; i < size; ++i) {
        if (num[i] % target == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> nums = {3, 7, 10, 15, 22};
    int size  = nums.size();
    int target = 5;
    int result = linearSearch(nums, size, target);

    if (result != -1) std::cout << "Target " << target << " found at index " << result << ". ";
    else std::cout << "Target not found. Exiting...";
}