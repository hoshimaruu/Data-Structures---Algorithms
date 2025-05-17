[[C++ - Data Structures and Algorithms]] 
**Differences between LIST and VECTOR:
	LIST
		-remove elements from both the beginning and at the end of a list
		-you CANNOT directly jump to a specific index/access elements by index numbers	
		-bidirectional but not random access
	VECTOR
		-generally optimized for adding and removing at the end.
		-you CAN directly jump to a specific index/access elements by index numbers

**COMMON SYNTAXES

	.push_front() - inserts the element at the front/head of the list.
	.push_back() - inserts the element at the back/tail of the list.
	.pop_front() - remove the first element
	.pop_back() - remove the last element
	
	.insert(const_iterator pos, const T& value) - inserts value before the position
	pointed to by pos
		parameters of insert()
			pos - An iterator poiting to the element **before** which the new
			element will be inserted
			value - The value to be inserted

	.erase(const_iterator pos) - removes the elment at position pos
	
	.splice(position, list2) - allows to move elemnts from one list to another in constant time / O(n) -- no copying, just pointer manipulation.
	
	.unique() - Removes consecutive duplicate elements in the list.
			-the list must be sorted first before using .unique() syntax
	
	.merge() - combines two sorted lists into one in an efficient way by relinking internal pointers rather than copying elements
			-the list must be sorted first before using .merge() syntax
			-.merge(container, comp) 
				- comp is a lambda that takes two elements and returns true if the
				first should come before the second.
					EXAMPLE:
						-list1.merge(list2, std::greater<int>())
							|- std::greater<int>() returns true if the first
							element is greater than the second.
						
						Question: why not just .merge() then .reverse()?
							.merge() assumes ascending order.
							The result will be an ascending sorted list.
							Calling .reverse() afterwward flips the order,
							but
							the merged list won't be sorted descending
							anymore.
		
		.remove(value) - removes all elements that are equal to value
		.remove_if(predicate) - removes all elements from the list that match a
		condition.
			-predicate - a lambda that takes an element and returns true if the
			elements should be removed.
				EXAMPLE:
					std::list<int> nums = {1, 2, 3, 4, 5, 6};
					nums.remove_if([](int x){ return x % 2 == 0;});

		.swap() -- exchanges the contents of two lists without copying each
		element one by one - O(1)
			
**extra syntaxes

	std::advance(iterator, n) - moves and iterator forward or backward by a specified number of steps