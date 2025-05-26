#include <iostream>
#include <vector>
using namespace std;

/*
    Reverse an Array Using a Stack
    
    Problem Statement:
        Write a C++ program to reverse the contents of an array using a stack implemented with arrays.
        Requirements:
        Input: An array of integers, e.g., {1, 2, 3, 4, 5}
        Output: The reversed array: {5, 4, 3, 2, 1}
        Implement your own Stack class using a vector.


*/
class Stack {
    private:
        std::vector<int> stack;
    public:
        void push(int value) {
            stack.push_back(value);
        }
        int pop() {
            if (stack.empty()) {
                throw std::out_of_range("stack underflow!");
            } else {
                int value = stack.back();
                stack.pop_back();
                return value;
            }
        }
        bool isEmpty() const {
            return stack.empty();
        }
        int size() {
            return stack.size();
        }
        void clear() {
            try {
                while (!stack.empty()) {
                    stack.pop_back();
                }
            } catch (const std::exception& e) {
                throw std::runtime_error("stack is empty!");
            }
        }
        int peek() {
            if (!stack.empty()) {
                int value = stack.back();
                std::cout << value << std::endl;
                return value;
            } else {
                throw std::out_of_range("stack is empty!");
            }
        }
};

int main() {
    Stack stack;
    //temporary array to hold the elements
    std::vector<int> tempVect;

    // push all required elements into the stack
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);

    std::cout << "Original Stack Size: " << stack.size() << std::endl;
    std::cout << "Original Stack Top Element: ";
    stack.peek();
    std::cout << "Original Stack: ";
    int n = stack.size();

    //reverse the stack!
    while (!stack.isEmpty()) {
        tempVect.push_back(stack.pop());
    }

    for (int i = 0; i < n; ++i) {
        std::cout << tempVect[i] << " "; // print the original stack
    }

    std::cout << "\nReversed Stack: ";
    for (int i = 0; i < n; ++i) {
        stack.push(tempVect[i]); //push all reversed elements back into the stack
    }

    //pop all elements from temporary vector
    // print the reversed stack
    for (int i = 0; i < n; ++i) {
        std::cout << stack.pop() << " "; // print the reversed stack
    }

    // after popping all elements, this should bring back the stack to its original state
    for (int i = 0; i < n; ++i) {
        stack.push(tempVect[i]); //push all reversed elements back into the stack
    }
}