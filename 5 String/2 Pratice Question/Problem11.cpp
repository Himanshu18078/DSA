// Given a string consisting of lowecase English alphabet. Print the character that is occouring most of the time.
#include<iostream>
#include<vector>
using namespace std;
int main(){
  string s = "leetcode";
  vector<int> arr(26,0);
  for(int i = 0; i < s.length() ; i++){
    char ch = s[i];
    int ascii = int(ch); 
    arr[ascii - 97]++;
    /*
    let char is L and the ascii value of L is 108 
    now 108 - 97 = 11
    so at index 11 increase the value by 1
    this is how we are now storing the frequency
    */
  }

  int max = 0;
  for(int i = 0; i < 26;i++){
    if(arr[i] > max) max = arr[i];
  }

  for(int i = 0; i < 26; i++){
    if(arr[i] == max){
      int ascii = i + 97;
      char ch = (char)ascii;
      cout<<"Character is : "<<ch<<" Frequency is : "<<max<<endl;
    }
  }

  return 0;
}