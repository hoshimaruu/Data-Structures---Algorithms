#include <iostream>
#include <vector>

void insertionSort(std::vector<int>& nums){
    for (int i = 1; i < nums.size(); ++i) {
        int key = nums[i];
        int j = i - 1;
        while (j >= 0 && nums[j] > key) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}

int main() {
    std::vector<int> nums = {3, 5, 2, 5, 6, 10, 9};
    insertionSort(nums);
    for (int num : nums) {
        std::cout << num << " ";
    }
}