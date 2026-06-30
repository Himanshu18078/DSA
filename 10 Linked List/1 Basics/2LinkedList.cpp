#include<iostream>
#include<vector>
using namespace std;
class Node{
  public :
  int val;
  Node* next;
  Node(int val){
    this -> val = val;
    next = NULL;
  }
};
int main(){
  Node a(10);
  Node b(20);
  Node c(30);
  Node d(40);
  //making linked list
  a.next = &b;
  b.next = &c;
  c.next = &d;
  // (a.next)->val = 70;
  // cout<<(a.next)->val<<endl;
  // cout<<(((a.next ->next) ->next)->val);
  Node temp = a;//put all the values of the a into the temp
  while(1){
    cout<<temp.val<<" ";
    if(temp.next == NULL) break;
    temp = *(temp.next); // Similar to this Node temp = a;
  }
}
/*
temp = *(temp.next);

Step 1: temp.next
  - temp.next is a pointer member.
  - It holds the ADDRESS of the next Node in the list,
    it does NOT hold the actual Node object.

Step 2: *(temp.next)
  - The dereference operator.
  - "Go to the address stored in temp.next, and give me
    the actual Node object sitting at that address."
  - This gives us the real next Node (its data and next),
    not just its address anymore.

Step 3: temp = *(temp.next);
  - temp already exists, so this calls the
    COPY ASSIGNMENT OPERATOR (not the copy constructor).
  - It copies every member (data, next) from that
    dereferenced Node into temp.
  - temp.data is overwritten with the next node's data.
  - temp.next is overwritten with the next node's next pointer.

Net effect:
  - temp now CONTAINS A COPY of the next node's contents.
  - temp has effectively "moved forward" one step in the list,
    but it is still a separate object, not the same memory
    as the actual next node.

Note:
  - This copies the whole Node by value.
  - If you just want to walk the list without copying,
    use a pointer instead:

        Node* temp = a.next;  // points to next node, no copy
*/
