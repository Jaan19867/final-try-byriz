#include<iostream>
using namespace std;
class Node{


public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        next=NULL;
    }

};
Node* takeinput(){   
int data;
cin>>data;
Node *head=NULL;
while(data!=-1){

   // statically banaya he Node n(data);
    Node *newNode=new Node(data);
    
    
    
    if(head==NULL){head= newNode ;}
    else{ Node *temp=head;
    while(temp->next !=NULL){
        temp=temp->next;
    }
    temp->next=newNode;}

    cin>>data;
}

return head;
 

}
void print (Node*head){

    Node *temp=head;
   while(temp>NULL){ cout<<temp->data<<" ";
    temp=temp->next;}

}
int main(){


    // Node n1(1);
    // Node *head=&n1;
    // Node n2(2);
    // n1.next=&n2;
    // cout<<n1.data<<" "<<n2.data<<endl;
    // Node n3(3);
    // Node n4(4);
    // Node n5(5);
    // n2.next=&n3;
    // n3.next=&n4;
    // n4.next=&n5;
    // print(head);
    // print(head);
    Node *head=takeinput();
    print(head);





}