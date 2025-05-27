[[C++ - Data Structures and Algorithms]]
A **queue** is similar to a **stack**, but follows a **FIFO** principle (First In, First Out).  
Think of a line at the supermarket — the first person in line is also the first to check out.

**Basic Operations of Queue:
```operations
Enqueue: Adds a new element to the queue (.push_back())
Dequeue: Removes and returns the first front element from the queue.
Peek: Returns the first element in the queue.
isEmpty: Checks if the queue is empty.
Size: Finds the number of elements in the queue.
```

### How a Queues is implemented using `vector` in C++

**Class:
```cpp
class Queue {
private:
	std::vector<int> queue;
};
```
 `std::vector<int> queue;` initializes an empty queue.
 A vector is dynamic and can resize, which makes it flexible.

**Enqueue:
```cpp
public:
	void enqueue(int value) {
		queue.push_back(value);
	}
```
`.push_back(value)` adds `value` to the end of the vector.

**dequeue:
```cpp
void dequeue() {
	if(queue.empty()) {
	queue.erase(queue.begin());
	} else {
		throw std::out_of_range("Queue is empty");
	}
}
```
`.erase(queue.begin())` removes the element at index `0`.

**peek: 
```cpp
int peek() {
	if (!queue.empty()) {
		std::cout << queue[0];
	} else {
		throw std::out_of_range << "Queue is empty!" << endl;
	}
}
```
`queue[0]` accesses the first (front) element.
`throw std::out_of_range(...)` is used for error handling.

**isEmpty:
```cpp
bool isEmpty() {
	return queue.empty();
}
```
`.empty()` checks if the vector has no elements.

**size:
```cpp
int size() {
	return queue.size();
}
```
`.size()` gives the number of elements in the queue.