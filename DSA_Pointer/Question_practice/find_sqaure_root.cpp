#include<iostream>
using namespace std;

int main() {
	int n;// Write your code here
	cin>>n;int i=1;int j;
while(true){
	j=i*i;
	i++;
    if(j>n){ break;}
}
cout<<(i-2)<<endl;
}
