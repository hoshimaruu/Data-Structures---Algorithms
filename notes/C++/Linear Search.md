[[Introduction to Algorithm]]
### What is Linear Search?

Linear search is a straightforward method for finding a specific value in a list (array) by checking each element one by one until the target value is found or the list ends.

### How Does Linear Search Work?

- Start from the first element of the array.
- Compare the current element with the target value.
- If it matches, return the position (index) of that element.
- If not, move to the next element.
- Repeat until you find the target or reach the end of the array.
- If you reach the end without finding the target, the element is not in the list.

### When to Use Linear Search?

- When the data is **unsorted**.
- When the array is **small**.
- When simplicity is more important than speed.
- When you only need to perform a **few searches** (not many repeated queries).

### Time Complexity

- **Best case:** O(1) — the target is the first element.
- **Worst case:** O(n) — the target is at the end or not present.
- **Average case:** O(n)

### Example Code in C++

```cpp
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;  // Return the index if found
        }
    }
    return -1;  // Return -1 if not found
}

int main() {
    int numbers[] = {4, 2, 7, 1, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 7;

    int result = linearSearch(numbers, size, target);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
```

- Linear search is simple but not efficient for large data.
- It checks each element until it finds the target.
- Useful for unsorted or small datasets.

### Code Example for String (C++):

```cpp
#include <iostream>
#include <string>
using namespace std;

int linearSearchChar(const string& text, char target) {
    for (int i = 0; i < text.size(); i++) {
        if (text[i] == target) {
            return i;  // Found, return index
        }
    }
    return -1;  // Not found
}

int main() {
    string sentence = "Hello, world!";
    char target = 'o';

    int result = linearSearchChar(sentence, target);

    if (result != -1) {
        cout << "Character '" << target << "' found at index " << result << endl;
    } else {
        cout << "Character '" << target << "' not found in the string." << endl;
    }

    return 0;
}
```

But Why `return -1`?
---
**-1 is not a valid index**, which makes it a perfect way to say:  **“I checked everything, and the item isn’t there.”**


### How to Perform Linear Search

1. **Start at the beginning** of your list or vector.
2. **Compare the current element** with the value you want to find (the target).
3. If the current element **matches the target**, stop and return its position (index).
4. If it **does not match**, move to the next element.
5. Repeat steps 2-4 **until you find the target or reach the end** of the list.
6. If you reach the end and haven’t found the target, it means the target is **not in the list**.