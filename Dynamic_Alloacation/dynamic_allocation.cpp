#include<iostream>
using namespace std;
int main(){
  /* int i=10;
    int a[2000 ];
cout<<i<<endl;
int n;
cin>>n;
int b[n];*/
int *p=new int;
*p=10;
cout<<*p<<endl;
cout<<sizeof(*p)<<endl;
char *p1=new char;
*p1='absefdfsdfweifhdifhwo';
double *p2=new double;
*p2=23.34;
cout<<*p2;
cout<<*p1<<endl;
int *p3=new int[50];
int n;
cin >>n;
int *p4=new int[n];
*p4=5;
cout<<*p4<<endl;
p4[1]=7;
cout<<p4[1]<<endl;
delete p;
delete []p3;
* p3=6;
cout<<*p3<<endl;



}