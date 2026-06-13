// Program to find last occurance of x in the array/vector
#include <iostream>
#include <vector>
using namespace std;
int lastOccurance(vector<int> v, int num)
{
  int index = -1;
  for (int i = 0; i < v.size(); i++)
  {
    if (num == v.at(i))
    {
      index = i;
    }
  }
  return index;
}
vector<int> inputValues()
{
  vector<int> v;
  int size;
  cout << "Please enter the size of the array : ";
  cin >> size;
  for (int i = 0; i < size; i++)
  {
    int num;
    cout << "Element " << i << " : ";
    cin >> num;
    v.push_back(num);
  }
  return v;
}
void printVector(vector<int> v){
  for (int i = 0; i < v.size() ; i++){
    cout<<v.at(i)<<" ";
  }
  cout<<endl;
}
int main()
{
  vector<int> v;
  v = inputValues();
  printVector(v);
  cout<<"Please enter the number whose occurance you want to check : ";
  int num;
  cin>>num;
  int index = lastOccurance(v , num);
  if(index != -1){
    cout<<"Last occurance is : "<<index<<endl;
  }else{
    cout<<"Element is not present";
  }
  return 0;
}