// Given a string consisting of lowecase English alphabet. Print the character that is occouring most of the time.
#include<iostream>
using namespace std;
int main(){
  string s = "himanshu";
  int maxFreq = 0;
  char maxChar = s[0];

  for(int i = 0; i < s.length(); i++){
    int count = 1;
    for(int j = i+1; j < s.length(); j++){
      if(s[i] == s[j]){
        count++;
      }
    }
    if(maxFreq < count){
      maxFreq = count;
      maxChar = s[i];
    }
  }

  for(int i = 0; i < s.length(); i++){
    int count = 1;
    for(int j = i+1; j < s.length(); j++){
      if(s[i] == s[j]){
        count++;
      }
    }
    cout<<"Frequency of "<<s[i]<<" is "<<count<<endl;
  }

  return 0;
}