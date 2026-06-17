// Program to find second largest element of 2d arr
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
  for(int i = 0 ; i < rows; i++){
    for(int j = 0; j < column; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
  int sum = 0;
  for(int i = 0 ; i < rows; i++){
    for(int j = 0; j < column; j++){
      sum+=arr[i][j];
    }
  }

  cout<<"Sum of  element is : "<<sum<<endl;
}