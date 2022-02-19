#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*next;
    Node*prev;

    Node(int x){
        data=x;
        next=prev=NULL;
    }
};

int main(){
    Node*head=new Node(10);
    head->next=new Node(20);
    head->prev=NULL;
    head->next->prev=head;
    head->next->next=new Node(30);
    
    
}