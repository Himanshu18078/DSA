// PRE IN POST
// Program to print zig  zag
#include<iostream>
using namespace std;
void pip(int num){
  if(num == 0) return;
  cout<<num;
  pip(num-1);
  cout<<num;
  pip(num-1);
  cout<<num;
}
int main(){
  pip(3);
}