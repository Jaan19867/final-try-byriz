#include<iostream>

using namespace std;
int fib(int n){
    if(n==0){return 0;}
    if(n==1){return 1;}
    int smalloutput1=fib(n-1);
    int smallouput2=fib(n-2);
    return smalloutput1 + smallouput2 ;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n)<<endl;



}