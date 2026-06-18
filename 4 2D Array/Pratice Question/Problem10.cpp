// Progarm to print a matrix in wave order
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int rows, column;
  cout << "Rows : ";
  cin >> rows;
  cout << "Column : ";
  cin >> column;
  int arr[rows][column];
  for (int i = 0; i < rows; i++)
  {
    for (int j = 0; j < column; j++)
    {
      cout << "Item at index [" << i + 1 << "," << j + 1 << "] :  ";
      cin >> arr[i][j];
    }
  }
  /*
  // This is how I solved this problem
  int c = 0;
  for(int i = 0 ; i < rows; i++){
    if(c % 2 == 0){
      for(int j = 0; j < column ; j++){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    else{
      for(int j = column - 1; j >=0 ; j--){
        cout<<arr[i][j]<<" ";
      }
      cout<<endl;
    }
    c++;
  }
  */
//  More optmized version
for(int i = 0; i < rows; i++){
  if( i % 2 == 0){
    for(int j = 0; j < column ; j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }else{
    for(int j = column -1 ; j >= 0; j--){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}

}