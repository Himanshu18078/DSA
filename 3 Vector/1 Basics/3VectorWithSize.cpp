#include<iostream>
#include<vector>
using namespace std;
int main(){
  // vector <int> v(5);
  vector <int> v(5,7); //initial size = 5, each element has value 7;
  cout<<v.size()<<endl;
  cout<<v.capacity()<<endl;
  // cout<<"Element at index 0 is : "<<v[0]<<endl;//initially all the element of the vectors are zero
  for(int i = 0; i < v.size() ;i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  return 0;
}