#include<iostream>
using namespace std;
class node{
  public :
  int val;
  node* next;
  // Constructor
  node(int val){
    this ->val = val;
    next = NULL;
  }
};
void display(node* head){
  node* temp = head;
  /*
  temp ek pointer hai jo current node ka address store karta hai.
  Loop ki condition "temp != NULL" yeh check karti hai ki temp
  kisi valid node (a, b, c, d) ko point kar raha hai ya nahi.

  Agar temp NULL nahi hai, matlab woh kisi real node par khada hai,
  toh uska val print kar do, aur temp ko next node par bhej do
  using temp = temp->next.

  Jab temp aakhri node (d) ke baad NULL ho jaata hai,
  (kyunki constructor mein next = NULL set hota hai),
  tab condition false ho jaati hai aur loop ruk jaata hai.

  Matlab yeh check sirf itna dekhta hai ki list abhi khatam
  hui hai ya nahi, taaki NULL ke andar val ya next access
  karke crash na ho.
*/
  while (temp != NULL)
  {
    cout<<temp->val<<" ";
    temp = temp->next;
  
  }
}
int main(){
  node* a = new node(10);
  node* b = new node(20);
  node* c = new node(30);
  node* d = new node(40);
  a->next = b; 
  b->next = c;
  c->next = d;
  display(a);
}