// Given an array of marks of student, if the marks of any student is less than 35 print its roll number.{roll number here refers to the index of the array}
#include<iostream>
using namespace std;
int main(){
  int numberOfStudent;
  cout<<"Please enter number of student : ";
  cin>>numberOfStudent;
  int arr[numberOfStudent];
  for(int i = 0;i < numberOfStudent;i++){
    cout<<"Please enter the marks of the student of rollnumber "<<i+1<<" : ";
    cin>>arr[i];
  }
  for(int i = 0 ;i < numberOfStudent ; i++){
    if(arr[i] < 35){
    cout<<"Student with roll number "<<i+1<<" have marks less than 35"<<endl;
    }
  }
  return 0;
}