// Memory allocation of array
#include<iostream>
using namespace std;
int main(){
  int arr[5];
  // cout<<&arr<<endl; this will print the address of the array which is the address of first bit of the first element
  cout<<arr<<endl; // this also print the address of the array
  cout<<&arr[0]<<endl;
  cout<<&arr[1]<<endl;
  cout<<&arr[2]<<endl;
  cout<<&arr[3]<<endl;
  cout<<&arr[4]<<endl;
  return 0;
}
/*
0x61fefc
0x61fefc
0x61ff00
0x61ff04
0x61ff08
0x61ff0c
*/