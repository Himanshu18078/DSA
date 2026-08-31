#include<iostream>
#include<climits>
using namespace std;

int main(){

 int size;
 cout<<"Please enter number of student : ";
 cin>>size;
 int arr[size];
 for(int i = 0 ; i < size; i++){
  cout<<"Please enter element "<<i+1<<":";
  cin>>arr[i];
 }
 cout<<"Array is : "<<endl;
  for(int i = 0; i < size; i++){
    if(arr[i] < 35) cout<<i<<endl;
  }
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum += arr[i];
  }
  cout<<"Sum is : "<<sum<<endl;

  int num;
  cout<<"Please enter a number : ";
  cin>>num;
  int index = -1;
  for(int i = 0; i < size; i++){
    if(arr[i] == num) index = i;
    
  }
  if(index != -1) cout<<"Number is present at index : "<<index<<endl;
  else cout<<"Number is not in the array"<<endl;
    
  int max = INT_MIN;
  for(int i = 0; i < size; i++){
    if(max < arr[i]) max = arr[i];
  }
  cout<<"Maximum Element is : "<<max<<endl;

  int secondMax = INT_MIN;
  for(int i = 0; i < size; i++){
    if(secondMax < arr[i] && arr[i] != max) secondMax = arr[i];
  }
  cout<<"Second Maximum element is : "<<secondMax<<endl;
}