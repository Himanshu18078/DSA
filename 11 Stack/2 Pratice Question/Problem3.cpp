// Program to push the element at tha bottom of the index
#include <iostream>
#include <stack>
using namespace std;
// Function to push the element at any index
void pushAtIndex(stack<int> &st, int val, int index)
{
  if (index < 0 || index > st.size())
  {
    cout << "Invalid index\n";
    return;
  }

  stack<int> temp;

  while (index--)
  {
    temp.push(st.top());
    st.pop();
  }

  st.push(val);

  while (!temp.empty())
  {
    st.push(temp.top());
    temp.pop();
  }
}
// Function to push element at the bottom of the index
void pushAtBottom(stack<int> &st, int val)
{
  stack<int> temp;
  while (st.size() > 0)
  {
    temp.push(st.top());
    st.pop();
  }
  st.push(val);
  while (temp.size() > 0)
  {
    st.push(temp.top());
    temp.pop();
  }
  cout << "Element added successfully" << endl;
};
// Function to print the stack
void printStack(stack<int> st)
{
  while (st.size() > 0)
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}
int main()
{
  stack<int> st;
  st.push(20);
  st.push(40);
  st.push(50);
  printStack(st);
  pushAtBottom(st, 10);
  printStack(st);
  pushAtIndex(st, 30, 2);
  printStack(st);
  return 0;
}