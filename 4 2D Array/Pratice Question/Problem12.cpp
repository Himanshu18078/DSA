// Progarm to print a matrix in column wave
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
  
for(int i = 0 ; i < rows ; i++){
  if( i % 2 == 0){
    for(int j = 0; j < column ; j++){
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }else{
    for(int j = column -1 ; j >= 0; j--){
      cout<<arr[j][i]<<" ";
    }
    cout<<endl;
  }
}
}