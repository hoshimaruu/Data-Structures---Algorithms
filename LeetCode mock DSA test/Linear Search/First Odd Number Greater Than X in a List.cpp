#include <iostream>
#include <list>

int findFirstOddGreaterThanX(const std::list<int>& nums, int x){
    int index = 0;
    for (int num : nums) {
        if (num % 2 != 0 && num > x) return index;
        ++index;
    }
    return -1;
}

int main() {
    std::list<int> nums = {2, 4, 6, 7, 10, 13};
    int x = 6;
    int result = findFirstOddGreaterThanX(nums, x);

    if (result != -1) std::cout << "Target " << x << " found at index " << result;
    else std::cout << "Target not found.";
}