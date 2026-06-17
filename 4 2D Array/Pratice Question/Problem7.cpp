// You have given an array of (n X n) transfer this into its transpose
#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int field;
  cout << "Please enter the size of the matrix : ";
  cin >> field;
  vector<vector<int>> Matrix(field, vector<int>(field));
  // Entering element into the matrix
  for (int i = 0; i < field; i++)
  {
    for (int j = 0; j < field; j++)
    {
      cout << "Item at index [" << i + 1 << "," << j + 1 << "] :  ";
      cin >> Matrix[i][j];
    }
  }
  // Printing
  for (int i = 0; i < field; i++)
  {
    for (int j = 0; j < field; j++)
    {
      cout << Matrix[i][j] << " ";
    }
    cout << endl;
  }
  // swapping
  for (int i = 0; i < field; i++)
  {
    for (int j = i + 1; j < field; j++)
    {
      if (i == j)
      {
        continue;
      }
      else
      {
        int temp = Matrix[i][j];
        Matrix[i][j] = Matrix[j][i];
        Matrix[j][i] = temp;
      }
    }
  }
  cout << "---------------------" << endl;
  cout << "Transpose" << endl;
  for (int i = 0; i < field; i++)
  {
    for (int j = 0; j < field; j++)
    {
      cout << Matrix[i][j] << " ";
    }
    cout << endl;
  }
}