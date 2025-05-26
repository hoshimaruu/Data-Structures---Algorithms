[[Introduction to Algorithm]]
##  What Is Binary Search?

**Binary Search** is an efficient algorithm to **find an element in a sorted array**.

Instead of checking each element one by one (like Linear Search), Binary Search **divides the array in half** with each step, drastically reducing the number of comparisons.

>  **Condition:** The array **must be sorted** first.

---

##  How Binary Search Works 

Let’s say you’re looking for a number `x` in a sorted array.

1. **Set low and high** pointers:  
    `low = 0`, `high = n - 1`
    
2. **Find the middle**:  
    `mid = (low + high) / 2` (or better: `mid = low + (high - low) / 2` to avoid overflow)
    
3. **Compare array[mid] with x**:
    
    - If `array[mid] == x` → FOUND 
        
    - If `x < array[mid]` → search in **left half** → `high = mid - 1`
        
    - If `x > array[mid]` → search in **right half** → `low = mid + 1`
        
4. Repeat steps 2–3 until `low > high` (not found)
    

---

## 🧾 C++ Code Example

```cpp
#include <iostream>
#include <vector>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int low = 0, high = arr.size() - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid; // found at index mid
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return -1; // not found
}
```

---

## 🔍 Example

Array: `[2, 5, 8, 12, 16, 23, 38, 56, 72, 91]`  
Target: `23`

### Step-by-step:

- mid = index 4 → value = 16 → `23 > 16` → search right half
    
- new low = 5, high = 9 → mid = 7 → value = 56 → `23 < 56` → search left half
    
- new low = 5, high = 6 → mid = 5 → value = 23 → **found!**
    

 Only **3 comparisons**, instead of checking all 10 elements!

---

## ⏱ Time Complexity

|Case|Time Complexity|
|---|---|
|Best Case|`O(1)` (found in the middle)|
|Worst Case|`O(log n)`|

> Compare that to Linear Search: `O(n)`  
> Binary Search is **much faster** for large datasets!

---

## Important Notes

- Works only on **sorted** data
- Can be implemented recursively or iteratively
- Use `lower_bound` / `upper_bound` from `<algorithm>` for STL-friendly versions
