// Program to skip a character
#include<iostream>
using namespace std;
void skipChar(string str , string currStr){
  if(str.length() == 0){
    cout<<currStr<<" ";
    return;
  }
  char ch = str[0];
  if(ch != 'a') skipChar(str.substr(1), currStr+ch);
  else skipChar(str.substr(1), currStr);
}
int main(){
  skipChar("absbdfabadfsaba" , "");
  return 0;
}