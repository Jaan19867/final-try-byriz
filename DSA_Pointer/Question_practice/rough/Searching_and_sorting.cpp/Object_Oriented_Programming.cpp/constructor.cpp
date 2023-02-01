#include<iostream>
using namespace std;
#include "class_for_constructor.cpp"
int main(){


    Student s1;
    s1.display();
    Student s2;
    Student *s3=new Student ;
    Student s4(398);
    Student s6(876,20);
    cout<<&s6;
    Student s7;
    
    

    

}