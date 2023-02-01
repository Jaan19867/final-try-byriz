#include <iostream>
using namespace std;
 
 class  Student{
    public: int rollnumber;
    private:
    int age ;
    public :
    void display(){ cout <<age<<" "<< rollnumber<<endl;}
    int  getAge(){
      return age;
    }
    int setAge(int a){ age=a;
    return age;}


    
};


int main(){


     Student s1;
     
     s1.rollnumber=222;
       s1.display();
      cout<< s1.getAge()<<endl;;
      int a;
      cin>>a;
      cout<<s1.setAge(a);
      Student *s2=new Student;
      s2->display() ;

       
}
