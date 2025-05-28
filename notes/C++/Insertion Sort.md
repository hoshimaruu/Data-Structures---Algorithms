[[Introduction to Algorithm]]

**Insertion Sort** is a simple and intuitive **sorting algorithm** that works much like the way you might sort playing cards in your hands.

## How it works:
1. Start with thee second element (index[1])
2. Compare it with the elements before it.
3. Shift larger elements one position to the right.
4. Insert the current element into its correct position.
5. Repeat for all elements.

## Example:
```
Unsorted Array: [5, 3, 4, 1, 2]

Compare 3 with 5 -> insert before 5
Compare 4 with 5-> insert before 5
Insert 1 before 3
Insert 2 between 1 and 3
```

## Time Complexity
Best case (already sorted): `O(n)`
Average and Worst case: `O(n^2)`
Space Complexity: `O(1)`