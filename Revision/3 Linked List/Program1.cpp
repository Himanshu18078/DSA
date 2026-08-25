#include<iostream>
using namespace std;
// Creating a node class
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};

// Function to print the linked list
void printLinkedList(Node* head){
  if(head == NULL) return;
  cout<<head->val<<" ";
  printLinkedList(head->next);
}
// Function to print the tree using loop
void printLinkedListLoop(Node* head){
  while(head != NULL){
    cout<< head->val<< " ";
    head = head->next;
  }
}
// Function to get the size of the tree
int sizeOfList(Node* node){
  int size = 0;
  while (node != NULL )
  {
    size++;
    node = node->next;
  }
  return size;
}

int main(){
  Node* a = new Node(10);
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);
  Node* e = new Node(50);
  Node* f = new Node(60);
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = f;
  // printLinkedList(a);
  printLinkedListLoop(a);
  cout<<endl;
  int size = sizeOfList(a);
  cout<<"Size of the tree : "<<size<<endl;
  return 0;
}