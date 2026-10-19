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
void printLinkedList(ListNode* head){
  while (head != NULL)
  {
    cout<<head->val<<" ";
    head = head->next;
  }
  cout<<endl;  
}
//Function to return the middle node of the linked list
ListNode* middleNodeBruteForce(ListNode* head){
  int size = 0;
  ListNode* temp = head;
  while(temp != NULL){
    size++;
    temp = temp->next;
  }
  size = size/2;
  temp = head;
  for(int i = 0; i < size; i++){
    temp = temp->next;
  }
  
  return temp;
}
// using two pointers
ListNode* middleNodeTwoPointers(ListNode* head){
  ListNode* slow = head;
  ListNode* fast = head;
  /*
  This one is for left middle
  while (fast->next != NULL && fast->next->next != NULL){
    slow = slow->next;
    fast = fast->next->next;
  }
  */
//  This is one for the right middle
  while(fast != NULL && fast->next != NULL){
    fast = fast->next->next;
    slow = slow->next;
  }
  return slow;
}
int main(){
  ListNode* a = new ListNode(1);
  ListNode* b = new ListNode(2);
  ListNode* c = new ListNode(3);
  ListNode* d = new ListNode(4);
  ListNode* e = new ListNode(5);
  ListNode* f = new ListNode(6);
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  e->next = f;
  printLinkedList(a);
  cout<<"Middle of the linked list is : "<<middleNodeTwoPointers(a)->val<<endl;
}