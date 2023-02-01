#include<iostream>
using namespace std;
void f(int *p){
    (*p)++;
    void g( int const &a){
        a++;
    }
    
}
int main(){
   /*/ int i;
i=0;
cout<<i<<endl;
const int i1=1;

cout<<i1<<endl;
i=2;
//i1=3;
cout<<i<<i1<<endl;
int  const j= 12;
const int &k=j;
j++;
k++;*/
/*int const i=10;
int const  *p=&i;
int j=12;
int const *p2=&j;
j++;
cout<<*p2<<endl;
(*p2)++;*/
int  j=12;
g(j);
int *p3=&j;
f(p3);
cout<<j<<endl;




}