[[C++ - Data Structures and Algorithms]]
## Differences between `list` and `vector`

### LIST
- Remove elements from **both the beginning and the end** of the list  
- You **cannot** directly jump to a specific index or access elements by index numbers  
- Supports **bidirectional** but **not random** access  

### VECTOR
- Generally optimized for adding and removing elements **at the end**  
- You **can** directly jump to a specific index or access elements by index numbers  

---

## Common Syntaxes for `std::list`

- `.push_front(value)` — inserts the element at the **front/head** of the list  
- `.push_back(value)` — inserts the element at the **back/tail** of the list  
- `.pop_front()` — removes the **first** element  
- `.pop_back()` — removes the **last** element  

- `.insert(const_iterator pos, const T& value)` — inserts `value` **before** the element pointed to by `pos`  
  - **Parameters:**  
    - `pos` — iterator pointing to the element **before** which the new element will be inserted  
    - `value` — the value to be inserted  

- `.erase(const_iterator pos)` — removes the element at position `pos`  

- `.splice(position, list2)` — moves elements from one list to another in **constant time** (`O(1)`) by pointer manipulation (no copying)  

- `.unique()` — removes **consecutive duplicate** elements  
  - The list **must be sorted** before using `.unique()`  

- `.merge()` — merges two **sorted** lists efficiently by relinking pointers instead of copying elements  
  - The list **must be sorted** before using `.merge()`  
  - `.merge(container, comp)`  
    - `comp` is a lambda comparator that returns `true` if the first element should come before the second  
    - **Example:**  
      ```cpp
      list1.merge(list2, std::greater<int>());
      ```
      - `std::greater<int>()` returns `true` if the first element is greater than the second  

  - **Note:** Why not just `.merge()` then `.reverse()`?  
    - `.merge()` assumes **ascending order** and produces an ascending sorted list  
    - Calling `.reverse()` afterward reverses the list but it **won't be sorted descending** anymore  

- `.remove(value)` — removes **all elements equal** to `value`  

- `.remove_if(predicate)` — removes all elements matching a condition  
  - `predicate` is a lambda taking an element and returning `true` if it should be removed  
  - **Example:**  
    ```cpp
    std::list<int> nums = {1, 2, 3, 4, 5, 6};
    nums.remove_if([](int x){ return x % 2 == 0; }); // removes even numbers
    ```

- `.swap(otherList)` — exchanges contents of two lists without copying elements (O(1))  

---

## Extra Syntax

- `std::advance(iterator, n)` — moves an iterator forward or backward by `n` steps  
