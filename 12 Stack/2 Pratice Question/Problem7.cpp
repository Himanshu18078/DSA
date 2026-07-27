#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX = 5;
    int arr[MAX];
    int topIndex;

public:
    // Constructor
    Stack() {
        topIndex = -1;
    }

    // Push an element
    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << val << endl;
            return;
        }
        arr[++topIndex] = val;
        cout << val << " pushed into stack." << endl;
    }

    // Pop an element
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Stack is empty." << endl;
            return;
        }
        cout << arr[topIndex] << " popped from stack." << endl;
        topIndex--;
    }

    // Return the top element
    int top() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        return arr[topIndex];
    }

    // Return the size of the stack
    int size() {
        return topIndex + 1;
    }

    // Check if stack is empty
    bool isEmpty() {
        return topIndex == -1;
    }

    // Check if stack is full
    bool isFull() {
        return topIndex == MAX - 1;
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }

        cout << "Stack (Top -> Bottom): ";
        for (int i = topIndex; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    st.display();

    cout << "Top element: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    st.pop();
    st.display();

    st.push(60);
    st.display();

    // Trying to overflow
    st.push(70);

    // Empty the stack
    while (!st.isEmpty()) {
        st.pop();
    }

    // Trying to underflow
    st.pop();

    return 0;
}