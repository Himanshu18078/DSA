// Program to print and take input in the 2d vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int rows ;
  int cols;
  cout<<"Enter number of rows : ";
  cin>>rows;
  cout<<"Enter number of columns : ";
  cin>>cols;
  vector<vector<int>> vec(rows, vector<int>(cols));
  for(int i = 0; i < rows ; i++){
    for(int j = 0; j < cols;j++){
      cout<<"Enter element "<<i<<" "<<j<<" :";
      cin>> vec[i][j]; 
    }
  }
  int maxEle = vec[0][0];
  for(int i = 0; i < rows ; i++){
    for(int j = 0; j < cols;j++){
      if(vec[i][j] > maxEle) maxEle = vec[i][j];
    }
    cout<<endl;
  }
  cout<<"Max element is : "<<maxEle<<endl;
}