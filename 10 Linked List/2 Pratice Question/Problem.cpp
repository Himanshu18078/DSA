#include<iostream>
using namespace std;
class ListNode{
  public : 
  int val;
  ListNode* next;
  ListNode(int val){
    this->val = val;
    next = NULL;
  }
};
/*
class LinkedList{
  public : 
  ListNode* head;
  int size;
  LinkedList(){
    head = NULL;
    size = 0;
  }
};
*/
void displayLinkedList(ListNode* head){
  while(head!=NULL){
    cout<<head->val<<" ";
    head = head->next;
  }
}
void deleteNode(ListNode* node) {
        
    }
int main(){
  ListNode* a = new ListNode(101);
  ListNode* b = new ListNode(102);
  ListNode* c = new ListNode(104);
  ListNode* d = new ListNode(105);
  ListNode* e = new ListNode(106);
  a->next = b;
  b->next = c;
  c->next = d;
  d->next = e;
  displayLinkedList(a);
}