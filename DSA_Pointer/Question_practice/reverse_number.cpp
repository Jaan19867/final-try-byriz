#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n; int reverse_number=0;
    while(n>0){
        int r;
        r=n%10;
        
       reverse_number=reverse_number*10+r;
        
        
        
        n=n/10;

        
        


    }
cout<<reverse_number<<endl;}