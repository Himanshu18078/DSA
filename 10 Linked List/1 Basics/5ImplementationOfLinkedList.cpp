#include<iostream>
using namespace std;
// USER DEFINE DATA TYPE
class Node{
  public:
  int val;
  Node* next;
  Node(int val){
    this->val = val;
    this->next= NULL;
  }
};
// USER DEFINE DATA STRUCTURE
class LinkedList{
  public:
  Node* head;
  Node* tail;
  int size;
  LinkedList(){
    head = tail = NULL;
    size = 0;
  }
  //Function to add node at the starting or at the end
  void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else{
      tail->next = temp;
      tail = temp; 
    }
    size++;
  };
  // Function to add at the beggining of the linked list
  void insertAtHead(int val){
    Node* newNode = new Node(val);
    if(size == 0) head = tail = newNode;
    else{
    newNode->next = head;
    head = newNode;
  }
  size++;
  }
  /*
  Function to add element at a perticular postion
  void insertAtPosition(int val , int index){
      if(index < 1 || index > size + 1){
        cout << "Invalid position" << endl;
        return;
      }
    Node* newNode = new Node(val);
    int i = 0;
    Node* temp = head;
    while(i < index - 2){
      temp = temp->next;
      i++;
    }
    newNode->next = temp -> next;
    temp ->next = newNode;
    if(newNode->next == NULL)
    tail = newNode; 
    size++;
  }
  */
 void insertAtPosition(int val, int index){
    if(index < 1 || index > size + 1){
        cout << "Invalid position" << endl;
        return;
    }

    if(index == 1){
        insertAtHead(val);
        return;
    }

    if(index == size + 1){
        insertAtTail(val);
        return;
    }

    // sirf beech wale case ke liye yeh logic chalega
    Node* newNode = new Node(val);
    int i = 0;
    Node* temp = head;
    while(i < index - 2){
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    size++;
}

  // Function to print the node
  void display(){
    Node* temp = head;
    while (temp != NULL)
    {
      cout<<temp->val<<" ";
      temp = temp->next;
    }
    cout<<endl;
    
  }

};
int main(){
  //LinkedList* ll = new LinkedList();  // new LinkedList return karta hai LinkedList*
  LinkedList ll;
  // ll.insertAtEnd(10);
  // ll.display();
  // ll.insertAtEnd(20);
  // ll.display();
  // ll.insertAtEnd(30);
  // ll.insertAtEnd(40);
  // ll.display();
  // ll.insertAtBeggining(5);
  // ll.display();
  ll.insertAtHead(10);
  ll.insertAtPosition(15,2);
  ll.insertAtTail(20);
  ll.display();
  cout<<"Size is : "<<ll.size;
}