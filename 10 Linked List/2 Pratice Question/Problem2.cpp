// Program to print the linked list recursively
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
  Node* temp = head;
  if(temp == NULL){
    cout<<endl;
    return;
  };
  cout<<temp ->val<<" ";
  display(temp->next);
}
void displayReverse(Node* head){
  Node* temp = head;
  if(temp == NULL)return;
  displayReverse(temp->next);
  cout<<temp ->val<<" ";
}
void size(Node* head){
  Node* temp = head;
  int count = 0;
  while(temp != NULL){
    count++;
    temp = temp -> next;
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
  displayReverse(a);
  cout<<endl;
  size(a);
  return 0;
}