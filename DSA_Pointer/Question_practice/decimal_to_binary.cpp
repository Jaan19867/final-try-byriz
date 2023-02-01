#include<iostream>
using namespace std;
int main(){int n;
cin>>n;int ans =0; int base_value=1;
while(n>0){
    int rem=n%2;
    n=n/2;
     ans=base_value*rem +ans;
     base_value=base_value*10;
}
cout<<ans<<endl;
}
