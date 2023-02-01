
#include<iostream>
using namespace std;


int  count(int n){if(n==0){
    return 0;
}
int small=count(n/10);
int ans=small+1;
return ans;

    //write your code here
}
int main(){
    int n;
    cin>>n;
    int no_ofdigit= count(n);
    cout<<no_ofdigit<<endl;
    
}

