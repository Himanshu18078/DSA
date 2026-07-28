#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    next == NULL;
    int size = 0;
  }
};
class Queue{
  public:
  Node* head;
  Node* tail;
  int size;
  Queue(){
    head = tail = NULL;
    size = 0;
  }
  void push(int val){
    Node* temp = new Node(val);
    if(size==0) head = tail = temp;
  }
};