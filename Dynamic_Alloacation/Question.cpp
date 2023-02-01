/*#include <iostream>
using namespace std;
void updateValue(int *p){
    *p = 610 % 255;
}

int main(){
    char ch = 'A';
    char *pt = &ch;
    updateValue((int*)pt);
    cout << ch<<endl;
    char d='160';
    cout<<d<<endl;

    
    cout<<610 % 255<<endl;*/
    #include <iostream>
using namespace std;

void func(int i, int& j, int p){
    i++;
    j++;
    p++;
}

int main(){
    int i = 10;
    int j = 6;
    int &p = i;
    func(i, j, p);
    cout << i << " " << j << " " << p;


}
