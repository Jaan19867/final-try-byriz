#include <iostream>
using namespace std;
int main(){
    int i=10;
    int *p=&i;
int**p2=&p;
cout<<p2<<endl;
cout<<&p<<endl;
cout<<p<<endl;
cout<<&i<<endl;
cout<<*p2<<endl;
cout<<i<<endl;

cout<<**p2<<endl;
cout<<*p<<endl;


}