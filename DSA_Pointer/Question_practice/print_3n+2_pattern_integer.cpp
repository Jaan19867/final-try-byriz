#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int i=1;
   int count=0;
   while(true){
    int j=3*i+2;
    if(j%4!=0){
        cout<<j<<" ";
        count++;
    }
    if(count==n){ break ;}
    i++;


   }
        

        


    
    }
