#include<iostream>
using namespace std;
class Student{


    int Name;
    int RollNumber;
    int Address;
    int Score;
    public :
    void display(){ cout<< Name <<" "<<RollNumber<<" "<<Address<<" "<<Score<<endl;}
    Student(int n,int r,int a,int s){ cout<<" Constructor 2 has been called"<<endl;
    
    }

};
int main(){
Student s1(20,30,40,50);
s1.display();



}