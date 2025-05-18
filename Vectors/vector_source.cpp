#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    // example of contiguous memory
    int userinput;
    int x, n, y;
    std::vector<int> numbers;

    std::cout << "How many numbers? ";
    std::cin >> userinput;
    n = userinput;
    numbers.reserve(n);

    std::cout << "\nEnter " << n << " numbers: ";

    for(int i = 0; i < n; ++i) {
        std::cin >> x;
        numbers.push_back(x);
    }

    std::sort(numbers.begin(), numbers.end());
    std::cout << "\nYou entered: "; 
        for (int num : numbers) {std::cout << num << " ";} 
        std::cout << "\nWith " << n << " Indexes";
    
    int sum = std::accumulate(numbers.begin(), numbers.end(), 0);
    
    std::cout << "\nSum: " << sum;
    y = sum / n;

    std::cout << "\nAverage: " << y;
    return 0;
}