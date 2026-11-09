#include<iostream>
using namespace std;
int stairPath(int totalStair){
  if(totalStair == 1) return 1;
  if(totalStair == 2) return 2;
  return stairPath(totalStair-2) + stairPath(totalStair-1);
}
int main(){
  cout<<stairPath(5);
}