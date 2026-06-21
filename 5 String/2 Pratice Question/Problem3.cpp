// Program to input a string a even length and reverse the first half of the string
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string name;
  cout<<"Pleaes enter the name if it is even : ";
  cin>>name;

  // THIS IS DONE WITH THE HELP OF LOOPS
  // int i = 0;
  // int j = name.length() / 2 - 1;
  // while(i <= j ){
  //   char temp = name[i];
  //   name[i] = name[j];
  //   name[j] = temp;
  //   i++;
  //   j--;
  // }

  // USING INBUILT FUNCTION
  int j = name.length() / 2;
  reverse(name.begin(), name.begin()+j);
  cout<<name;
}