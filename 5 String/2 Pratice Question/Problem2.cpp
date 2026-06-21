// Input a string of size n and update all the even position in the string to character 'a'.
#include<iostream>
using namespace std;
int main(){
  string str = "Himanshu";
  for(int i = 0; i < 8;i++){
    if(i % 2 == 0){
      str[i] = 'a';
    }
  }
  cout<<str;
}