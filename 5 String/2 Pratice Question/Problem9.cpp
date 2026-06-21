// Program for anagram
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string s , t ;
  cout<<"Please enter first string : ";
  cin>>s;
  cout<<"Please enter second string : ";
  cin>>t;
  sort(s.begin(),s.end());
  sort(t.begin(),t.end());
  if(s == t){
    cout<<"Anagram"<<endl;
  }else{
    cout<<"Not an anagram"<<endl;
  }
}