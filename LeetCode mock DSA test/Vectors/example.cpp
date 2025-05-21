#include <iostream>
#include <vector>
#include <algorithm>

class Sorter {
public:

    Sorter(std::vector<int>& data) : numbers(data) {}

    void bubbleSort() {
        // low level 
        int n = numbers.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = 0; j < n - i - 1; ++j) {
                if (numbers[j] > numbers[j + 1]) {
                    // Swap without std::swap
                    int temp = numbers[j];
                    numbers[j] = numbers[j + 1];
                    numbers[j + 1] = temp;
                }
            }
        }
    }

    // Display the vector
    void print() const {
        for (int num : numbers) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

private:
    std::vector<int>& numbers;
};

int main() {
    std::vector<int> myNumbers = {4, 1, 9, 2, 7};

    Sorter sort(myNumbers); // ic-call niya yung sarili mong sort() function
    std::sort(myNumbers.begin(), myNumbers.end()); // ic-call niya yung sort() from algorithm library - high level

    std::cout << "Before sorting: ";
    sort.print();

    sort.bubbleSort();

    std::cout << "After sorting: ";
    sort.print();

    return 0;
}
