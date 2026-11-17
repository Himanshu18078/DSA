#include<iostream>
using namespace std;
void pip(int num){
  if(num <= 0) return;
  cout<<"Pre : "<<num<<endl;
  pip(num-1);
  cout<<"In : "<<num<<endl;
  pip(num-1);
  cout<<"Post : "<<num<<endl;
}
int main(){
  pip(2);
}