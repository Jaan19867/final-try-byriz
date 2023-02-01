#include<iostream>
# define Pi 3.14
using namespace std;
int a ;
void g(){
    a++;
    cout<<a<<endl;
}
void f(){
    cout<<a<<endl;
    a++;

}


int main(){
    int r ;
    cin>>r;
    cout<< Pi *r*r<<endl;
    a=10;
    f();
    g();
    cout<<a<<endl;


}