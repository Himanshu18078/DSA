#include<iostream>
using namespace std;
int main(){
  // int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
  // int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}}; //this is also a valid 
  // int arr[][3] = {1,2,3,4,5,6,7,8,9}; //This is also valid 
  int row , column;
  cout<<"Please enter the number of rows : ";
  cin>>row;
  cout<<"Please enter the number of column : ";
  cin>>column;

  int arr[row][column];
  for(int i = 0 ; i < row; i++){
    for(int j = 0; j < column; j++){
      cout<<"Item at index ["<<i+1<<j+1<<"] :  ";
      cin>>arr[i][j];
    }
  }

  for(int i = 0 ; i < row; i++){
    for(int j = 0; j < column; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  
}