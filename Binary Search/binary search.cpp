#include <iostream>
#include <vector>
#include <algorithm>

int binarySearch(const std::vector<int>& num, int target) {
    int low = 0;
    int high = num.size() - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        if (num[mid] == target) {
            return mid;
        } else if (num[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1; // not found!!
}

int main() {
    std::vector<int> myVector = {20, 30, 50, 40, 70, 56, 93};
    std::sort(myVector.begin(), myVector.end());
    int target = 50;
    int result = binarySearch(myVector, target);

    std::cout << result;
}