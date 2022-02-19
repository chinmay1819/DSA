#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int x){
        data=x;
        next=NULL;
    }



};
void print(Node*head){
     Node*p=head;
     if(p==NULL)
        return;
     cout<<p->data<<endl;
     print(p->next);   
 }

//inserting at the end of the linked list

void insertatend(Node*head,Node*in){
    Node*p=head;
    while(p->next!=NULL)
        p=p->next;
    p->next=in;
        
}

//deleting last Node 

void deletelastnode(Node*head){
    Node*p=head;
    while(p->next->next!=NULL)
        p=p->next;

    p->next=NULL;    

}







int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    
    Node*in=new Node(60);
    insertatend(head,in);
    print(head);
    cout<<"After deleting the last node "<<endl;
    deletelastnode(head);
    print(head);
}