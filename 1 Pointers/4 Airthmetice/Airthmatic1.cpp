#include<iostream>
using namespace std;
int main(){
  int x = 7;
  int* ptr = &x;
  cout<<ptr<<endl;
  ptr = ptr + 1;
  cout<<ptr<<endl;
  return 0;
}
/*
0x61ff08 this is the first address loaction of the X
0x61ff0c this is the address of location of first bit of x + 4bit , becase e are using integer address 
sicne it follos hexa decimal values so 8 + 4 = c
*/