// Program to create a set and check if the number entered by the user is present in the set or not
#include<iostream>
#include<unordered_set>
using namespace std;
// function to print an unordered set
void printSet(unordered_set<int> &s){
  for(int element : s){
    cout<<element<<" ";
  }
  cout<<endl;
}
// function to chceck if the element exist in the set or not
void exists(unordered_set<int> &s){
  cout<<"Please enter the number you want to check : ";
  int num;
  cin>>num;
  if(s.find(num) != s.end()){
    cout<<num<<" is present in the set"<<endl;
  }else{
    cout<<num<<" is not present in the set"<<endl;
  }
}
int main(){
  unordered_set<int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  s.insert(4);
  s.insert(5);
  s.insert(6);
  printSet(s);
  exists(s);
}