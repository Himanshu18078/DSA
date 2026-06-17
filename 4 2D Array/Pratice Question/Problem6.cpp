// Program to calculate transpose of the matrix and store it into another array
#include<iostream>
using namespace std;
int main(){
  int rows,column;
  cout<<"Rows : ";
  cin>>rows;
  cout<<"Column : ";
  cin>>column;
  int arr[rows][column];
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < column; j++){
      cout<<"Item at index ["<<i+1<<","<<j+1<<"] :  ";
      cin>>arr[i][j];
    }
  }
  cout<<"-----------"<<endl;
  for(int i = 0 ; i < rows; i++){
    for(int j = 0; j < column; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

  cout<<"--------------"<<endl;
  int t[column][rows];
  for(int i = 0; i < column; i++){
    for(int j = 0; j < rows; j++){
      t[i][j] = arr[j][i];
    }
  }
  for(int i = 0; i < column; i++){
    for(int j = 0; j < rows; j++){
      cout<<t[i][j]<<" ";
    }
    cout<<endl;
  }
}