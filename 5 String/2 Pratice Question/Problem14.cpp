#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
  vector<string> str = {"0123","023","456","00182","940","2901"};
  string max = str[0];
  int index = 0;
  
  for(int i = 0 ; i < str.size() - 1; i++){
    if(stoi(str.at(i)) < stoi(str.at(i+1))){
      max = str.at(i+1);
      index = i+1;
    }
  }
  cout<<"Maximum Number is : "<<max<<"\n Index is : "<<index<<endl;
}