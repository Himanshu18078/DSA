// Function to print values in reverse order...
#include<iostream>
using namespace std;
void printReverse(int n){
  if(n == 0) return;
  cout<<n<<endl;
  printReverse(n-1);
}
int main(){
  printReverse(10);
  return 0;
}