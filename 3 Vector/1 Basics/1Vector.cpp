#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector <int> v; //initilization of the vector
  // inserting / input do not use [] when the size is not defined.
  v.push_back(6);
  cout<<"Capacity right now is : "<<v.capacity()<<endl;
  v.push_back(7);
  cout<<"Capacity right now is : "<<v.capacity()<<endl;
  v.push_back(8);
  cout<<"Capacity right now is : "<<v.capacity()<<endl;
  v.push_back(0);
  cout<<"Capacity right now is : "<<v.capacity()<<endl;

  // if you want to update / access
  cout<<"Size of the vector is : "<<v.size()<<endl;
  v[0] = 88;
  cout<<"Elements are : "<<endl;
  cout<<v[0]<<endl;
  cout<<v[1]<<endl;
  cout<<v[2]<<endl;
  cout<<v[3]<<endl;
  return 0;
}
