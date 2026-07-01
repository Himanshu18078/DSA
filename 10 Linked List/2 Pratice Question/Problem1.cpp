// Program to find the size of the linked lisst
#include<iostream>
using namespace std;
class Node{
  public :
  int val;
  Node* next;
  Node(int val){
    this ->val = val;
    next = NULL;
  };
};

void display(Node* head){
  Node * temp = head;
  while (temp != NULL)
  {
    cout<<temp->val<<" ";
    temp = temp -> next;
  }
  cout<<endl;
}
void size(Node* head){
  Node* temp = head;
  int count = 0;
  while(temp != NULL){
    count++;
  }
  cout<<"Size is : "<<count<<endl;
}
int main(){
  Node* a = new Node(10);
  Node* b = new Node(20);
  Node* c = new Node(30);
  Node* d = new Node(40);
  Node* e = new Node(50);
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  display(a);
  size(a);
  return 0;
}