// Give a sentence str , return the word that is occouring most number of the time in the sentence.
#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main(){
  string s = "Hi my my name name name is himanshu bisht bisht bisht is";
  stringstream ss(s);
  vector<string> v;
  string temp;
  while(ss>>temp){
    v.push_back(temp);
  }

  sort(v.begin(), v.end());

  
  int max = 1;
  int count = 1;
  for(int i = 1; i < v.size() ; i++){
    if(v.at(i) == v.at(i-1)){
      count++;
    }
    else{
      count = 1;
    }
    if(max < count){
      max = count;
    }
  }

  
  count = 1;
  for(int i = 1; i < v.size() ; i++){
    if(v.at(i) == v.at(i-1)){
      count++;
    }
    else{
      count = 1;
    }
    if (count == max){
      cout<<"Character : "<<v.at(i)<<" Frequency : "<<count<<endl;
    }
  }
  cout<<"Max count is : "<<max<<endl;
}