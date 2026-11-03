// Program to add 2 matrices
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int row1 = 2;
  int col1 = 2;
  vector<vector<int>>vec1(row1, vector<int>(col1));
  for(int i = 0; i < row1 ; i++){
    for(int j = 0; j < col1;j++){
      cout<<"Enter element "<<i<<" "<<j<<" :";
      cin>> vec1[i][j]; 
    }
  }
  int row2 = 2;
  int col2 = 2;
  vector<vector<int>>vec2(row2,vector<int>(col2));
  for(int i = 0; i < row2 ; i++){
    for(int j = 0; j < col2;j++){
      cout<<"Enter element "<<i<<" "<<j<<" :";
      cin>> vec2[i][j]; 
    }
  }

  for(int i = 0; i < row1;i++){
    for(int j = 0; j < row2 ; j++){
      vec1[i][j] = vec1[i][j] + vec2[i][j];
    }
  }
  for(int i = 0; i < row1 ; i++){
    for(int j = 0; j < col1;j++){
      cout<<vec1[i][j]<<" "; 
    }
    cout<<endl;
  }
}