#include<iostream>
using namespace std;
class Student{
    public:
    int age;
    int RollNumb ;
    static int totalStudents ;

    

};
int Student::totalStudents=0;



int main(){

    Student s1;
    s1.age=56; s1.RollNumb=87;
    cout< s1.RollNumb<<" "<<s1.age<<endl;
    cout<<s1.totalStudents<<endl;


}










