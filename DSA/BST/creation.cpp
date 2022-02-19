#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node*left,*right;

    Node(int x){
        data=x;
        right=left=NULL;
    }
};

void insert(Node*root,int key){
    if(root==NULL)
        {
            root->data=key;
            root->left=root->right=NULL;
            return;
        }
    Node*t=root;
    Node*r;

    while(t!=NULL){
        r=t;
        if(key>t->data)
            t=t->right;
        else
            t=t->left;    
    }
    Node*p=new Node(key);
    if(key>r->data)
        r->right=p;
    else
        r->left=p;    


}
void preorder(Node*root){
    if(root==NULL)
        return;
    root=root->left;
    cout<<root->data<<" ";
    root=root->right;

}



int main(){

    Node*root;
    insert(root,10);
    insert(root,20);
    insert(root,30);
    preorder(root);
    


}