#include<iostream>
using namespace std;
class Node{

    public:
    int data;
    Node *next;
    Node(int data){
        this-> data=data;
        next=NULL;
    }

};


int main(){

 // statiscally   
Node n1(1);
  Node *head=&n1;
Node n2(2);
n1.next=&n2;
cout<<head<<endl;

cout<<n1.data<<" "<<n2.data<<endl;
cout<<  head->data<<endl;

// dynamically
Node *n3=new Node(10);
Node *head2=n3;
Node *n4=new Node(20);
n3->next=n4;
cout<<head2<<endl;
cout<<n3->data<<" "<<n4->data;

}

