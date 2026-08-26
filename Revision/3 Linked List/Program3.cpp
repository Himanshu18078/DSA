// Program to implement Linked List
#include<iostream>
using namespace std;
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    this->next = NULL;
  }
};
class LinkedList{
  public:
  Node* head;
  Node* tail;
  int size;
  LinkedList(){
    head = tail = NULL;
    size = 0;
  }
  //Function to display a node
  void display(){
    Node* temp = head;
    while (temp != NULL)
    {
      cout<<temp->val<<" ";
      temp = temp->next;
    }
    cout<<endl;
  }
  //Function to insert element at the front of the linked list
  void insertAtFront(int val){
    Node* newNode = new Node(val);
    if(size == 0) head = tail = newNode;
    else{
      newNode->next = head;
      head = newNode;
    }
    size++;
  }
  //functiont to insert Element at the middle of the linked list
  void insertAtIndex(int val , int index){
    Node* newNode = new Node(val);
    Node* temp = head;
    for(int i = 0; i < index -1; i++){
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    size++;
  }

  //Function to insert element at the end of the linked list
  void insertAtEnd(int val){
    Node* newNode = new Node(val);
    if(size == 0) head = tail = newNode;
    else{
      tail->next = newNode;
      tail = newNode;
    }
    size++;
  }
};

int main(){
  LinkedList ll;
  ll.insertAtFront(5);
  ll.display();
  ll.insertAtEnd(10);
  ll.display();
  ll.insertAtEnd(20);
  ll.display();
  ll.insertAtIndex(15,2);
  ll.display();
  return 0;
}