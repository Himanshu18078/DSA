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
    if(index < 0 || index > size){
        cout << "Invalid position" << endl;
        return;
    }

    if(index == 0){
        insertAtHead(val);
        return;
    }

    if(index == size){
        insertAtTail(val);
        return;
    }

    // sirf beech wale case ke liye yeh logic chalega
    Node* newNode = new Node(val);
    int i = 0;
    Node* temp = head;
    while(i < index - 1){
        temp = temp->next;
        i++;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    size++;
}

int getAtIdx(int idx){
  if(idx < 0 || idx >= size){
    cout << "Invalid Index";
    return -1;
  }
  else if(idx == 0) return head->val;
  else if(idx == size - 1) return tail->val;
  else{
    Node* temp = head;
    for(int i = 0; i < idx; i++){   // strictly less than idx
      temp = temp->next;
    }
    return temp->val;
  }
}
// --------------------------------------------------------------------------------------------------------------
void deleteAtHead(){
  if(size == 0) return;
  else if(size == 1){
    head = head->next;
    tail = tail->next;
    size--;
  }
  else{
    head = head->next;
  }
  size--;
}
void deleteAtTail(){
  if(size==0)return;
  else{
    Node* temp = head;
    while(temp -> next != tail)
    {
      temp = temp -> next;
    }
    temp->next = NULL;
    tail = temp;
    size--;
  }
}
void deleteAtIndex(int index){
  if(index < 0 || index >=size){
    cout<<"Invalid index";
    return;
  }
  else if(index == 0){
    deleteAtHead();
  }
  else if(index == size -1){
    deleteAtTail();
  }
  else{
    Node* temp = head;
    for(int i = 0; i < index -1;i++){
      temp = temp->next;
    }
    temp->next = temp->next->next;
    size--;
  }
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
  ll.insertAtHead(10);
  ll.display();
  ll.insertAtTail(20);
  ll.display();
  ll.insertAtTail(30);
  ll.display();
  ll.insertAtTail(40);
  ll.display();
  ll.insertAtTail(50);
  ll.display();
  ll.insertAtTail(60);
  ll.display();
  ll.deleteAtIndex(2);
  ll.display();
  // ll.deleteAtHead();
  // ll.display();
  // ll.deleteAtTail();
  // ll.display();
  cout<<"Size is : "<<ll.size;
}