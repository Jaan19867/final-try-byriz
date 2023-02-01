#include<iostream>
using namespace std;
int main(){
    int i=65;
    char c=i;
    cout<<c<<endl;
    int *p=&i;
    cout<<p<<endl;
    char *pc=(char*)p;
    cout<<pc<<endl;
    cout<<*p<<endl;
    cout<<*pc<<endl;
    cout<<*(pc+1)<<endl;
    cout<<"character_is_stored_in_first_byte_65_other_three_byte_are_empty_so_print_empty_"<<endl;
    cout<<*(pc+2)<<endl;
    cout<<*(pc+3)<<endl;
    cout<<*(pc+4)<<endl;
    cout<<*(pc+5)<<endl;
    
    

}