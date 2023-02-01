#include<iostream>
using namespace std;
#include "class.cpp"
int main(){
    //Create object statically
    Student s1;
    Student s2;
    Student s3, s4 ,s5;
    s1.Age=20 ;
    s1.Roll_Number=23;
   
    cout<<s1.Age<<endl;
    cout<<s1.Roll_Number<<endl;
    // Create object dynamically
    Student *s6=new Student;
    (*s6).Age =23;
    (*s6).Roll_Number=8888;
    cout<<(*s6).Age<<endl;
    cout<<(*s6).Roll_Number<<endl;


}