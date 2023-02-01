#include<iostream>
using namespace std;
class Node{    public: 
int data;
Node*next;
Node(int data){  this->data=data;
next=NULL;}

};
Node *takeinput(){


    int data;
    cin>>data;
    Node *head=NULL;
    while(data !=-1){ Node *newNode=new Node(data);
    if(head==NULL){ head=newNode;}
    else{Node *temp=head;
    while(temp!=NULL){ temp=temp->next;
    temp->next=newNode;}}
    
    cin>>data; }
    return head;
}



   void print( Node *head){
Node*temp=head;
while(temp>NULL){ cout<<temp->data<<" ";
temp=temp->next;}

}










 int main(){  
    //Node n1(1);
// // Node *head=&n1;
// Node n2(2);
// // n1->next=&n2;  
// n1.next=&n2;
// Node n3(3);
// n2.next=&n3;
// print(head);
Node *head=takeinput();
    print(head);




}





