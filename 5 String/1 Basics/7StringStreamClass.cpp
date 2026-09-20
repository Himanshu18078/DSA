#include<iostream>
#include<sstream>
using namespace std;
int main(){
  string str = "himanshu bisht is the best in the world";
  stringstream ss(str);
  string temp;
  int count = 0;
  while(ss>>temp){
    count++;
    cout<<temp<<endl;
  }
  cout<<"Total words are : "<<count<<endl;
}