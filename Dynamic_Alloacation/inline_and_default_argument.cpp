#include<iostream>
using namespace std;
int sum( int a[],int size, int si=0){
    int ans=0;
for(int i=si; i<size;i++){
    ans=ans+a[i];
    
}
return ans;


}










int main(){
    int a[12]={9,7,8,9,9,8,9,9,9,9,7,7};
    cout<<sum(a,12)<<endl;
}



/*
 inline int max(int a, int b){ int c=(a>b)?a:b;
    }
   inline  int min(int a1, int b1){
       /* int c1;
        if(a1>b1){c1=b1;}
        else{c1=a1;}
        return  c1;          int c1=(a1>b1)?b1:a1;*/










        
    
   









   


