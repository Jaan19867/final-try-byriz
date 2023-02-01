#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3};
    char b[]="abc";
    char *c=&b[0];
    cout<<c<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    int z[]={3,4,5,6};
    cout<<z<<endl;
    char str[]="abcde";
    char *pstr="abcde";
    cout<<pstr<<endl;
    cout<<*pstr<<endl;
    char c1='ab';
    char *pc=&c1;
    cout<<c1<<endl;
    cout<<pc<<endl;
    cout<<*pc<<endl;
    
}