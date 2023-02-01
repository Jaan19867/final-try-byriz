#include<iostream>
using namespace std;
int main(){
    char ch='a';
    char *ptr=&ch;
    ch++;
    cout<<*ptr<<endl;
    char b[] = "xyz";
char *c = &b[0];
cout << c << endl;
char d='abc';
char *pd =&d;
cout<<*pd<<endl;
char b1[] = "xyz";
char *c1 = &b[0];
c1++;
cout << c1 << endl;
char s[]= "hello";
char *p = s;
cout << s[0] << " " << p[0];



}