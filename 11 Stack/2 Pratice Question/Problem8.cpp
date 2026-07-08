// Vector implementation of the stack
#include <iostream>
#include <vector>
using namespace std;

class Stack {
private:
    vector<int> arr;

public:
    // Push an element
    void push(int val) {
        arr.push_back(val);
        cout << val << " pushed into stack.\n";
    }

    // Pop an element
    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!\n";
            return;
        }

        cout << arr.back() << " popped from stack.\n";
        arr.pop_back();
    }

    // Return top element
    int top() {
        if (isEmpty()) {
            cout << "Stack is Empty!\n";
            return -1;
        }
        return arr.back();
    }

    // Return size
    int size() {
        return arr.size();
    }

    // Check if empty
    bool isEmpty() {
        return arr.empty();
    }

    // Display stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is Empty!\n";
            return;
        }

        cout << "Stack (Top -> Bottom): ";
        for (int i = arr.size() - 1; i >= 0; i--) {
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

    st.display();

    cout << "Top: " << st.top() << endl;
    cout << "Size: " << st.size() << endl;

    st.pop();
    st.display();

    st.push(50);
    st.display();

    while (!st.isEmpty()) {
        st.pop();
    }

    st.pop();   // Underflow

    return 0;
}