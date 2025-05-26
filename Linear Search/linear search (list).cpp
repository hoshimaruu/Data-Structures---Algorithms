#include <iostream>
#include <list>

int linearSearch(const std::list<int>& nums, int target) {
    int index = 0;

    for (int num : nums) {
        if (num == target) {
            return index;  // found it!
        }
        ++index;
    }

    return -1;  // not found
}

int main() {
    std::list<int> nums = {3, 7, 10, 15, 22};
    int target = 10;

    int result = linearSearch(nums, target);

    if (result != -1)
        std::cout << "Target " << target << " found at index " << result << ".\n";
    else
        std::cout << "Target " << target << " not found.\n";
    return 0;
}
