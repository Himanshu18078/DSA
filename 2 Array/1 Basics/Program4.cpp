// Calculating the size of the array ussing sizeof function
#include<iostream>
using namespace std;
int main(){
  int arr[] = {2,13,6544,6,4,64,4,4,6,4,64,64,64,1,7,7,8,66};
  int size = sizeof(arr)/sizeof(arr[0]);
  cout<<"Size of the array is : "<<size;
}