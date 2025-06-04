#include <iostream>
#include <vector>


void selectionSort(std::vector<int>& nums) {
    int n = nums.size();
    
    for (int i = 1; i < n; ++i) {
        int key = nums[i];
        int j = i - 1;

        while(j >= 0 && nums[j] > key) {
            nums[j + 1] == nums[j];
            j--;
        }

        nums[j+1] = key;
    }
}  

void insertionSort(std::vector<int>& nums) {
    for (int i = 1; i < nums.size(); ++i) {
        int key = nums[i];
        int j = i - 1;
        while (j >=0 && nums[j] > key) {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = key;
    }
}

int main() {

}