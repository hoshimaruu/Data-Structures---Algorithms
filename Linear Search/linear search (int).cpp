#include <iostream>
#include <vector>

int linearSearch(std::vector<int> vec, int size, int target) {
    for (int i = 0; i < size; i++) {
        if (vec[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    
    std::vector<int> myVector = {4, 2, 7, 1, 9};
    int size = myVector.size();
    int target = 2;

    int result = linearSearch(myVector, size, target);

    if (result != -1) {
        std::cout << "Target found at: " << result + 1 << std::endl;
    } else {
        std::cout << "Target not found" << std::endl;
    }

}