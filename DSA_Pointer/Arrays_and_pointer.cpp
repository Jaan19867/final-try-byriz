#include<iostream>
using namespace std;
int main(){
    int a[10];
    cout<<a<<endl;
    cout<<&a<<endl;
    a[0]=5;
    cout<<*a<<endl;
    a[1]=87;
    cout<<*(a+1)<<endl;
    cout<<a[1]<<endl;
cout<< sizeof(a)<<endl;
cout<<sizeof*(a)<<endl;
cout<<*a<<endl;
    
}