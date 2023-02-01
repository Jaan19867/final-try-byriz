#include<iostream>
using namespace std;
#include "class.cpp"
int main(){
    Student s1;
    Student *s2=new Student;
    s1.Roll_Number=989;
   // s1.Age=20;
    s1.display();
    s1.getAge();
    cout<<" Hello Wolrd";
    s1.setAge(20);

s1.setpasswordforAGe(20, 765);




}