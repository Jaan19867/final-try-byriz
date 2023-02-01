/*#include<iostream>
using namespace std;

int getValue(int x = 0, int y = 0, int z){  
    return (x + y + z); 
}

int main(){
   cout << getValue(10);
   return 0;
}*/
#include <iostream>
using namespace std;

int main(){
    int p = 5;
    int const *q = &p;
    p++;
    cout << p << endl;
    return 0;
}
