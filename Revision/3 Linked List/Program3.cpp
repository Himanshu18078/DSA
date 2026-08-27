// Program to implement Linked List
#include <iostream>
using namespace std;
class Node
{
public:
  int val;
  Node *next;
  Node(int val)
  {
    this->val = val;
    this->next = NULL;
  }
};
class LinkedList
{
public:
  Node *head;
  Node *tail;
  int size;
  LinkedList()
  {
    head = tail = NULL;
    size = 0;
  }
  // Function to display a node
  void display()
  {
    Node *temp = head;
    while (temp != NULL)
    {
      cout << temp->val << " ";
      temp = temp->next;
    }
    cout << endl;
  }
  // Function to insert element at the front of the linked list
  void insertAtFront(int val)
  {
    Node *newNode = new Node(val);
    if (size == 0)
      head = tail = newNode;
    else
    {
      newNode->next = head;
      head = newNode;
    }
    size++;
  }
  // functiont to insert Element at the middle of the linked list
  void insertAtIndex(int val, int index)
  {
    Node *newNode = new Node(val);
    Node *temp = head;
    for (int i = 0; i < index - 1; i++)
    {
      temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    size++;
  }

  // Function to insert element at the end of the linked list
  void insertAtEnd(int val)
  {
    Node *newNode = new Node(val);
    if (size == 0)
      head = tail = newNode;
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    size++;
  }
  // Ultimate insert Program
  void insert(int val, int index)
  {
    if (index < 0 || index > size)
      return;
    else if (index == 0)
      insertAtFront(val);
    else if (index == size)
      insertAtEnd(val);
    else
      insertAtIndex(val, index);
  }
  // Function to get first element of the linked list
  void getFirstElement()
  {
    cout << head->val << endl;
  }
  // Function to get the last element of the linked list
  void getlastElement()
  {
    cout << tail->val << endl;
  }
  // Function to get element at perticular index
  void getElementByIndex(int index)
  {
    Node *temp = head;
    for (int i = 0; i < index; i++)
    {
      temp = temp->next;
    }
    cout << temp->val << endl;
  }

  // Ultimate get Function
  void getElement(int index)
  {
    if (head == NULL)
    {
      cout << "List is empty" << endl;
      return;
    }
    if (index < 0 || index >= size)
    {
      cout << "Invalid Index" << endl;
      return;
    }
    else if (index == 0)
      getFirstElement();
    else if (index == size - 1)
      getlastElement();
    else
      getElementByIndex(index);
  }
  //function to delete the element at the front
  void deleteElementFromFront(){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    head = head->next;
    size--;
    if(size == 0)
        tail = NULL;
}
  //function to delete last element
  void deleteElementFromEnd(){
    if(head == NULL){
        cout << "List is empty" << endl;
        return;
    }
    if(head->next == NULL){
        head = NULL;
        tail = NULL;
        size--;
        return;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    tail = temp;
    temp->next = NULL;
    size--;
}
  //function to delete element element from perticular index
  void deleteElementViaIndex(int index){
    if (head == NULL){ 
      cout << "List is empty" << endl;
      return;
    }
    Node* temp = head;
    for(int i = 0 ;i < index-1;i++){
      temp = temp->next;
    }
    temp->next = temp->next->next;
    size--;
  }
  //ultimate delete
  void deleteNode(int index){
    if(index < 0 || index <= size){
      cout<<"Invalid Index"<<endl;
      return;
    }
    else if(index == 0) deleteElementFromFront();
    else if(index == size-1) deleteElementFromEnd();
    else deleteElementViaIndex(index);
  }
};

int main()
{
  LinkedList ll;
  ll.insert(10, 0);
  ll.insert(20, 1);
  ll.insert(30, 2);
  ll.insert(40, 3);
  ll.insert(50, 4);
  ll.display();
  return 0;
}