#include <iostream>
#include <vector>

class Queue {
    private:
        std::vector<int> data;
    public:
        void enqueue(int value) {
            data.push_back(value);
        }

        void dequeue() {
            if (!data.empty()) {
                data.erase(data.begin());
            } else {
                throw std::out_of_range("Queue is empty");
            }
        }

        int peek() {
            if (!data.empty()) {
                return data.front();
            } else {
                throw std::out_of_range("Queue is empty");
            }
        }
        
        bool isempty() {
            return data.empty();
        }

        int size() {
            return data.size();
        }
};

int main() {
    Queue q;

    //temporary holder for queue elements
    std::vector<int> tempQ;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    int k = 3; // target indices;
    for (int i = 0; i < k - 1; ++i) {
        if(!q.isempty()) {
            tempQ.push_back(q.peek());
            q.dequeue();
        }
    }
    for (int i = 0; i < q.size(); ++i) {
        std::cout << q.peek();
    }

}