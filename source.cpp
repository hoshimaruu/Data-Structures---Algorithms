#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> nums = {8, 3, 16, -5, 7, 12, 1, -2, 9};
    nums.remove_if([](int x) {return x < 0 || x % 4 == 0;});

    for (std::list<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
        *it = *it * 2;
    }

    nums.sort();
    nums.reverse();
    std::cout << "Output (Decending order): ";
    for (int num : nums) std::cout << num << " ";
}