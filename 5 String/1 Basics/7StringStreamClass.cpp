#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
  string str = "himanshu bisht is the best in the world";
  stringstream ss(str);
  string temp;
  while(ss>>temp){
    cout<<temp<<endl;
  }
}