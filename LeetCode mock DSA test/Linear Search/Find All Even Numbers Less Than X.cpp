#include <iostream>
#include <list>

/*
    Problem Statement: 
        Write a function that searches through a std::list<int> 
        and returns a new std::list<int> containing all even numbers 
        that are strictly less than a given threshold X.
*/
std::list<int> findEvenNumThresholdToX(const std::list<int>& num, int target) {
    std::list<int> evenNum;
    for (int val : num)
        if (val % 2 == 0 && val < target)
            evenNum.push_back(val);
    return evenNum;
}

int main() {
    std::list<int> nums = {3, 8, 2, 11, 4, 6};
    int x = 7;
    auto result = findEvenNumThresholdToX(nums, x);
    std::cout << "Matched numbers: ";
    if (result.empty()) {
        std::cout << "empty";
    } else {
        for (const auto& n : result) {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}