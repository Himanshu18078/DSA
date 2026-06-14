// Prrgram to reverse part the array
#include<iostream>
#include<vector>
using namespace std;
vector<int> enterVector(){
  vector<int> v;
  int size;
  cout<<"Please enter the size of the vector : ";
  cin>>size;
  for(int i = 0; i < size ; i++){
    int num;
    cout<<"Please enter element "<<i<<" element : ";
    cin>>num;
    v.push_back(num);
  }
  return v;
}

void printVector(vector<int> &v){
  for(int i = 0; i < v.size() ; i++){
    cout<<v.at(i)<<" ";
  }
  cout<<endl;
}
void reversePart(vector<int> &v,int first,int last){
  for(int i = first , j = last; i <= j ; i++,j--){
    int temp = v.at(i);
    v.at(i) = v.at(j);
    v.at(j) = temp;
  }
}
int main(){
  vector <int> v = enterVector();
  printVector(v);
  int first , last;
  cout<<"Please enter the first index of the array : ";
  cin>>first;
  cout<<"Pleae enter the last index of the array : ";
  cin>>last;
  reversePart(v,first,last);
  printVector(v);
}