[[Introduction to Algorithm]]

**Insertion Sort** is a simple and intuitive sorting algorithm that builds the sorted array one element at a time, by **inserting** each element into its correct position among the previously sorted elements.

---

### 🧠 **How it works:**

1. Start with the second element (index 1).
2. Compare it with elements before it.
3. Shift all larger elements one position to the right.
4. Insert the current element into its correct position.

---
###  Example (Sorting `[5, 2, 4, 6, 1, 3]`):

```
Start:    [5, 2, 4, 6, 1, 3]
Pass 1:   [2, 5, 4, 6, 1, 3]
Pass 2:   [2, 4, 5, 6, 1, 3]
Pass 3:   [2, 4, 5, 6, 1, 3]
Pass 4:   [1, 2, 4, 5, 6, 3]
Pass 5:   [1, 2, 3, 4, 5, 6]
```

---
### Example:

```cpp
void insertionSort(std::vector<int>& nums) {
    int n = nums.size();

    for (int i = 1; i < n; ++i) {
        int key = nums[i];
        int j = i - 1;

        // Shift elements that are greater than key to one position ahead
        while (j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }

        // Insert key into the correct location
        nums[j + 1] = key;
    }
}
```

---
###  Time Complexity:
- **Best case (already sorted):** O(n)
- **Average and Worst case:** O(n²)
- **Space complexity:** O(1) (in-place)

---

### When to use:
- Small datasets
- When array is **already nearly sorted**
