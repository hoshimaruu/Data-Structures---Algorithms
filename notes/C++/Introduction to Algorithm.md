
# [[C++ - Data Structures and Algorithms]]

### What is an Algorithm?

An algorithm is a **step-by-step set of instructions** designed to solve a problem or perform a task.

- Like a recipe tells you how to bake a cake, an algorithm tells a computer **how to do something**.
    
- Algorithms must be precise — every step should be clear and unambiguous.
    
- Algorithms can be written in any programming language.

### Why Study Algorithms?

1. **Efficiency:** How fast or slow is your solution? A good algorithm solves problems quickly and uses resources wisely.
    
2. **Scalability:** Can your solution handle large amounts of data? Will your algorithm still work well as the input grows?
    
3. **Problem-Solving:** Learning algorithms helps you break down complex problems and become a better programmer.
    
4. **Foundation:** Algorithms are fundamental to computer science and programming.

### Key Concepts

- **Input:** The data given to the algorithm to work with.
    
- **Output:** The result produced after the algorithm finishes.
    
- **Definiteness:** Each step in the algorithm is clearly defined.
    
- **Finiteness:** The algorithm must complete after a finite number of steps.
    
- **Effectiveness:** Each step must be simple enough to be performed in practice.

---

### Example: Find the Largest Number in an Array

This example shows how to find the largest number from a list of integers.

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {5, 10, 3, 8, 2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int largest = numbers[0]; // Assume the first element is the largest

    for (int i = 1; i < size; i++) {
        if (numbers[i] > largest) {
            largest = numbers[i]; // Update largest if current number is bigger
        }
    }

    cout << "The largest number is: " << largest << endl;
    return 0;
}
```
