#include <iostream>
using namespace std;
int main(){int n;
cin>>n; int place_value=1; int mainvalue;int decform=0;
while(n>0){
    mainvalue= n%10;
   
     decform=  decform +place_value*mainvalue;
    place_value=place_value*2;
    n=n/10;






}
cout<<decform<<endl;


}