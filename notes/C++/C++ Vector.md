[[C++ - Data Structures and Algorithms]]
is like an **array** that can **grow or shrink in size** while your program is running.
**QUESTION: WHY USE -vector? 
	-It can resize automatically.
	-provides easy functions.
	-keeps elements in order, just like an array.

Syntax for declaring a vector: std::vector<int>v

Common Syntaxes:
	- .push_back(value)--- adds element to the **end** of the vector.
	- .pop_back() --- removes the last element.

	Index-based Access:
		Directly access any element in a vector by its position (index), just like an array
		- .at(index) --- safely access element at given index (with bounds checking).
			  -Performs bounds checking. If index is invalid, throws an exception
			  (std::out_of_range)
			example:
				std::vector<int> v = {10, 20, 30};
				try {
				    std::cout << v.at(10);  // Out of range, throws exception
				} catch (const std::out_of_range& e) {
				    std::cout << "Index out of range error: " << e.what() << std::endl;
				}
	
		- operator[] --- access element at given index (no bounds check).
			example:
				std::vector<int> v = {10, 20, 30};
				std::cout << v[1]; // prints 20

	- .size() --- returns number of elements currently stored.
		---Actual number of elements stored.
	- .capacity() --- amount of memory allocated (in elements ) without reallocating.
	- .empty() --- returns true if vector has no elements.
	- .clear() --- removes all elements from the vector.
	- .resize(n) --- changes the size of the vector to n.
	- .insert(iterator pos, value) --- inserts value **before** the element pointed by pos.
	- .erase(iterator pos) --- removes the element at position pos.
	- .reserve(n) --- reserves capacity for at least n elements to avoid reallocations.
    
Memory Management in std::vector
	1. Contiguous Memory Allocation
		-Vectors store elements in a contiguous block of memory, like arrays.
	2. Capacity vs Size
		- .size() --- returns number of elements currently stored.
				---Actual number of elements stored.
		- .capacity() --- amount of memory allocated (in elements ) without reallocating.
	3. Pre-allocate Memory
		-Pre-allocate memory for at least `n` elements to avoid **multiple reallocations** when growing the vector. (reserve(n))
		When to use?
			You know roughly how many elements you'll insert.
	4. Shrink_to_fit()
		-Tries to reduce the capacity to match the current size.
		When to use?
			After removing many elements and you want to free unused memory.
	5. resize(n)
		-Resizes the vector to contain `n` elements.
			Conditions:
				IF N > CURRENT SIZE: adds default initialized elements.
				IF N < CURRENT SIZE: removes elements from the back.