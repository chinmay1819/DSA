#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node*rchild;
    Node*lchild;

    Node(int x){
        data=x;
        rchild=NULL;
        lchild=NULL;
    }

   

};



     void preorder(Node*root){
         if(root!=NULL){
            

        cout<<root->data<<" ";
        preorder(root->lchild);
        preorder(root->rchild);
         }


     }

    void postorder(Node *root){
        if(root!=NULL){
            postorder(root->lchild);
            postorder(root->rchild);
            cout<<root->data<<" ";
        }
    }

    void inorder(Node*root){
        if(root!=NULL){
            inorder(root->lchild);
            cout<<root->data<<" ";
            inorder(root->rchild);


        }
    }













    void levelorder(Node *p){

        queue<Node*>q;
        cout<<p->data<<" ";
        q.emplace(p);
        // q.push(NULL);

        while(!q.empty()){
            // int size=q.size();
            
            p = q.front();
            q.pop();
            if(p->lchild){
                cout<<p->lchild->data<<" ";
                q.emplace(p->lchild);
            }
            if(p->rchild){
                cout<<p->rchild->data<<" ";
                q.emplace(p->rchild);
            }
        
        }

    }

  int countNodes(Node *p){
      int x,y;
      if(p!=NULL)
      {
          x=countNodes(p->lchild);
          y=countNodes(p->rchild);
          return x+y+1;
        
      }
      return 0;
  }  


int main(){
    
    Node*root=new Node(10);




    root->lchild=new Node(20);
    root->rchild=new Node(30);
    root->lchild->lchild=new Node(40);
    root->lchild->rchild=new Node(50);
    root->rchild->lchild=new Node(60);
    root->rchild->rchild=new Node(70);



    cout<<"Preoder Traversal : ";
   preorder(root);
   cout<<endl; 
   cout<<"PostOrder Traversal :";
   postorder(root);
   cout<<endl; 
   cout<<"Inoder Traversal :";
   inorder(root);
    cout<<endl; 
   cout<<"Level order Traversal :";
   levelorder(root);
    cout<<endl;
    cout<<"Number of Nodes in the Binary Tree are : "<<countNodes(root)<<endl;  
}