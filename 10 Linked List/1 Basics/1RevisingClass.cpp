#include<iostream>
using namespace std;
class Student{ //user define data
  public:
  string name;
  int rollNo;
  float marks; 
  Student(string name, int rollNo , float marks){
    this -> name = name;
    this -> rollNo = rollNo;
    this -> marks = marks;
  }
};
void change(Student* s){
  s->name = "Mohit";
};
int main(){
  // Student s("Himanshu Bisht",18078,7.0);
  Student* s = new Student("Himanshu Bisht",18078,7.0);
  // Student *ptr = &s;


  // s.name = "Himanshu Bisht";
  // s.rollNo = 18078;
  // s.marks = 7.0;
  cout<<s->name<<endl;
  change(s);
  // ptr->name = "Mohit";        // Correct
    // OR
    // (*ptr).name = "Mohit";
  cout<<s->name<<endl;
}