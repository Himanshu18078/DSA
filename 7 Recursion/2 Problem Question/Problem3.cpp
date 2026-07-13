// Function for stair path
#include<iostream>
using namespace std;
int stairPath(int stair){
  if(stair == 1) return 1;
  if(stair == 2) return 2;
  return(stairPath(stair-1) + stairPath(stair-2));
}
int main(){
  cout<<stairPath(4);
}