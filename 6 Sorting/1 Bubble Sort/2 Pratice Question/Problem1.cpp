// Sort a String in decreasing oreder of values associated after the removale of value smaller than x
#include<iostream>
#include<vector>
#include<cctype>
using namespace std;
/*
  Note:
  - tolower() converts characters to lowercase before comparison.
  - This makes the comparison case-insensitive.
  - C++ automatically compares the ASCII values of the
    resulting characters.
*/
void bubbleSort(string &s){
  for(int i = 0; i < s.size()-1; i++){
    bool swaped = false;
    for(int j = 0; j < s.size() - 1 - i; j++){
      if(tolower(s[j+1]) > tolower(s[j])){
        swap(s[j], s[j+1]);
        swaped = true;
      }
    }
     if(!swaped){
        return;
      }
  }
}
int main(){
  string s;
  cout<<"Please enter the string : ";
  cin>>s;
  // removing value less then x
  string newString = "";
  for(int i = 0; i < s.size(); i++){
    if(tolower(s[i]) >= 'x'){
      newString += s[i];
    }
  }
  bubbleSort(newString);
  cout<<newString<<endl;
}