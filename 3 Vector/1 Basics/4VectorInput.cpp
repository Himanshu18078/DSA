#include <iostream>
#include <vector>
using namespace std;
int main()
{
  /* THIS IS WHEN THE SIZE IS DEFINDED
  vector<int> v(5);
  for(int i = 0 ; i < v.size();i++){
    cout<<"Element "<<i<<" : ";
    cin>>v[i];
  }
  for(int i = 0 ; i < v.size();i++){
    cout<<v[i]<<" ";
  }
  cout<<endl;
  */
  //  The following is used when the size is not defined
  vector<int> v;
  for (int i = 0; i < 10; i++)
  {
    int x;
    cout << "Element " << i << " : ";
    cin >> x;
    v.push_back(x);
  };
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}