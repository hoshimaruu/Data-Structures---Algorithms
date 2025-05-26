[[C++ - Data Structures and Algorithms]]

````markdown
# C++ - Data Structures and Algorithms  
## `std::vector`

A `vector` in C++ is like a dynamic array — it can **grow or shrink in size** while your program is running.

---

## Why Use `vector`?
- ✅ Automatically resizes as needed  
- ✅ Provides easy-to-use functions  
- ✅ Maintains **order** of elements (like arrays)

---

## Basic Syntax

```cpp
#include <vector>

std::vector<int> v;  // Declare a vector of integers
````

---

## Common Operations

### Adding and Removing Elements

- `v.push_back(value)` — adds element to the **end** of the vector
    
- `v.pop_back()` — removes the **last** element
    

---

### Accessing Elements

#### Index-Based Access

- `v.at(index)`
    
    - Performs **bounds checking**
        
    - Throws `std::out_of_range` if index is invalid
        
    - **Example:**
        
        ```cpp
        std::vector<int> v = {10, 20, 30};
        try {
            std::cout << v.at(10);
        } catch (const std::out_of_range& e) {
            std::cout << "Index out of range error: " << e.what() << std::endl;
        }
        ```
        
- `v[index]`
    
    - No bounds checking
        
    - **Example:**
        
        ```cpp
        std::vector<int> v = {10, 20, 30};
        std::cout << v[1];  // Output: 20
        ```
        

---

### Size and Capacity

- `v.size()` — number of elements currently stored
    
- `v.capacity()` — memory allocated (in elements) before reallocation is needed
    
- `v.empty()` — returns `true` if vector is empty
    
- `v.clear()` — removes all elements
    

---

### Modifying Size and Content

- `v.resize(n)` — resizes vector to contain `n` elements
    
- `v.insert(iterator, value)` — inserts `value` **before** the given position
    
- `v.erase(iterator)` — removes element at the given position
    
- `v.reserve(n)` — pre-allocates space for at least `n` elements
    

---

## Memory Management in `std::vector`

### 1. Contiguous Memory Allocation

- Elements are stored in a **continuous memory block**, just like arrays.
    

### 2. Capacity vs Size

- `.size()` → Number of elements actually stored
    
- `.capacity()` → Allocated space before a reallocation is required
    

### 3. Pre-Allocating Memory

Use `.reserve(n)` when:

- You roughly know how many elements you'll insert
    
- You want to **avoid multiple reallocations**
    

### 4. Releasing Unused Memory

- `v.shrink_to_fit()` — Attempts to reduce capacity to match size  
    Use after removing many elements and you want to free memory.
    

### 5. `resize(n)`

- Resizes vector to contain `n` elements:
    
    - If `n > current size`: adds default-initialized elements
        
    - If `n < current size`: removes elements from the back
        