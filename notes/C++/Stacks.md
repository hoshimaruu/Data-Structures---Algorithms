[[C++ - Data Structures and Algorithms]]

**Stack** is a linear data structure that follows the **Last In, First Out (LIFO)** principle. This means the **last element** added to the stack is the **first one to be removed**.

Basic Operation:
```operation
	Push: Adds a new elemeent on the stack.
	Pop: Removes and returns the top element from the stack.
	Peek: Returns the top element on the stack.
	isEmpty: Checks if the stack is empty.
	Size: Finds the number of elements in the stack.
```

### How a stack is implemented using `vector` in C++

**Step 1: Include Libraries and Declare class
```cpp
#include <iostream>
#include <vector>

class Stack {
private:
	vector<int> vec;
}
```
`vec` stores the stack elements. `vector` grows/shrinks as needed, no size limit unless memory runs out.

**Step 2: Implement push()
```cpp
public:
	void push(int value) {
		vec.push_back(value);
	}
```
`.push_back(value)` adds a value at the end of the vector. The END is treated as the `top of the stack.`

**Step 3: Implement pop() 
```cpp
public:
	void pop() {
		if (vec.empty()) {
			std::cout << "Stack underflow!" << endl;
		} else {
			vec.pop_back();
		}
	}
```
`vec.empty()` checks if there are any elements. If not, print "Underflow". `pop_back()` is like `push()`, but removes the top of the stack.

**Step 4: Implement size() 
```cpp
public:
	int size() {
		return vec.size();
	}
```
`size()` tells how many elements are in the stack.

**Step 5: Implement peek()
```cpp
public:
	int peek() {
		if (vec.empty()) {
			std::cout << "Stack is empty" << std::endl;
			return -1; // empty stack!
		} else {
			return vec.back();
		}
	}
```
`peek()` returns the top element without removing it. `vec.back()` gets the last value in the vector. Returns `-1` if the stack is empty.

**Step 6: Implement isEmpty()
```cpp
public:
	bool isEmpty() {
		return vec.empty();
	}
```
Uses the built-in `empty()` method to return `true` if no elements exist. It's helpful for checking before calling `peek()` or `pop()`.

**Summary:
```Syntaxes
- `s.push(…)` → Add elements to the stack.
- `s.peek()` → Shows the current top.
- `s.pop()` → Removes the top.
- `s.size()` → Shows current size.
- `s.isEmpty()` → Checks if stack is empty.
```

---
## Pros of Using `vector` for Stack

|  Advantage               | Explanation                                                                                |
| ------------------------ | ------------------------------------------------------------------------------------------ |
| **Dynamic sizing**       | `vector` automatically resizes as needed — no need to manually manage size like in arrays. |
| **Simplicity**           | You only need to use `push_back()`, `pop_back()`, and `back()` to simulate stack behavior. |
| **Familiar syntax**      | Easy to understand and use if you're already learning `vector`.                            |
| **More control**         | You can customize or add extra features beyond what `std::stack` provides.                 |
| **Efficient operations** | `push_back()` and `pop_back()` are **amortized O(1)** operations.                          |
## Cons of Using `vector` for Stack

| Disadvantage                  | Explanation                                                                                                |
| ----------------------------- | ---------------------------------------------------------------------------------------------------------- |
| **No strict stack interface** | You might accidentally use non-stack functions like `insert()` or `operator[]`, which break the LIFO rule. |
| **Slightly more verbose**     | You need to write your own `Stack` class around the `vector`.                                              |
| **Memory overhead**           | `vector` might allocate more memory than needed (capacity is usually larger than size).                    |
| **No thread safety**          | Like any container, you must handle thread-safety if needed (same with `std::stack`, though).              |
## `vector`-based Stack vs `std::stack`

| Feature                             | `vector` (manual stack)        | `std::stack`                                   |
| ----------------------------------- | ------------------------------ | ---------------------------------------------- |
| Customizable                        | Yes                            | Limited (fixed interface)                      |
| Direct element access               |  Yes (but risky)               | No                                             |
| Safe from misuse                    | No (can misuse vector methods) | Yes (strict stack interface)                   |
| Supports `top()`, `push()`, `pop()` | Yes (manual)                   | Yes (built-in)                                 |
| Backing container                   | `vector`, customizable         | `deque` by default (can be `vector` or `list`) |

## When to Use `vector` for Stack

Use a `vector`-based manual stack when:

- You're still learning and want to understand the logic behind stacks.
- You want more control over how the stack behaves.
- You're solving a problem where performance tuning or custom features are needed.

Use `std::stack` when:

- You need a quick, standard, reliable stack implementation.
- You want clean, safe code with minimal effort.

**Note: Everything we just did with `vector` can also be applied using a manual array, since a `vector` is essentially a dynamic array behind the scenes.