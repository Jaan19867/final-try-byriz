#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){ this->data=data;
    next=NULL;}
};

int main(){
    Node n1(1);
    Node *head=&n1;
    Node n2(2);
    n1.next=&n2;
    cout<<n1.data<<" "<<n2.data<<endl;
    cout<<head->data<<endl;
    //creting dynamically
    Node *n3=new Node(3);
    Node *n4=new Node(4);
    Node*n5=new Node(5);
    n3->next=n4;
    n4->next=n5;
    cout<<n3->data<<" "<<n4->data<<" "<<n5->data<<endl;
    


}