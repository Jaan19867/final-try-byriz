#include<iostream>
using namespace std;
int power(int x,int n){
    if(n==0){
        return 1;
    }
   int  smallerpower=power(x,n-1);
   return x*smallerpower;
}



int main(){
    int x,n;
    cin>>x>>n;
    int ans=power(x, n);
cout<<ans<<endl;
}