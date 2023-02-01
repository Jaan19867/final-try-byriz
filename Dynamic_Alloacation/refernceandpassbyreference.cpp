#include<iostream>
using namespace std;
void increment(int&p){
    p++;
}
int *f2(){
    int i=10;
    return &i;
   /* int &f(int n){
        int a= n;
        return a;
    }*/
}
int main(){
   /*/ int i=10;
    int j=i;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    int i=10;
    int &j=i;
    i++;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;*/
    int i=10;
   /*
    int &k= f(i);
    increment(i);
    cout<<i<<endl;
    */


}