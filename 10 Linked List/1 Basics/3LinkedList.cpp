#include<iostream>
using namespace std;
class Node{
  public :
  int val;
  Node* next;
  Node(int val){
    this -> val = val;
    next = NULL;
  }
};
void display(Node* head){
  Node* temp = head;
  while(temp!= NULL){
    cout<<temp->val<<" ";
    temp = temp->next;
  }
}
int main(){
  Node* a = new Node(10);
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);
  a->next = b; 
  b->next = c;
  c->next = d;
  display(a);
}
/*
a->next = b;

'a' is a pointer — it holds the ADDRESS of a Node object
(the one with val = 10), not the object itself.

a->next means: go to the address stored in 'a', and access
the 'next' member of the Node sitting there.
(This is shorthand for (*a).next)

'b' is also a pointer — it holds the ADDRESS of another
Node object (the one with val = 20).

So a->next = b; means:
"Go to the Node that 'a' points to, and set its 'next'
member equal to the address stored in 'b'."

After this line runs:
- a's 'next' pointer now holds the same address as 'b'.
- In other words, a's 'next' pointer now points to Node(20).
- No Node objects are copied here — only an address
  (pointer value) is copied.

This is how a singly linked list is built: by linking
addresses together, not by copying whole objects.
*/