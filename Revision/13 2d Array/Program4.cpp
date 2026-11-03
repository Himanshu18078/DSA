// Program for the transpose of the matrix
#include<iostream>
#include<vector>
using namespace std;
int main(){
  int rows = 2;
  int cols = 3;
  vector<vector<int>>vec(rows , vector<int>(cols));
  for(int i = 0 ; i < rows ;i++){
    for(int j = 0; j < cols ; j++){
      cout<<"Enter element "<<i<<" "<<j<<" : ";
      cin>>vec[i][j];
    }
  }
  for(int i = 0 ; i < cols ;i++){
    for(int j = 0; j < rows ; j++){
      cout<<vec[j][i];
    }
    cout<<endl;
  }

  // vector<vector<int>> trasnpose(cols , vector<int>(rows));
  // for(int i = 0 ; i < cols ;i++){
  //   for(int j = 0; j < rows ; j++){
  //     trasnpose[i][j] = vec[j][i];
  //   }
  // }

  // for(int i = 0 ; i < cols ;i++){
  //   for(int j = 0; j < rows ; j++){
  //     cout<<trasnpose[i][j];
  //   }
  //   cout<<endl;
  // }
}
