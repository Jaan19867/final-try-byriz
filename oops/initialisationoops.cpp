#include<iostream>
using namespace std;
class Student{  public:
    int age;
int const  RollNo;
int &x; //age reference variable


Student(int r, int age) : RollNo(r) , age(age), x (this->age){
    //RollNo=r;
}
display(){ cout<<age<<" "<<RollNo<<endl;}







};
int main(){
Student s1(23);
s1.age=20;
// s1.RollNo=101;
s1.display();





}