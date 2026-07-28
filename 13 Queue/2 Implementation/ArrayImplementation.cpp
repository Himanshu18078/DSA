#include<iostream>
#include<vector>
using namespace std;

class Queue{
  public :
   int f;
   int b;
   int size;
   vector<int> arr;

   Queue(int s){
    size = s;
    arr.resize(size);
    f = 0;
    b = 0;
   }

   void push(int val){
    if(b == size){
      cout<<"Queue is full"<<endl;
      return;
    }
    arr[b] = val;
    b++;
   }

   void pop(){
    if(f == b){
      cout<<"Queue is empty"<<endl;
      return;
    }
    f++;
   }

   int front(){
    if(f == b){
      cout<<"Queue is empty"<<endl;
      return -1;
    }
    return arr[f];
   }

   void display(){
    if(f == b){
      cout<<"Queue is empty"<<endl;
      return;
    }
    for(int i = f; i < b; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
   }
};
int main(){
  Queue q(5);
  q.push(10);
  q.push(20);
  q.push(30);
  q.push(40);
  q.push(50);
  q.push(60);
  q.display();
}