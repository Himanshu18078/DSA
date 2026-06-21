// Program to take a string of length greater then 5 and reverse the substring from position 2 to 5 using inbuilt funciton
#include<iostream>
#include<algorithm>

using namespace std;
int main(){
  string name;
  cout<<"Pleaes enter the name if it is even : ";
  cin>>name;

  reverse(name.begin()+2, name.begin()+6);
  cout<<name;
}