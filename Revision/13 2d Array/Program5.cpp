// Program for the transpose of the matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int rows = 3;
  int cols = 3;
  vector<vector<int>>vec(rows , vector<int>(cols));
  for(int i = 0 ; i < rows ;i++){
    for(int j = 0; j < cols ; j++){
      cout<<"Enter element "<<i<<" "<<j<<" : ";
      cin>>vec[i][j];
    }
  }
  for(int i = 0; i < rows ;i++){
    for(int j = i+1 ; j < cols ; j++){
      swap(vec[i][j] , vec[j][i]);
    }
  }
  for(int i = 0; i < rows ;i++){
    for(int j = 0 ; j < cols ; j++){
      cout<<vec[i][j];
    }
    cout<<endl;
  }
}
