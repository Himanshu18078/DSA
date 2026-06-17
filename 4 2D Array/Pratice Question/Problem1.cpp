#include <iostream>
#include<string>
using namespace std;
int main()
{
  string arr[4][2];
  for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      if (j % 2 == 0)
      {
        cout << "Enter Name of student " << i + 1 << " : ";
        cin >> arr[i][j];
      }
      else{
        cout << "Enter Roll Number of student " << i + 1 << " : ";
        cin >> arr[i][j];
      }
    }
  }
   for (int i = 0; i < 4; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }
}