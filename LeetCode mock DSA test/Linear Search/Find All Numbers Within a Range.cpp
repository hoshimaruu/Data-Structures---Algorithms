#include <iostream>
#include <list>

/*
    Problem Statement: 
        Write a function that searches through a std::list<int> 
        and returns a std::list<int> of all numbers that are:
        > Greater than or equal to minVal
        > Less than or equal to maxVal
        If no numbers match, return an empty list.
        
        Range inclusive: minVal <= number <= maxVal
*/

std::list<int> allNumbersWithinARange(const std::list<int>& nums, int minVal, int maxVal) {
    std::list<int> numWithinARange;
    for (int num : nums) 
        if (num >= minVal && num <= maxVal)
            numWithinARange.push_back(num);
    return numWithinARange;
}

int main() {
    std::list<int> nums = {1, 5, 8, 10, 12, 18};
    int minVal = 8;
    int maxVal = 15;
    auto result = allNumbersWithinARange(nums, minVal, maxVal);

    if (result.empty())
        std::cout << "target not found.";
    else 
        std::cout << "Matched Numbers: ";
        for (const auto& n : result) 
            std::cout << n << " ";
    return 0;
}