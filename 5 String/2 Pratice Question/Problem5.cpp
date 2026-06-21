// Program to take string of even length and print the second half of the string
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
  string name;
  cout<<"Pleaes enter the name if it is even : ";
  cin>>name;
  int i = name.size() / 2;
  cout<<name.substr(i,i);
  cout<<endl;
  cout<<name.substr(i);
}