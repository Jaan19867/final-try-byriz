#include<iostream>
using namespace std;
class Node{
int data;
Node *next;
Node(int data){
    this->data=data;
    next=NULL;



}


};
void print( Node *head){
Node *head=temp;
while(temp>0){  cout<<temp->data;
temp->next=temp;}


}
 Node *takeinput(){ int data;
 cin>> data;
 Node *head=NULL;
 while(data != -1){
    Node *newNode=new newNode(data);
    if(head==NULL){ head=newNode;}
    else(Node *temp=head;
    while(temp->next  !=NULL)){
        temp=temp->next;
    }
    temp->next=newNode;
    cin>>data;


 }
 return head;

 }

 int main(){

Node *head=takeinput();
    print(head);

    
 }