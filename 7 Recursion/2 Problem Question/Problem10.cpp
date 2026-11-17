// Program to print the subset of the string
#include<iostream>
using namespace std;
void printSubset(string substrs , string str){
  if(str.length() == 0){
    cout<<substrs<<endl;
    return;
  }
  printSubset(substrs , str.substr(1));
  printSubset(substrs + str[0] , str.substr(1));
}
int main(){
  printSubset(" " , "abc");
}