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





int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    print(head);
}