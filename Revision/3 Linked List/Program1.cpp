// Creating List node and Linked List
#include<iostream>
using namespace std;
class ListNode{
  public : 
  int val;
  ListNode* next;
  ListNode(int val){
    this->val = val;
    this->next = NULL;
  }
};
//function to print the linked list
void printLinkedList(ListNode* head){
  if(head == NULL) return;
  cout<<head->val<<" ";
  printLinkedList(head->next);
}
// Function to print the linked list without recursoin
void printLinkedList2(ListNode* head){
  while (head != NULL)
  {
    cout<<head->val<<" ";
    head = head->next;
  }
  cout<<endl;  
}
int main(){
  ListNode* a = new ListNode(1);
  ListNode* b = new ListNode(2);
  ListNode* c = new ListNode(3);
  ListNode* d = new ListNode(4);
  ListNode* e = new ListNode(5);
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  printLinkedList2(a);
}